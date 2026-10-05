from Item import item

class usableDebuff(item):
    def __init__(self, id : str, name : str, price : int, description : str, defense : int):
        super().__init__(id, name, price, description)
        self.__defense = defense

    def getDefense(self):
        return self.__defense

    def setDefense(self, defense : int):
        self.__defense = defense