inputstr=inputstr
#append 0 in beginning and end of string ..in case like 99 or 9999
inputstr='0'+inputstr+'0'
length=len(inputstr)
halflength=length/2;
#if even length
    if(length%2==0):
    #take left part and reverse it(which is equal as the right part )
    temp=inputstr[:length/2]
    temp=temp[::-1]
    #take right part of the string ,move towards lsb from msb..If msb is 9 turn it to zero and move ahead
    for j,i in enumerate(temp):
        #if number is not 9 then increment it and end loop
        if(i!="9"):
            
            substi=int(i)+1
            temp=temp[:j]+str(substi)+temp[j+1:]
            break;
        else:
            
            temp=temp[:j]+"0"+temp[j+1:]
    #now you have right hand side...mirror it and append left and right part
    output=temp[::-1]+temp
#if the length is odd
    if(length%2!=0 ):
    #take the left part with the mid number(if length is 5 take 3 digits
        temp=inputstr[:halflength+1]
    #reverse it
        temp=temp[::-1]
    #apply same algoritm as in above
    #if 9 then make it 0 and move on
    #else increment number and break the loop
        for j,i in enumerate(temp):
        
            if(i!="9"):
            
                substi=int(i)+1
                temp=temp[:j]+str(substi)+temp[j+1:]
                break;
            else:
            
                temp=temp[:j]+"0"+temp[j+1:]
    #now the msb is the middle element so skip it and copy the rest
        temp2=temp[1:]
    #this is the right part mirror it to get left part then left+middle+right isoutput
        temp2=temp2[::-1]
        output=temp2+temp
    print(output)


    
