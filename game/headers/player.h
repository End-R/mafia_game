#pragma once

#include <iostream>
#include <string>

class Player
{

    public:

        Player(int player_index);
        struct PlayerStruct
        {
            std::string name;
            std::string role;
            int count_fouls = 0;
            int count_votes = 0;
            bool is_alive = true;
            bool is_nominated = false;

        };
        PlayerStruct instance_eval;
};