n = int(input())

for i in range(n):
    r1, r2 = input().split(" ")
    r1 = int(r1)
    r2 = int(r2)
    conduit = r1 + r2
    print('{}'.format(conduit))