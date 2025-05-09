#ifndef _PLAYER_H_ // include guard
#define _PLAYER_H_

#include <string>

class Player
{
private:
    std::string name;
    int health;
    int xp;

    static int num_players; // statics apply to entire class

public:
    static int get_num_players(void);

    Player(std::string new_name = "None", int new_health = 0, int new_xp = 0);
    Player(const Player &source); // Copy constructor
    ~Player(); // Destructor
};

// Function implementations are in a separate file named HBank_Account.cpp

#endif