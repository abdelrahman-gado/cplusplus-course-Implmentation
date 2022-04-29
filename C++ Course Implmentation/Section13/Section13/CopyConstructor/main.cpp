#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
    int *xp_ptr;
    
public:
    std::string get_name () { return name; }
    int get_health () { return health; }
    int get_xp () { return xp; }
    
    
    Player (std::string name_val = "None", int health_val = 0, int xp_val = 0);
    
    // Copy-Constructor
    Player (const Player &source);
    
    //Destructor
    ~Player() { cout << "Destructor is called for " << name << endl; }
    
};

Player::Player (std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val}
{
    cout << "Three-args constructor for " << name << endl;
}

// Implementing Copy-Constructor
Player::Player (const Player &source)
//    : name {source.name}, health {source.health}, xp {source.xp}
    Player {soyrce.name, source.health, source.xp}
{
    cout << "Copy-Constructor - made copy of " << source.name << endl;
}



void display_player (Player p)
{
    cout << p.get_name() << endl;
    cout << p.get_health() << endl;
    cout << p.get_xp() << endl;
}


int main() 
{
    Player empty {"XXXX", 100, 50};
    Player another_player {empty};
    
    display_player(empty);
    
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"villain", 100, 55};
    
    return 0;
}