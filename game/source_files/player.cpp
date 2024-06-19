#include <iostream>
#include <string>
#include "../headers/player.h"

Player::Player(int player_index)
{
    instance_eval.name = std::string("Player#" + std::to_string(player_index));
};