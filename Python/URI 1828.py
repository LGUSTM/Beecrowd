#!/usr/bin/python3
# -*- coding: utf-8 -*-

n = int(input())

for i in range(n):
    sheldon, raj = input("").split()

    if sheldon == raj:
        win = "De novo!"
    elif sheldon == "pedra":
        if raj == "tesoura" or raj == "lagarto":
            win = sheldon
        else:
            win = raj
    elif sheldon == "papel":
        if raj == "pedra" or raj == "Spock":
            win = sheldon
        else:
            win = raj
    elif sheldon == "tesoura":
        if raj == "lagarto" or raj == "papel":
            win = sheldon
        else:
            win = raj
    elif sheldon == "lagarto":
        if raj == "Spock" or raj == "papel":
            win = sheldon
        else:
            win = raj
    elif sheldon == "Spock":
        if raj == "tesoura" or raj == "pedra":
            win = sheldon
        else:
            win = raj
    if win == sheldon:
        win = "Bazinga!"
    elif win == raj:
        win = "Raj trapaceou!"
    
    print("Caso #%i: " %(n), win)