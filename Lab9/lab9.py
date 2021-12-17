s = input("Input string: ")
x = s.find(" ")
i = 0
k = 0
while i < len(s):
    if x == -1:
        b = s[i:]
        i = len(s)
    else:
        b = s[i:x]
        i = x + 1
        x = s.find(" ", i)
    r=b[::-1]

    if b == r:
        print(b)
        k = k + 1

       
print('Number of palindrome:', k)

        