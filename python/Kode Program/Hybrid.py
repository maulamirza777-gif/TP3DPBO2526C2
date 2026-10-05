from UsableBuff import usableBuff
from UsableHeal import usableHeal

class hybrid(usableBuff, usableHeal):
    def __init__(self, id:str, name:str, price:int, description:str, addAtk:int, flatHeal:int):
        super().__init__(id = id, name = name, price = price, description = description, addAtk= addAtk , flatHeal = flatHeal)