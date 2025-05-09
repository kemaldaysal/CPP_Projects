// Section 20
// Challenge 2
//  Lists

/*

NOTES:
    * Implement a sort algorithm based on ratings // Somehow override the < operator from it's sort by name form
    * Reading a music list from a file and implementing them into our list with emplace?
    * Save the playlist into a file and make the playlist persistent, retrieve it whenever the program is opened
    * Fix getc problems

    DONE
    -Fix string input problems
    -Implement a search & play algorithm
    -Implement a delete music algorithm
    -Fully check the seg fault conditions that's caused by empty lists
    -Sort alphabetically

*/

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <limits>

#include "Song.h"

void display_menu();
void display_playlist(const std::list<Song> &playlist, const std::list<Song>::iterator &current_song);
void play_song(const Song &song);
void play_first_song(std::list<Song> &playlist, std::list<Song>::iterator &current_song);
void play_next_song(std::list<Song> &playlist, std::list<Song>::iterator &current_song);
void play_previous_song(std::list<Song> &playlist, std::list<Song>::iterator &current_song);
void search_and_play_a_song(std::list<Song> &playlist, std::list<Song>::iterator &current_song);
void add_song_to_playlist(std::list<Song> &playlist, std::list<Song>::iterator &current_song);
void remove_a_song_from_playlist(std::list<Song> &playlist, std::list<Song>::iterator &current_song);
void clear_playlist(std::list<Song> &playlist, std::list<Song>::iterator &current_song);
void sort_playlist(std::list<Song> &playlist, std::list<Song>::iterator &current_song);
bool is_playlist_not_empty(const std::list<Song> &playlist);

int main()
{

    std::list<Song> playlist{
        {"God's Plan", "Drake", 5},
        {"Never Be The Same", "Camila Cabello", 5},
        {"Pray For Me", "The Weekend and K. Lamar", 4},
        {"The Middle", "Zedd, Maren Morris & Grey", 5},
        {"Wait", "Maroone 5", 4},
        {"Whatever It Takes", "Imagine Dragons", 3}};

    std::list<Song>::iterator current_song = playlist.begin();

    // Your program logic goes here
    if (is_playlist_not_empty(playlist))
    {
        display_playlist(playlist, current_song);
    }
    char mode_selection{};

    do
    {
        display_menu();
        std::cin >> mode_selection;
        std::cout << std::endl;

        mode_selection = std::tolower(mode_selection);

        if (mode_selection == 'l')
        {
            if (is_playlist_not_empty(playlist))
            {
                display_playlist(playlist, current_song);
            }
        }

        else if (mode_selection == 'f')
        {
            if (is_playlist_not_empty(playlist))
            {
                play_first_song(playlist, current_song);
            }
        }

        else if (mode_selection == 'n')
        {
            if (is_playlist_not_empty(playlist))
            {
                play_next_song(playlist, current_song);
            }
        }

        else if (mode_selection == 'p')
        {
            if (is_playlist_not_empty(playlist))
            {
                play_previous_song(playlist, current_song);
            }
        }

        else if (mode_selection == 's')
        {
            if (is_playlist_not_empty(playlist))
            {
                search_and_play_a_song(playlist, current_song);
            }
        }

        else if (mode_selection == 'a')
        {
            add_song_to_playlist(playlist, current_song);
        }

        else if (mode_selection == 'd')
        {
            if (is_playlist_not_empty(playlist))
            {
                remove_a_song_from_playlist(playlist, current_song);
            }
        }

        else if (mode_selection == 'c') // clear the playlist
        {
            if (is_playlist_not_empty(playlist))
            {
                clear_playlist(playlist, current_song);
            }
        }

        else if (mode_selection == 'r') // clear the playlist
        {
            if (is_playlist_not_empty(playlist))
            {
                sort_playlist(playlist, current_song);
            }
        }

        else if (mode_selection == 'q')
        {
            std::cout << "Quitting, thanks for listening!" << std::endl;
        }

        else
        {
            std::cout << "Invalid selection, try again or quit" << std::endl;
        }

    } while (mode_selection != 'q');

    return 0;
}

void display_menu()
{
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "S - Search a song and play it" << std::endl;
    std::cout << "D - Search a song and delete it" << std::endl;
    std::cout << "R - Sort the playlist alphabetically" << std::endl;
    std::cout << "C - Clear the playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void display_playlist(const std::list<Song> &playlist, const std::list<Song>::iterator &current_song)
{
    // This function should display the current playlist
    // and then the current song playing.

    std::cout << std::endl;

    for (auto &song : playlist)
    {
        std::cout << song << std::endl;
    }

    std::cout << "\n"
              << "Current song:" << std::endl;
    std::cout << *current_song << std::endl;
}

void play_song(const Song &song)
{
    // This function should display
    // Playing: followed by the song that is playing
    std::cout << "Playing: " << std::endl;
    std::cout << song << std::endl;
}

void play_first_song(std::list<Song> &playlist, std::list<Song>::iterator &current_song)
{
    current_song = playlist.begin();
    play_song(*current_song);
}

void play_next_song(std::list<Song> &playlist, std::list<Song>::iterator &current_song)
{
    // if (!(*current_song == (playlist.back())))
    // {
    //     current_song++;
    // }
    // else
    // {
    //     std::cout << "Wrapping to start of playlist" << std::endl;
    //     current_song = playlist.begin();
    // }

    // Alternative Way

    current_song++;

    if (current_song == playlist.end())
    {
        std::cout << "Wrapping to start of playlist" << std::endl;
        current_song = playlist.begin();
    }

    play_song(*current_song);
}

void play_previous_song(std::list<Song> &playlist, std::list<Song>::iterator &current_song)
{
    // if (!(*current_song == (playlist.front())))
    // {
    //     current_song--;
    // }
    // else
    // {
    //     std::cout << "Wrapping to end of playlist" << std::endl;
    //     std::advance(current_song, playlist.size() - 1);
    // }

    // Alternative Way

    if (current_song == playlist.begin())
    {
        std::cout << "Wrapping to end of playlist" << std::endl;
        current_song = playlist.end(); // no data at playlist.end() !!
    }

    current_song--;
    play_song(*current_song);
}

void search_and_play_a_song(std::list<Song> &playlist, std::list<Song>::iterator &current_song)
{
    std::string searched_song{};

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter the name of the song that you want to play: " << std::endl;
    std::getline(std::cin, searched_song);

    // current_song = std::find(playlist.begin(), playlist.end(), Song{searched_song});
    auto it{std::find(playlist.begin(), playlist.end(), Song{searched_song})};
    if (it != playlist.end())
    {
        current_song = it;
        play_song(*current_song);
    }
    else
    {
        std::cout << "Couldn't find that song" << std::endl;
    }
}

void add_song_to_playlist(std::list<Song> &playlist, std::list<Song>::iterator &current_song)
{
    std::string name {};
    std::string artist {};
    int rating {};

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter the song's name: " << std::endl;
    std::getline(std::cin, name);

    std::cout << "Enter the artist: " << std::endl;
    std::getline(std::cin, artist);

    while (1)
    {
        std::cout << "Enter your rating between 1-5: ";
        std::cin >> rating;
        if (rating >= 1 && rating <= 5)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        else
        {
            std::cout << "Invalid rating input, try again." << std::endl;
        }
    }
    if (!(playlist.empty()))
    {
        playlist.emplace(current_song, name, artist, rating);
    }
    else
    {
        current_song = playlist.emplace(current_song, name, artist, rating);
    }
}

void remove_a_song_from_playlist(std::list<Song> &playlist, std::list<Song>::iterator &current_song)
{
    std::string searched_song{};

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Search a song by it's name to delete it: " << std::endl;
    std::getline(std::cin, searched_song);

    auto it_d{std::find(playlist.begin(), playlist.end(), Song(searched_song))};
    if (it_d != playlist.end())
    {
        std::cout << "Deleted " << searched_song << " from the list." << std::endl;
        if (current_song == it_d)
        {
            play_next_song(playlist, current_song);
        }
        playlist.erase(std::find(playlist.begin(), playlist.end(), Song(searched_song)));
    }
    else
    {
        std::cout << "Couldn't find that song" << std::endl;
    }
}

void clear_playlist(std::list<Song> &playlist, std::list<Song>::iterator &current_song)
{
    playlist.clear();
    current_song = playlist.begin();
    std::cout << "Cleared the playlist" << std::endl;
}

void sort_playlist(std::list<Song> &playlist, std::list<Song>::iterator &current_song)
{
    playlist.sort();
    // don't forget to put current song to where it was used to be by using find
}

bool is_playlist_not_empty(const std::list<Song> &playlist)
{
    if (playlist.empty())
    {
        std::cout << "Playlist is empty. First, at least 1 song must be added." << std::endl;
        return 0;
    }
    else
    {
        return 1;
    }
}