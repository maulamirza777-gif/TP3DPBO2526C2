#pragma once
#include "Item.cpp"

class usablebuff:virtual public item{
    private:
    int addAtk;
    public:
    usablebuff(){

    }
    usablebuff(string id, string name, int price, string description, int Atk) : item(id, name, price, description), addAtk(Atk){
    }
    void setaddAtk(int addAtk){
        this->addAtk = addAtk;
    }
    int getaddAtk(){
        return this->addAtk;
    }
};