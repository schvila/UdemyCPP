// StaticClassMembers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h"

void display_act_players()
{
    std::cout << Player::get_num_players() << std::endl;
}
int main()
{
    display_act_players();

    Player hero{ "Hero" };
    display_act_players();

    {
        Player frank{ "frank" };
        display_act_players();
    }
    display_act_players();
    Player* enemy = new Player{ "Enemy" };
    display_act_players();
    delete enemy;
    display_act_players();

    std::cin.get();
}
