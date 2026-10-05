#pragma once
#include <iostream>
#include <string>
using namespace std;

typedef struct{
    string id;
    string name;
    int price;
    string description;
    int stat;
}mold;

class item{
    private:
    string id;
    string name;
    int price;
    string description;
    public:
    item(){

    }
    item(string id, string name, int price, string description){
        this->id = id;
        this->name = name;
        this->price = price;
        this->description = description;
    }
    string getId() const {
        return this->id;
    }
    string getName(){
        return this->name;
    }
    int getPrice(){
        return this->price;
    }
    string getDescription(){
        return this->description;
    }
    void setId(string id){
        this->id = id;
    }
    void setName(string name){
        this->name = name;
    }
    void setPrice(int price){
        this->price = price;
    }
    void setDescription(string description){
        this->description = description;
    }
};