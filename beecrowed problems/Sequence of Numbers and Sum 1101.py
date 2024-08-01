



while True:
    a,b= input().split(' ')
    c = sorted([int(a),int(b)])
    a = c[1]
    b = c[0]

    if a<= 0 or b<=0:
        break
    s = 0
    t = ""
    while a>=b:
        t +=str(b) + " "
        s+=b
        b+=1
    print(t + "Sum=" +str(s))




