#pragma once

#include <vector>
#include "../headers/player.h"


class Game
{

public:
void init_objects();

std::vector<Player*> player_list;

private:
void initPlayers();
void initMenus();
void gameStart();

};