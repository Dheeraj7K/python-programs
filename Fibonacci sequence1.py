#program of Fibonacci sequence

k= int(input("enter number of terms \n"))

t1, t2 = 0, 1
count =0

if k<=0:
    print("Wrong input, please enter a positive number")
elif k==1:
    print("Fibonacci sequence upto", k ,"is")
    print(t1)
else:
    print("Fibonacci sequence")
    while count < k:
        print(t1)
        tth= t1+t2
        t1=t2
        t2=tth
        count+=1
        
