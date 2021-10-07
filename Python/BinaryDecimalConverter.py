decimal_input = int(input("Enter decimal number: "))
def dec_to_bin(decimalnumber):
    binary = ""
    while(decimalnumber!=0):
        remainder = decimalnumber%2
        binary = str(remainder) + binary
        decimalnumber = decimalnumber//2
    
    print(binary)

dec_to_bin(decimal_input)  




binary_input = input("Enter binary number: ")
def bin_to_dec(binarynumber):
    binarynumber = binarynumber[::-1]
    i = 0
    decimal = 0
    for digit in binarynumber:
        decimal += int(digit)*(2**i)
        i += 1

    print(decimal)

bin_to_dec(binary_input)




    
