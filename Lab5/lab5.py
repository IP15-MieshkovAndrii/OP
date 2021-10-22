for a in range(1000000, 1000000000):
    b = a
    z = 0
    while b > 0:
        z = z * 10
        z = z + b % 10
        b = b // 10   
    if a == z: 
        print(a)
