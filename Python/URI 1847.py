a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

if a>b:
    if b>c:
        if (b-c) < (a-b): 
            print(":)")
        else:
            print(":(")
    else:
        print(":)")
elif b>a:
    if c>b:
        if (c-b) < (b-a):
            print(":(")
        else: 
            print(":)")
    else:
        print(":(")
elif c>b: 
    print(":)")
else:
    print(":(")