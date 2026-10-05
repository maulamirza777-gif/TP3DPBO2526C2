from Item import item

class usableHeal(item):
    def __init__(self, flatHeal : int, **kwargs):
        super().__init__(**kwargs)
        self.__flatHeal = flatHeal

    def getHeal(self):
        return self.__flatHeal

    def setHeal(self, flatHeal : int):
        self.__flatHeal = flatHeal


