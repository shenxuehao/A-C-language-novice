class Washer():
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def print_info(self):
        print(f'宽度是{self.width}')
        print(f'高度是{self.height}')

haier1 = Washer(10,20)
haier1.print_info()

haier1 = Washer(20,30)
haier1.print_info()

print(f'宽度是{haier1.width}')
print(f'高度是{haier1.height}')
