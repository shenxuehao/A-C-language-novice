class Furniture():
    def __init__(self, name, area):
        self.name = name
        self.area = area

class Home():
    def __init__(self, address, area):
        self.address = address
        self.area = area
        self.free_area = area
        self.furniture = []

    def __str__(self):
        return f'房子在{self.address}，占地面积{self.area}，剩余面积{self.free_area}，家具有{self.furniture}'

    def add_furniture(self, item):
        """容纳家具"""
        if self.free_area >= item.area:
            self.furniture.append(item.name)
            self.free_area -= item.area
        else:
            print('放不下了')


bed = Furniture('双人床', 6)
jia1 = Home('北京', 1000)
print(jia1)

jia1.add_furniture(bed)
print(jia1)

sofa = Furniture('沙发', 200)
jia1.add_furniture(sofa)
print(jia1)

playground = Furniture('操场', 2000)
jia1.add_furniture(playground)
print(jia1)