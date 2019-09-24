#include "Random.h"
#include "Weapon.h"
#include<iostream>
using namespace std;

Weapon::Weapon (string t,int stam, int h)
:type(t), stamina_required(stam),hit_chance(h)
{
    
}

int Weapon::get_stamina_required()
{
    return stamina_required;
}


//Weapon Display Definition
void Weapon::display()
{
    
    cout << " is using: " << type << " that costs " << stamina_required << " stamina and has a " << hit_chance<< "%" << " chance to hit." << endl;

}

//Weapon did_you_hit Definition 
bool Weapon::did_you_hit()
{
    Random hit(1, 100);
    if(hit.get() < hit_chance){
           return true;
           }
    else{
           return false;
           }
} 


