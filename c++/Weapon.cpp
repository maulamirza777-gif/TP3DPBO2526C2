#include <iostream>
#include <string>
#include "Item.cpp"
using namespace std;

class weapon: public item{
    private:
    int damage;
    public:
    weapon(){
    }
    weapon(string id, string name, int price, string description, int damage):item(id, name, price, description){
        this->damage = damage; 
    }
    int getDamage(){
        return this->damage;
    }
    void setDamage(int damage){
        this->damage = damage;
    }
    
};
