# -*- coding: utf-8 -*-

def verificaExistencia(a, b, c):
    if not (a > abs(b-c) and c < b+c):
        return 'N'
    elif not(b > abs(a-c) and b < a+c):
        return 'N'
    elif not(c > abs(b-a) and c < b+a):
        return 'N'
    
    return 'S'

def main():
    a, b, c, d = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)

    if verificaExistencia(a, b, c) == 'S':
        print("S")
    elif verificaExistencia(a, b, d) == 'S':
        print("S")
    elif verificaExistencia(a, c, d) == 'S':
        print("S")
    elif verificaExistencia(b, c, d) == 'S':
        print("S")
    else:
        print("N")
main()