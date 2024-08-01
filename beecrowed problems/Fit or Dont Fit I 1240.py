



for i in range(int(input())):
    x,y = map(str, input().split())
    if x[-len(y):] == y:
        print("encaixa")
    else:
        print("nao encaixa")
