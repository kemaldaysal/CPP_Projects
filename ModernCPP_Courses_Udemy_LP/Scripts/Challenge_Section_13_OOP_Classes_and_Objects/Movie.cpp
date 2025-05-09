#include "Movie.h"

//---------------------------- Object Functions - start

void Movie::increment_watch_count(void)
{
    ++(*count_watched);
}

void Movie::display_movie_info(void) const
{
    std::cout << "The movie " << *name
              << " with an age rating of " << *age_rating
              << ", watched " << *count_watched
              << " times and liked " << *like_rating << "/10."
              << std::endl;
}

// void Movie::f_deep_copy_test(Movie copied_movie)
// {
//     std::cout << "Before changing anything, here's the movie: " << std::endl;
//     std::cout << "Name: " << *(copied_movie.name)
//               << ", Age rating: " << *(copied_movie.age_rating)
//               << ", Like rating: " << *(copied_movie.like_rating)
//               << ", Count watched: " << *(copied_movie.count_watched) << std::endl;

//     *(copied_movie.age_rating) = "M";
//     *(copied_movie.name) = "Deadpool";

//     std::cout << "After making name Deadpool and age rating as 18: " << std::endl;
//     std::cout << "Name: " << *(copied_movie.name)
//               << ", Age rating: " << *(copied_movie.age_rating)
//               << ", Like rating: " << *(copied_movie.like_rating)
//               << ", Count watched: " << *(copied_movie.count_watched) << std::endl;
// }

//---------------------------- Object Functions - end

//---------------------------- External Functions - start

//---------------------------- External Functions - end

//---------------------------- Declaration of getter functions - start

std::string Movie::get_name(void) const
{
    return *(name);
}
std::string Movie::get_age_rating(void) const
{
    return *(age_rating);
}

size_t Movie::get_like_rating(void) const
{
    return *(like_rating);
}

size_t Movie::get_count_watched(void) const
{
    return *(count_watched);
}

//---------------------------- Declaration of getter functions - end

//---------------------------- Declaration of setter functions - start

void Movie::set_name(std::string new_name)
{
    *(name) = new_name;
}
void Movie::set_age_rating(std::string new_age_rating)
{
    *(age_rating) = new_age_rating;
}
void Movie::set_like_rating(size_t new_like_rating)
{
    *(like_rating) = new_like_rating;
}
void Movie::set_name(size_t new_count_watched)
{
    *(count_watched) = new_count_watched;
}

//---------------------------- Declaration of setter functions - end

// Main constructor without pointers
// Movie::Movie(std::string new_name, std::string new_age_rating, size_t new_like_rating, size_t new_count_watched)
//     : name{new_name}, age_rating{new_age_rating}, like_rating{new_like_rating}, count_watched{new_count_watched}
// {
//     std::cout << "Main constructor called for" << name << std::endl;
// }

//---------------------------- Main constructor with pointers
Movie::Movie(std::string new_name, std::string new_age_rating, size_t new_like_rating, size_t new_count_watched)
    : name{nullptr}, age_rating{nullptr}, like_rating{nullptr}, count_watched{nullptr}
{
    name = new std::string;
    *name = new_name;

    age_rating = new std::string;
    *age_rating = new_age_rating;

    like_rating = new size_t;
    *like_rating = new_like_rating;

    count_watched = new size_t;
    *count_watched = new_count_watched;

    std::cout << "--Movie::Main constructor called for: " << *name << std::endl;
}

//---------------------------- Copy Constructor by ChatGPT
Movie::Movie(const Movie &source)
    : name{new std::string{*source.name}},
      age_rating{new std::string{*source.age_rating}},
      like_rating{new size_t{*source.like_rating}},
      count_watched{new size_t{*source.count_watched}}
{
    std::cout << "--Movie::Copy constructor called for: " << *name << std::endl;
}

// Copy assignment operator
Movie &Movie::operator=(const Movie &rhs)
{
    if (this == &rhs)
        return *this;

    *name = *rhs.name;
    *age_rating = *rhs.age_rating;
    *like_rating = *rhs.like_rating;
    *count_watched = *rhs.count_watched;

    std::cout << "--Movie::Copy assignment operator called for: " << *name << std::endl;

    return *this;
}

//---------------------------- Move Constructor
Movie::Movie(Movie &&source) noexcept
    : name{source.name},
      age_rating{source.age_rating},
      like_rating{source.like_rating},
      count_watched{source.count_watched}
{
    std::cout << "--Movie::Move constructor - moving resource: " << *name << std::endl;
    source.name = nullptr;
    source.age_rating = nullptr;
    source.like_rating = nullptr;
    source.count_watched = nullptr;
}

// Move assignment operator
Movie &Movie::operator=(Movie &&rhs) noexcept
{
    if (this == &rhs)
        return *this;

    delete name;
    delete age_rating;
    delete like_rating;
    delete count_watched;

    name = rhs.name;
    age_rating = rhs.age_rating;
    like_rating = rhs.like_rating;
    count_watched = rhs.count_watched;

    rhs.name = nullptr;
    rhs.age_rating = nullptr;
    rhs.like_rating = nullptr;
    rhs.count_watched = nullptr;

    std::cout << "--Movie::Move assignment operator called for: " << *name << std::endl;

    return *this;
}

//---------------------------- Destructor
Movie::~Movie()
{
    if (name != nullptr)
    {
        std::cout << "--Movie::Destructor called for " << *(name) << std::endl;
    }
    else
    {
        std::cout << "--Movie::Destructor called for nullptr" << std::endl;
    }
    delete name;
    delete age_rating;
    delete like_rating;
    delete count_watched;
}

// Unused Functions

//---------------------------- Empty parameter delegator (commented because this is done by putting default parameters in function prototype)
// Movie::Movie()
//     : Movie{"NoName", "NoAgeRating", 0, 0}
// {
//     std::cout << "Empty delegation constructor called" << std::endl;
// }

//---------------------------- Copy Constructor - Shallow Copying
// Movie::Movie(const Movie &source)
//     : name{source.name}, age_rating{source.age_rating}, like_rating{source.like_rating}, count_watched{source.count_watched}
// {
//     std::cout << "Copy constructor called for source.name: " << source.name << std::endl;
// }

// //---------------------------- Copy Constructor - Deep Copying (Delegator Way) // Commented 291124 1720
// Movie::Movie(const Movie &source)
//     : Movie{*(source.name), *(source.age_rating), *(source.like_rating), *(source.count_watched)}
// {
//     std::cout << "--Movie::Deep copy constructor called for source.name: " << *(source.name) << std::endl;
// }
