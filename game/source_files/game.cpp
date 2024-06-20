#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

#include "../headers/player.h"
#include "../headers/game.h"

const int MAX_FIX_PLAYERS = 10;
void Game::init_objects()
{
    initPlayers();
    initMenus();
     

}

void Game::initPlayers()
{
    for (int i = 0; i < MAX_FIX_PLAYERS; i++)
    {
        player_list.push_back(new Player(i));
    }
}
void Game::initMenus()
{
    std::vector<std::string> welcome_menu = 
    {
        "\t\t\tДобро пожаловать в классическую мафию!!!\n",
        "\t\t\tПожалуйства выберите опцию...\n",
        " 1) Начать игру!\n",
        " 2) Выйти из игры\n",
        " Ваш выбор: ",
    };
    std::vector<std::string> game_menu = 
    {
        "\t\t\tОсновное меню классической мафии\n", //0
        "\t\t\tПожалуйства выберите опцию...\n",//1
        " 1) Начать игру\n",//2
        " 2) Ввести ники участников\n",//3
        " 3) Очистить ники участников\n",//4
        " 4) Назад\n",
        " Ваш выбор: ",
    };
    int choice;
    do
    {
        
        for (int i = 0; i < welcome_menu.size(); i++) std::cout << welcome_menu[i];
        std::cin>>choice;
        if (choice == 1)
        {
             int sub_choice;
            do
            {
               
                for (int i = 0; i < game_menu.size(); i++) std::cout << game_menu[i];
                std::cin>>sub_choice;
                switch (sub_choice)
                {
                    case 1:
                        gameStart();
                        break;

                    case 2:
                        for (int i = 0; i < player_list.size(); i++)
                            {
                                std::cout << "Игрок №" << i + 1 << ": ";
                                std::cin >> player_list[i]->instance_eval.name;
                                std::cout << std::endl;
                            }
                        for (int i = 0; i < player_list.size(); i++) std::cout << "Игрок №" << i + 1 << ": " << player_list[i]->instance_eval.name << std::endl;
                        
                        break;
                    case 3:
                        for (int i = 0; i < player_list.size(); i++) player_list[i]->instance_eval.name = "Player#" + std::to_string(i);
                        
                        for (int i = 0; i < player_list.size(); i++) std::cout << "Игрок №" << i + 1 << ": " << player_list[i]->instance_eval.name << std::endl;
                        break;
                    case 4:
                        break;
                    
                    default:
                        std::cout << "\t\t\tНеверный выбор. Попробуйте снова.\n";
                        break;
                }
            } while (sub_choice != 4);
            
        }
        
        /* code */
    } while (choice != 2);
    
    
}

void Game::gameStart()
{
    std::vector<std::string> roles = {"ДОН","МАФИЯ","МАФИЯ","ШЕРИФ","МИРНЫЙ","МИРНЫЙ","МИРНЫЙ","МИРНЫЙ","МИРНЫЙ","МИРНЫЙ"};
    
    

    

    std::cout<<"\t\t\tУчастники игры и их роли\n\n";
    for (int i = 0; i < player_list.size(); i++)
    {
       std::cout<<" 1) Игрок №" << i + 1 << " - " << player_list[i]->instance_eval.name << "\tРоль: "<< player_list[i]->instance_eval.role <<std::endl;
    }
    
    
}