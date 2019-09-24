#include <iostream>
using namespace std;

#include "Weapon.h"
#include "Knight.h"

int main() {
  
    string kname;
    int kstamina;
    string kweapon;
    int krequired;
    int kchance;
    
    
    int round = 1;
    
    
  
    cout <<"Name of the first Knight: ";
    cin >>kname;
    cout << "How much stamina do they have?: ";
    cin >> kstamina;
    cout << "Type of weapon they have: ";
    cin >>kweapon;
    cout << "Stamina required to use weapon: ";
    cin >> krequired;
    cout << "Hit chance of the weapon: ";
    cin >> kchance;
    Knight k1(kname, kstamina, kweapon, krequired, kchance);
   
    cout << endl;
    
    cout <<"Name of the second Knight: ";
    cin >> kname;
    cout << "How much stamina do they have?: ";
    cin >> kstamina;
    cout << "Type of weapon they have: ";
    cin >> kweapon;
    cout << "Stamina required to use weapon: ";
    cin >> krequired;
    cout << "Hit chance of the weapon: ";
    cin >> kchance;
    Knight k2(kname, kstamina, kweapon, krequired, kchance);
    
  
   
    
  
   while(k1.are_you_on_horse() == true && k2.are_you_on_horse() == true && k1.are_you_exhausted() == false && k2.are_you_exhausted() == false)
   {
    cout <<"************ Round "<< round << " ************" << endl;
        if(k1.attack() == true && k1.are_you_exhausted () == false)
          {
            k2.unhorse_yourself();
          }
                              
        if(k2.are_you_on_horse() == true && k2.are_you_exhausted () == false)
          {
            if(k2.attack() == true)
          {
            k1.unhorse_yourself();
          }
          }
       k1.display();
       
       k2.display();
       
          round++;
   }
     cout <<"************ Game Over ************" << endl;
  
   if(k1.are_you_on_horse() == true && k1.are_you_exhausted() == false)
   {
    cout << k1.get_name() <<" has won!"<< endl;
   }     
  
   else
   {
    cout << k2.get_name() <<" has won!"<< endl;
   }
    
    return 0;
}



