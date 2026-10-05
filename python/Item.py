class item:
    def __init__(self, id : str, name : str, price : int, description : str, **kwargs):
        super().__init__()
        self.__id = id
        self.__name = name
        self.__price = price
        self.__description = description

    def getId(self) -> str:
        return self.__id

    def getName(self) -> str:
        return self.__name

    def getPrice(self) -> int:
        return self.__price

    def getDesc(self) -> str:
        return self.__description

    def setId(self, id : str):
        self.__id = id

    def setName(self, name : str):
        self.__name = name

    def setPrice(self, price : int):
        self.__price = price

    def setDesc(self, description : str):
        self.__description = description


    