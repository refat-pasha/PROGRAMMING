



while True:
    s = 0
    q = 0
    while (q<2):
        a = float(input())
        if a>=0 and a<=10:
            s+= a
            q+= 1
        else:
            print("nota invalida")
    print("media = %.2f" %(s/2))
    t = 0
    while True:
        print("novo calcilo (1-sim 2 nao)")
        t = int(input())
        if (t == 1 or t == 2):
            break
    if t == 2:
        break





