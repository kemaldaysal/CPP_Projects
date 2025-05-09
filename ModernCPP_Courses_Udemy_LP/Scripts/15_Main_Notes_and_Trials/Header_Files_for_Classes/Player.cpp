#include "Player.h"

int Player::num_players {0};

int Player::get_num_players(void)
{
    return num_players;
}

// Good way of building a constructor
Player::Player(std::string new_name, int new_health, int new_xp)
    : name{new_name}, health{new_health}, xp{new_xp}
{
    ++num_players;
}


// Copy constructor - shallow copying but with a delegating way, both this function and the main constructor will be executed, too.
Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp}
    // : name{source.name}, health{source.health}, xp{source.xp} // this'll shorten it and then only this function will be executed.
{
} 

Player::~Player()
{
    --num_players;
}