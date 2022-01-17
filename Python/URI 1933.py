card1, card2 = input().split()

card1 = int(card1)
card2 = int(card2)

if card1 == card2:
    print("{}".format(card1))
elif card1 > card2:
    print("{}".format(card1))
elif card2 > card1:
    print("{}".format(card2))