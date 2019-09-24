#ifndef KNIGHT_H
#define KNIGHT_H

#include<iostream>
#include "Weapon.h"

using namespace std;

class Knight {
public:
    
    Knight (string nm,int s, string t, int stam, int hc);
    void display();
    void unhorse_yourself();
    bool are_you_on_horse();
    bool are_you_exhausted();
    bool attack();
    string get_name();
    
private:
    Weapon weapon_in_hand;
    int stamina;
    string name;
    bool on_horse;
    
};
#endif
