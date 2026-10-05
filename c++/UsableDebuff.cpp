#include "Item.cpp"

class usabledebuff: public item{
    private:
    int defense;
    public:
    usabledebuff(){

    }
    usabledebuff(string id, string name, int price, string description, int defense):item(id, name, price, description){
        this->defense = defense;
    }
    int getDefense(){
        return this->defense;
    }
    void setDefense(int defense){
        this->defense = defense;
    }
};