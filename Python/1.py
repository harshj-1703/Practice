a = int(input("Enter number a : "))
b = int(input("Enter number b : "))

i = int(input("Enter 1 For Sum(a+b) : \nEnter 2 For Sub(a-b) : \nEnter 3 For Mul(a*b) : \nEnter 4 For Div(a/b) : \nEnter 5 For Modulo(a%b) : \n"))

if(i==1):
    print("sum is : ",a+b)
elif(i==2):
    print("sub is : ",a-b)
elif(i==3):
    print("mul is : ",a*b)
elif(i==4):
    print("div is : ",a/b)
elif(i==5):
    print("mod is : ",a%b)
else:
    print("Invalid input")