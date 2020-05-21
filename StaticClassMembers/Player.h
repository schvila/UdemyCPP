#pragma once

#include <iostream>

class Player
{
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
public:
    //guaranties no internal change
    std::string get_name() const {
        return name;
    }
    void set_name(std::string name_val) {
        name = name_val;
    }
    // Overloaded Constructors
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    //Copy constructor
    Player(const Player& source);

    ~Player();

    static int get_num_players();
};

