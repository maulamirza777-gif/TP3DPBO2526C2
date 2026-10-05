from Item import item

class weapon(item):
    def __init__(self, id : str, name : str, price : int, description : str, damage : int):
        super().__init__(id, name, price, description)
        self.__damage = damage

    def getDamage(self):
        return self.__damage

    def setDamage(self, damage : int):
        self.__damage = damage