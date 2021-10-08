"""
  Function to convert Binary number
  to Decimal number
"""

def binaryToDecimal(n):
    return int(n,2)

"""
  Function to convert Decimal number
  to Binary number
"""

def binaryToDecimal(n):
    return bin(n).replace("0b","")

def main():
  num = int(input("enter number"))
  n = int(input("if convert Binary number to Decimal number enter 1 \n if convert Decimal number to Binary number enter 2 \n"))
  if n == 1:
    print (binaryToDecimal(num))
  if n == 2:
    print (binaryToDecimal(num))
  else:
    print ("wrong value")
    

if __name__ == '__main__':
	main()
