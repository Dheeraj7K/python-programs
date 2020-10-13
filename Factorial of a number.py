#program of factorial

x= int(input("enter the number "))
fac=1
if x < 0:
    print("wrong input")
elif x==0:
    print ("factorial of 0 = 1")
else:
    for i in range(1, x+1):
        fac=fac*i
    print("the factorial of", x, "is", fac)
