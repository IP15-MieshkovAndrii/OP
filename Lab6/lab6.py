import math

def fact(f):

    FACT = 1
    m=1
    for m in range(m, f + 1):
        FACT *= m
    return FACT

def Cos(x):
    if x > 360:
        while x > 360:
            x = x - 360
    elif x < -360:
        while x < -360:
            x = x + 360
    rad = math.pi / 180 * x
    sum = 1
    prevsum = 0
    i = 1
    while math.fabs(sum - prevsum) > eps:
        prevsum = sum
        sum = sum + (-1)**i * rad**(2 * i) / fact(2 * i)
        i = i + 1
    return sum


a = float(input("a:"))
b = float(input("b:"))
eps = float(input("The result will be calculated with accuracy:"))

y = Cos(a) + Cos(b) * Cos(b) + Cos(a+b)
countAfterPoint = int(math.log((1/eps), 10))
print(f'y = {round(y, countAfterPoint)}')

