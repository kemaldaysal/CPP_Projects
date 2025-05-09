/*
Movies class must be modeled with a vector and it should contain Movie class objects.
Movies class needs to know about Movie class (DONE)
Our main driver should only interact with the Movies class. So it's going to create a movies object and work with that. (DONE)

A simple main should be able to
- Create a Movies object (DONE)
- Ask the Movies object to add a movie by providing the movie name, rating and watched count. (DONE)
- Ask the Movies object to increment the watched count by 1 for a movie given it's name (DONE)
- Ask the Movies object to display all of it's movies it has (DONE)

Additionally,
- If we try to add a movie whose name is already in the movies collection,
we should display this error to the user (DONE)
- If we try to increment the watched count for a movie whose name isn't in the movies collection,
we should display this error to the user. (DONE)

* Now obviously movies class has a bunch of movies in it. So in that case, it could just ask each movie:
Hey, display yourself, display yourself etc.. (DONE)

*Movie and main

--EXTRAS by me: 
* Delete a movie from Movies list (DONE)
* Do them all again with raw pointers (NEXT - IN PROCESS - DO THIS LATER AFTER YOU LEARN MORE - Copy and Move constructors will be needed for Movies.h
* Place const methods wherever possible  (DONE)
* Fill the constructors and other similar functions of Movies.cpp (DONE)
* Use friend classes if needed (NOT NEEDED)

*/

#include <iostream>
#include <vector>
#include "Movies.h"

int main(void)
{
    Movies movie_list;

    movie_list.display_movies(movie_list);

    movie_list.add_movie("Deadpool", "R", 8, 1);
    movie_list.add_movie("Jurassic Park", "13", 6, 3);
    movie_list.display_movies(movie_list);

    movie_list.increment_watched("Deadpool");
    movie_list.increment_watched("Hitman");

    movie_list.add_movie("Deadpool", "GP", 5, 4);
    movie_list.display_movies(movie_list);

    movie_list.delete_movie("Deadpool");
    movie_list.display_movies(movie_list);

    movie_list.increment_watched("Jurassic Park");
    movie_list.display_movies(movie_list);

    std::cout << "End of the program" << std::endl;

    return 0;
}