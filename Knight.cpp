#include "Knight.h"
#include "Weapon.h"

#include<iostream>
using namespace std;

Knight::Knight(string nm,int s, string t, int stam, int hc)
:name(nm),stamina(s), weapon_in_hand(t,stam, hc), on_horse(true)
{
   
}

void Knight::display()
{
    
    if (stamina < 0) {
    cout << name <<" is exhausted and is still on the horse."<< endl;
     
    }
    else {
        if (on_horse == false) {
            cout << name << " is not exhausted (" << stamina << " stamina) and has been knocked off the horse." << endl;
        }
        else{
         cout << name <<" is not exhausted ("<< stamina<<" stamina) and is still on the horse."<< endl;
        }
    }

    cout << name;
    weapon_in_hand.display();
    

}

//Knight unhorse_yourself Definition
void Knight::unhorse_yourself()
{
  
    on_horse = false;
  
}   

//Knight are_you_on_horse Definition
bool Knight::are_you_on_horse()
{
    if(on_horse == true)
    {
           return true;
           }
    else{
           return false;
           }
}


//Knight are_you_exhausted Definition
bool Knight::are_you_exhausted()
{
    if(stamina <= 0)
    {
         return true;
         }
    else{
         return false;
         }
}

//Knight Attack Definition
bool Knight::attack()
{
  
    stamina = stamina - weapon_in_hand.get_stamina_required();
  
    if(weapon_in_hand.did_you_hit() == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Knight get_name Definition
string Knight::get_name()
{
       return name;
}

