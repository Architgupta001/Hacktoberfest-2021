decimal_input = int(input("Enter decimal number: ")) #Taking Decimal number as input.

#Function to convert decimal number to binary
def dec_to_bin(decimalnumber):
    binary = ""
    while(decimalnumber!=0):
        remainder = decimalnumber%2
        binary = str(remainder) + binary #Concatenating successive binary digits
        decimalnumber = decimalnumber//2
    
    print(binary)

dec_to_bin(decimal_input)  




binary_input = input("Enter binary number: ") #Taking Binary number as input.

#Function to convert binary to decimal number
def bin_to_dec(binarynumber):
    binarynumber = binarynumber[::-1] #Reversing the input to string
    i = 0
    decimal = 0
    for digit in binarynumber:
        decimal += int(digit)*(2**i) #Multiplying successive binary digits with increasing powers of 2.
        i += 1

    print(decimal)

bin_to_dec(binary_input)




    
