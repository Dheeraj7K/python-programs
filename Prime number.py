#program to check prime number

x= int(input("enter the number to check \n"))
if x > 1:
    for i in range(2,x):
        if (x%i)==0:
            print(x, "is not a prime")
            print(i, "times", x//i, "is", x)
            break
    else:
        print(x, "is a prime")

else:
    print(x, "is not a prime")
