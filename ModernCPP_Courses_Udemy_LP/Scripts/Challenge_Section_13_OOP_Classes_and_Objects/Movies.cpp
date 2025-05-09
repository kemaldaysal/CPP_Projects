#include "Movies.h"

size_t Movies::movie_count{0};

bool Movies::add_movie(std::string new_name, std::string new_age_rating, size_t new_like_rating, size_t new_count_watched)
{
    // for (size_t i{}; i < movie_count; i++)
    for (const Movie &i_movie : movies)
    {
        if (new_name == i_movie.get_name())
        {
            std::cout << "The movie " << i_movie.get_name() << " is already added. Duplicates aren't allowed !!\n"
                      << std::endl;
            return 1; // return 1 if duplicates involved
        }
    }

    movies.push_back(Movie{new_name, new_age_rating, new_like_rating, new_count_watched});
    movie_count++;

    return 0; // return 0 if everything is OK ??
}

bool Movies::delete_movie(std::string movie_name)
{
    for (size_t i{}; i < movie_count; i++)
    {
        if (movie_name == movies.at(i).get_name())
        {
            std::cout << "The movie " << movies.at(i).get_name() << " is deleted.\n" << std::endl;
            movies.erase(movies.begin() + i);
            movie_count--;

            return 1; // return 0 if OK
        }
    }

    std::cout << "Invalid input. Movie: " << movie_name << " isn't in the movie list." << std::endl;
    return 0; // return 1 if movie not found ??
}

void Movies::display_movies(Movies &movie_list) const
{
    if (movies.size() <= 0)
    {
        std::cout << "No movies added yet!!\n" << std::endl;
    }
    else
    {
        std::cout << movies.size() << " movies will be displayed:" << std::endl;

        for (const Movie &i_movie : movies)
        {
            // std::cout << (i + 1) << ") ";
            // auto index_i = find(movies.begin(), movies.end(), i_movie); 
            // std::cout << (index_i-movies.begin()) << ") ";
            i_movie.display_movie_info();
        }

        std::cout << "\n";
    }
}

bool Movies::increment_watched(std::string t_name)
{
    // for (size_t i{}; i < movie_count; i++)
    for (Movie &i_movie : movies)
    {
        if (t_name == (i_movie.get_name()))
        {
            i_movie.increment_watch_count();
            std::cout << "Incremented watch count of " << i_movie.get_name() << " by 1." << std::endl;
            std::cout << "Now, " << i_movie.get_name() << " is watched " << i_movie.get_count_watched() << " times.\n"
                      << std::endl;
            return 0; // return 0 if OK, element is found
        }
    }

    std::cout << "There isn't a movie added with the name of " << t_name << ", add it first!\n"
              << std::endl;
    return 1; // return 1 if fault !!
}

//---------------------------- Main constructor with pointers
Movies::Movies(void)
{
    std::cout << "---(Movies) Main constructor called." << std::endl;
}

//---------------------------- Empty parameter delegator (commented because this is done by putting default parameters in function prototype)
// not needed here?
//---------------------------- Move Constructor
// might be more useful when pointers implemented
Movies::Movies(Movies &&source) noexcept
{
    std::cout << "---(Movies) Move constructor called" << std::endl;
}
//---------------------------- Copy Constructor - Shallow Copying

//---------------------------- Copy Constructor - Deep Copying (Delegator Way)
Movies::Movies(const Movies &source)
{
    std::cout << "---(Movies) Deep copy constructor called" << std::endl;
}
//---------------------------- Destructor
Movies::~Movies()
{
    std::cout << "---(Movies) Destructor called" << std::endl;
}