def binary_to_decimal(a):
    temp=a;
    value=0
    base=1
    while(temp!=0):
        last_degit=temp%10
        temp=temp//10
        value+=last_degit*base
        base=base*2
    return value

def addition(a,b):
    return a+b;

def decimal_to_binary(b):
    temp=b
    list1=[]
    while(temp!=0):
        remainder=temp%2
        list1.append(remainder)
        temp=temp//2
    for i in range(len(list1)-1,-1,-1):
        print(list1[i],end="")




if __name__ == '__main__':
   flag1=0
   flag2=0

   a=str(input("Enter 1st binary string "))
   b=str(input("Enter 2nd binary string "))
   for i in range(len(a)):
       if(a[i]=='1' or a[i]=='0'):
           flag1=1
           continue
       else:
           flag1=0
           break
   for i in range(len(b)):
       if(b[i]=='1' or b[i]=='0'):
           flag2=1
           continue
       else:
           flag2=0
           break
   if(flag1==1 and flag2==1):
     c=binary_to_decimal(int(a))
     d=binary_to_decimal(int(b))
     sum=addition(c,d)
     decimal_to_binary(sum)
   else:
       a=print("Please input binary numbers ")
       print(a)
