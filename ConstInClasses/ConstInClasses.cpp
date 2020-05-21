//EVERY METHOD THAT NOT CHANGES INTERNAL SHOULD BE CONST std::string get_name() const

#include <iostream>

class Player
{
private:
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

};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{}

void display_player_name(const Player& p)
{
    std::cout << p.get_name() << std::endl;
}

int main()
{
    const Player villan{ "Villan", 100, 55 };
    //villan.set_name("v1"); // no for const class
    //villan.get_name(); // no for const class, compiler cannot guarante no changes in const
    Player hero{ "Hero", 100, 15 };
    
    std::cin.get();
}
