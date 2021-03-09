a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

if b < a and c > b or c == b:
    print(":)")
if b > a and c < b or c == b:
    print(":(")
x = b - a
y = c - b
if b > a and c > b: 
    if y < x:
        print(":(")
    if y >= x:
        print(":)")
x = b - c
y = a - b 
if b < a and c < b: 
    if x < y:
        print(":)")
    if x >= y:
        print(":(")
if a == b:
    if c > b:
        print(":)")
    else:
        print(":(")