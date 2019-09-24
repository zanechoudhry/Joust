#ifndef WEAPON_H
#define WEAPON_H

#include<iostream>
using namespace std;

class Weapon {
      public:
    
             Weapon (string t,int stam, int h);
             void display();
             int get_stamina_required();
             bool did_you_hit();
    
      private:
              int stamina_required;
              string type;
              int hit_chance;
    
};
#endif
