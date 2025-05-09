#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
#include <iostream>

class Movie
{
private:
    std::string *name;
    std::string *age_rating; // G, PG, PG-13, R
    size_t *like_rating;
    size_t *count_watched;

public:
    void increment_watch_count(void);
    void display_movie_info(void) const;

    //void f_deep_copy_test(Movie obj);


    // Getter functions
    std::string get_name(void) const;
    std::string get_age_rating(void) const;
    size_t get_like_rating(void) const;
    size_t get_count_watched(void) const;

    // Setter functions
    void set_name(std::string new_name);
    void set_age_rating(std::string new_age_rating);
    void set_like_rating(size_t new_like_rating);
    void set_name(size_t new_count_watched);

    // Class construction functions
    Movie(std::string new_name = "NoName", std::string new_age_rating = "NoAgeRating", size_t new_like_rating = 0, size_t new_count_watched = 0);
    Movie(const Movie &source); // copy constructor (deep - delegating) // Commented 291124 1720
    Movie(Movie &&source) noexcept; // move constructor
    
    Movie &operator=(const Movie &rhs); // Copy assignment operator
    Movie &operator=(Movie &&rhs) noexcept; // Move assignment operator

    // Movie(const Movie &source) = delete;          // Copy constructor disabled
    // Movie &operator=(const Movie &source) = delete; // Copy assignment operator disabled

    ~Movie();
};

#endif