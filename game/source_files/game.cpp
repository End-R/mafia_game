#include <iostream>
#include <vector>
#include "../headers/player.h"
#include "../headers/game.h"

const int MAX_FIX_PLAYERS = 10;
void Game::init_objects()
{
    initPlayers();
     

}
void Game::initPlayers()
{
    for (int i = 0; i < MAX_FIX_PLAYERS; i++)
    {
        player_list.push_back(new Player(i));
    }
    for (int i = 0; i < player_list.size(); i++)
    {
       std::cout << "Player " << i + 1 << " = " << player_list[i]->instance_eval.name << std::endl;

    }
}