#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "Movie.h"
#include <string>
#include <iostream>
#include <vector>

class Movies
{
private:
    std::vector<Movie> movies;
    static size_t movie_count;

public:
    bool add_movie(std::string new_name, std::string new_age_rating, size_t new_like_rating, size_t count_watched);
    bool delete_movie(std::string movie_name);
    void display_movies(Movies &movie_list) const;
    bool increment_watched(std::string name);

    Movies();
    Movies(Movies &&source) noexcept; // Move constructor
    Movies(const Movies &source);     // copy constructor (deep - delegating)
    ~Movies();
};

#endif