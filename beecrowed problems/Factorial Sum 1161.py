


###using factorial() method solve but runtime error
"""import math

a = input()
b = input()
x = math.factorial(int(a))
y = math.factorial(int(b))
print(x+y)

"""

sum1=1
sum2=1
sum=0
while(True):
    try:
        a,b=list(map(int,input().split()))
        if(a==0 or a==1):
            sum1=1
        else:
            for i in range(2,a+1):
                sum1=sum1*i
        if(b==0 or b==1):
            sum2=1
        else:
            for i in range(2,b+1):
                sum2=sum2*i
        sum=sum1+sum2
        print(sum)
        sum1=1
        sum2=1
        sum=0
    except EOFError:
        break