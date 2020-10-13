#Program to check Armstrong number
x=int(input("Enter the number \n"))
sum=0

y=x
while y>0:
    digit = y%10
    sum += digit**3
    y//=10
if x==sum:
    print(x,"is an armstrong number")
else:
    print(x, "is not an armstrong number")
