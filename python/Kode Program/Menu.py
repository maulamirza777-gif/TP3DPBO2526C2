from Item import item
from Weapon import weapon
from UsableBuff import usableBuff
from UsableDebuff import usableDebuff
from UsableHeal import usableHeal
from Hybrid import hybrid
from typing import List

class menu:
    def __init__(self):
        self.__items :List[item] = []
        self.__weapons :List[weapon]= []
        self.__usableBuffs :List[usableBuff]= []
        self.__usableDebuffs :List[usableDebuff]= []
        self.__usableHeals :List[usableHeal]= []
        self.__hybrids :List[hybrid]= []

    def addItems(self, id:str, name:str, price:int, description:str):
        self.__items.append(item(id, name, price, description))

    def addWeapons(self, id:str, name:str, price:int, description:str, damage:int):
        self.__weapons.append(weapon(id, name, price, description, damage))

    def addBuffs(self, id:str, name:str, price:int, description:str, addAtk:int):
        self.__usableBuffs.append(usableBuff(addAtk, id = id, name = name, price = price, description =description ))

    def addDebuffs(self, id:str, name:str, price:int, description:str, defense:int):
        self.__usableDebuffs.append(usableDebuff(id, name, price, description, defense))

    def addHeals(self, id:str, name:str, price:int, description:str, flatHeal:int):
        self.__usableHeals.append(usableHeal( flatHeal, id = id, name = name, price = price, description = description))

    def addHybrids(self, id:str, name:str, price:int, description:str, addAtk:int, flatHeal:int):
        self.__hybrids.append(hybrid(id, name, price, description, addAtk, flatHeal))

    def addManual(self, type:str):
        id = str(input("ENTER ITEM ID:"))
        name = str(input("ENTER ITEM NAME:"))
        price = int(input("ENTER ITEM PRICE(INT):"))
        description = str(input("ENTER ITEM DESCRIPTION:"))
        if type == "weapon":
            damage = int(input("ENTER ITEM'S DAMAGE:"))
            self.addWeapons(id, name, price, description, damage)
        elif type == "buff":
            addAtk = int(input("ENTER ITEM'S BONUS ATK:"))
            self.addBuffs(addAtk, id, name, price, description )
        elif type == "debuff":
            defense = int(input("ENTER ITEM'S DEFENSE REDUCTION:"))
            self.addDebuffs(id, name, price, description, defense)
        elif type == "heal":
            heal = int(input("ENTER ITEM'S HEAL AMOUNT:"))
            self.addHeals(heal, id, name, price, description )
        elif type == "item":
            self.addItems(id, name, price, description)
        elif type == "hybrid":
            addAtk = int(input("ENTER ITEM'S BONUS ATK:"))
            heal = int(input("ENTER ITEM'S HEAL AMOUNT:"))
            self.addHybrids(id, name, price, description, addAtk, heal)

    def createspaces(self, num:int):
        for i in range(num):
            print(" ", end = "")

    
    def count(self, num : int):
        digit = 0
        while num > 0:
            digit = digit +1
            num = num//10
        return digit



    def printList(self, type:str):
        idlen = 2
        namelen = 4
        pricelen = 5
        desclen = 11
        if type == "item":
            for i in self.__items:
                if len(i.getId()) > idlen:
                    idlen = len(i.getId())
                if len(i.getName()) > namelen:
                    namelen = len(i.getName())
                if self.count(i.getPrice()) > pricelen:
                    pricelen = self.count(i.getPrice())
                if len(i.getDesc()) > desclen:
                    desclen = len(i.getDesc())
            print(f"|ID", end="")
            self.createspaces(idlen - 2)
            print(f"|NAME", end="")
            self.createspaces(namelen - 4)
            print(f"|PRICE", end="")
            self.createspaces(pricelen - 5)
            print(f"|DESCRIPTION")
            for i in self.__items:
                print(f"|{i.getId()}", end="")
                self.createspaces(idlen - len(i.getId()))
                print(f"|{i.getName()}", end="")
                self.createspaces(namelen - len(i.getName()))
                print(f"|{i.getPrice()}", end="")
                self.createspaces(pricelen - self.count(i.getPrice()))
                print(f"|{i.getDesc()}")
        elif type == "weapon":
            for i in self.__weapons:
                if len(i.getId()) > idlen:
                    idlen = len(i.getId())
                if len(i.getName()) > namelen:
                    namelen = len(i.getName())
                if self.count(i.getPrice()) > pricelen:
                    pricelen = self.count(i.getPrice())
                if len(i.getDesc()) > desclen:
                    desclen = len(i.getDesc())
            print(f"|ID", end="")
            self.createspaces(idlen - 2)
            print(f"|NAME", end="")
            self.createspaces(namelen - 4)
            print(f"|PRICE", end="")
            self.createspaces(pricelen - 5)
            print(f"|DESCRIPTION", end ="")
            self.createspaces(desclen - 11)
            print(f"|DAMAGE")
            for i in self.__weapons:
                print(f"|{i.getId()}", end="")
                self.createspaces(idlen - len(i.getId()))
                print(f"|{i.getName()}", end="")
                self.createspaces(namelen - len(i.getName()))
                print(f"|{i.getPrice()}", end="")
                self.createspaces(pricelen - self.count(i.getPrice()))
                print(f"|{i.getDesc()}", end="")
                self.createspaces(desclen - len(i.getDesc()))
                print(f"|{i.getDamage()}")
        elif type == "heal":
            for i in self.__usableHeals:
                if len(i.getId()) > idlen:
                    idlen = len(i.getId())
                if len(i.getName()) > namelen:
                    namelen = len(i.getName())
                if self.count(i.getPrice()) > pricelen:
                    pricelen = self.count(i.getPrice())
                if len(i.getDesc()) > desclen:
                    desclen = len(i.getDesc())
            print(f"|ID", end="")
            self.createspaces(idlen - 2)
            print(f"|NAME", end="")
            self.createspaces(namelen - 4)
            print(f"|PRICE", end="")
            self.createspaces(pricelen - 5)
            print(f"|DESCRIPTION", end ="")
            self.createspaces(desclen - 11)
            print(f"|HEAL")
            for i in self.__usableHeals:
                print(f"|{i.getId()}", end="")
                self.createspaces(idlen - len(i.getId()))
                print(f"|{i.getName()}", end="")
                self.createspaces(namelen - len(i.getName()))
                print(f"|{i.getPrice()}", end="")
                self.createspaces(pricelen - self.count(i.getPrice()))
                print(f"|{i.getDesc()}", end="")
                self.createspaces(desclen - len(i.getDesc()))
                print(f"|{i.getHeal()}")
        elif type == "buff":
            for i in self.__usableBuffs:
                if len(i.getId()) > idlen:
                    idlen = len(i.getId())
                if len(i.getName()) > namelen:
                    namelen = len(i.getName())
                if self.count(i.getPrice()) > pricelen:
                    pricelen = self.count(i.getPrice())
                if len(i.getDesc()) > desclen:
                    desclen = len(i.getDesc())
            print(f"|ID", end="")
            self.createspaces(idlen - 2)
            print(f"|NAME", end="")
            self.createspaces(namelen - 4)
            print(f"|PRICE", end="")
            self.createspaces(pricelen - 5)
            print(f"|DESCRIPTION", end ="")
            self.createspaces(desclen - 11)
            print(f"|BONUS ATK")
            for i in self.__usableBuffs:
                print(f"|{i.getId()}", end="")
                self.createspaces(idlen - len(i.getId()))
                print(f"|{i.getName()}", end="")
                self.createspaces(namelen - len(i.getName()))
                print(f"|{i.getPrice()}", end="")
                self.createspaces(pricelen - self.count(i.getPrice()))
                print(f"|{i.getDesc()}", end="")
                self.createspaces(desclen - len(i.getDesc()))
                print(f"|{i.getaddAtk()}")
        elif type == "debuff":
            for i in self.__usableDebuffs:
                if len(i.getId()) > idlen:
                    idlen = len(i.getId())
                if len(i.getName()) > namelen:
                    namelen = len(i.getName())
                if self.count(i.getPrice()) > pricelen:
                    pricelen = self.count(i.getPrice())
                if len(i.getDesc()) > desclen:
                    desclen = len(i.getDesc())
            print(f"|ID", end="")
            self.createspaces(idlen - 2)
            print(f"|NAME", end="")
            self.createspaces(namelen - 4)
            print(f"|PRICE", end="")
            self.createspaces(pricelen - 5)
            print(f"|DESCRIPTION", end ="")
            self.createspaces(desclen - 11)
            print(f"|MINUS DEF")
            for i in self.__usableDebuffs:
                print(f"|{i.getId()}", end="")
                self.createspaces(idlen - len(i.getId()))
                print(f"|{i.getName()}", end="")
                self.createspaces(namelen - len(i.getName()))
                print(f"|{i.getPrice()}", end="")
                self.createspaces(pricelen - self.count(i.getPrice()))
                print(f"|{i.getDesc()}", end="")
                self.createspaces(desclen - len(i.getDesc()))
                print(f"|{i.getDefense()}")
        elif type == "hybrid":
            atklen = 9
            for i in self.__hybrids:
                if len(i.getId()) > idlen:
                    idlen = len(i.getId())
                if len(i.getName()) > namelen:
                    namelen = len(i.getName())
                if self.count(i.getPrice()) > pricelen:
                    pricelen = self.count(i.getPrice())
                if len(i.getDesc()) > desclen:
                    desclen = len(i.getDesc())
                if self.count(i.getaddAtk()) > atklen:
                    atklen = self.count(i.getaddAtk())
            print(f"|ID", end="")
            self.createspaces(idlen - 2)
            print(f"|NAME", end="")
            self.createspaces(namelen - 4)
            print(f"|PRICE", end="")
            self.createspaces(pricelen - 5)
            print(f"|DESCRIPTION", end ="")
            self.createspaces(desclen - 11)
            print(f"|BONUS ATK", end="")
            self.createspaces(atklen - 9)
            print(f"|HEAL")
            for i in self.__hybrids:
                print(f"|{i.getId()}", end="")
                self.createspaces(idlen - len(i.getId()))
                print(f"|{i.getName()}", end="")
                self.createspaces(namelen - len(i.getName()))
                print(f"|{i.getPrice()}", end="")
                self.createspaces(pricelen - self.count(i.getPrice()))
                print(f"|{i.getDesc()}", end="")
                self.createspaces(desclen - len(i.getDesc()))
                print(f"|{i.getaddAtk()}", end="")
                self.createspaces(atklen - self.count(i.getaddAtk()))
                print(f"|{i.getHeal()}")

    def storage(self):
        option1 = ["ADD", "SHOW", "EXIT"]
        option2 = ["WEAPON", "BUFF", "DEBUFF", "HEAL", "UNCATHEGORIZED", "HYBRID"]
        for i,opt in enumerate(option1):
            print(f"{i+1}.{opt}")
        inp1 = int(input("CHOOSE WHAT YOU NEED:"))
        inp1 = inp1-1
        while option1[inp1] != "EXIT":
            for i, opt in enumerate(option2):
                print(f"{i+1}.{opt}")
            inp2 = int(input(f"CHOOSE WHICH ITEM YOU WANT TO {option1[inp1]}:"))
            inp2 = inp2-1
            if option2[inp2] == "WEAPON":
                self.printList("weapon")
                if option1[inp1] == "ADD":
                    self.addManual("weapon")
                    self.printList("weapon")
            elif option2[inp2] == "BUFF":
                self.printList("buff")
                if option1[inp1] == "ADD":
                    self.addManual("buff")
                    self.printList("buff")
            elif option2[inp2] == "DEBUFF":
                self.printList("debuff")
                if option1[inp1] == "ADD":
                    self.addManual("debuff")
                    self.printList("debuff")
            elif option2[inp2] == "HEAL":
                self.printList("heal")
                if option1[inp1] == "ADD":
                    self.addManual("heal")
                    self.printList("heal")
            elif option2[inp2] == "UNCATHEGORIZED":
                self.printList("item")
                if option1[inp1] == "ADD":
                    self.addManual("item")
                    self.printList("item")
            elif option2[inp2] == "HYBRID":
                self.printList("hybrid")
                if option1[inp1] == "ADD":
                    self.addManual("hybrid")
                    self.printList("hybrid")
            for i,opt in enumerate(option1):
                print(f"{i+1}.{opt}")
            inp1 = int(input("CHOOSE WHAT YOU NEED:"))
            inp1 = inp1-1

        
        
    
                
        