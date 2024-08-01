




#unfinished

while True:
    try:
        a, b, c = map(int, (input().split()))
        if (a >= b and b >= a) or (c >= a and c >= b):
             print("S")
        else:
            print("N")
    except EOFError:
        break
