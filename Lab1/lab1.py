import math
from decimal import Decimal #точний тип даних
x1, y1 = [Decimal(x) for x in input('Введіть координати точки A: ').split()] #вводемо координати першої точки 
x2, y2 = [Decimal(x) for x in input('Введіть координати точки B: ').split()] #вводемо координати другої точки 
x3, y3 = [Decimal(x) for x in input('Введіть координати точки C: ').split()] #вводемо координати третьої точки 
a = Decimal(math.sqrt((x1-x2)**2 + (y1-y2)**2)) #перша сторона трикутника - проміжні дані
b = Decimal(math.sqrt((x3-x2)**2 + (y3-y2)**2)) #друга сторона трикутника - проміжні дані
c = Decimal(math.sqrt((x1-x3)**2 + (y1-y3)**2)) #третя сторона трикутника - проміжні лані
P = Decimal(a + b + c) #периметр трикутника
p = Decimal(P / 2) #півпериметр - проміжні дані
s = Decimal(math.sqrt(p * (p - a) * (p - b) * (p - c))) #площа трикутника
print(f'P= {round(P, 3)}') #виводемо периметр з точністю до тисячних (f - формативна строка)
print(f's= {round(s, 3)}') #виводемо площу з точністю до тисячних