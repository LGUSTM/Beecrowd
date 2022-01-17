#-*- coding: utf-8 -*-

number = int(input())
roman = []

while True:
    if number <= 0:
        break
    else:
        if number >= 900:
            roman.append('CM')
            number = number - 900
        elif number >= 500 and number < 900:
            roman.append('D')
            number = number - 500
        elif number >= 400 and number < 500:
            roman.append('CD')
            number = number - 400
        elif number >= 100 and number < 400:
            roman.append('C')
            number = number - 100
        elif number >= 90 and number < 100:
            roman.append('XC')
            number = number - 90
        elif number == 50 or number > 50 and number < 90:
            roman.append('L')
            number = number - 50
        elif number >= 40 and number < 50:
            roman.append('XL')
            number = number - 40
        elif number >= 10 and number < 40:
            roman.append('X')
            number = number - 10
        elif number == 9:
            roman.append('IX')
            number = number - 9
        elif number == 8:
            roman.append('VIII')
            number = number - 8
        elif number == 7:
            roman.append('VII')
            number = number - 7
        elif number == 6:
            roman.append('VI')
            number = number - 6
        elif number == 5:
            roman.append('V')
            number = number - 5
        elif number == 4:
            roman.append('IV')
            number = number - 4
        else:
            roman.append('I')
            number = number - 1      
            
print(''.join(roman))