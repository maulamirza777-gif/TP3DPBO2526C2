#pragma once
#include "Item.cpp"

class usableheal:virtual public item{
    private:
    int flatHeal;
    public:
    usableheal(){

    }
    usableheal(string id, string name, int price, string description, int Heal) : item(id, name, price, description), flatHeal(Heal){

    }
    void setflatHeal(int flatHeal){
        this->flatHeal = flatHeal;
    }
    int getflatHeal(){
        return this->flatHeal;
    }
};