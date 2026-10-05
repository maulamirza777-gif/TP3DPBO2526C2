from Item import item

class usableBuff(item):
    def __init__(self,  addAtk : int, **kwargs):
        super().__init__(**kwargs)
        self.__addAtk = addAtk

    def getaddAtk(self) :
        return self.__addAtk

    def setaddAtk(self, addAtk):
        self.__addAtk = addAtk