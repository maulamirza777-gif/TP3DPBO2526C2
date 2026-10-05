#include "UsableBuff.cpp"
#include "UsableHeal.cpp"

class hybrid: public usablebuff, public usableheal{
    public:
    hybrid(){

    }
    hybrid(string id, string name, int price, string description, int addAtk, int heal):item(id, name, price, description), usablebuff(id, name, price, description, addAtk), usableheal(id, name, price, description, heal){

    }
    
};
