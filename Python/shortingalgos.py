def insertshort(arr,n):
    for i in range(1,n):
        k = arr[i]
        j = i -1
        while j>=0 and  arr[j] > k:
            arr[j+1]  = arr[j]
            j = j -1
        arr[j+1]  = k
    return arr



t = list(map(int,input().split())) 
print(insertshort(t,len(t)))           


def mergesort(arr,s,e):
    if s==e:
        return 
    m = (s+e)//2
    mergesort(arr,s,m)
    mergesort(arr,m+1,e)
    merge(arr,s,m,e)

def merge(a,s,m,e):
    n1 = m-s+1
    n2 = e-m
    a1 = a[s:m+1] + [99999999999]
    a2 = a[m+1:e+1] + [99999999999]
    i = 0
    j = 0
    for t in range(s,e+1):
        if a1[i] <=  a2[j]:
            a[t]  = a1[i]
            i = i+1
        else:
            a[t] = a2[j]
            j = j+1       

mergesort(t,0,len(t)-1) 
print(t)          


def bubblesort(arr):
    n = len(arr)
    if n == 1:
        return arr
    for i in range(n):
        for j in range(n-1,i+1,-1):
            if arr[j] < arr[j-1]:
                arr[j],arr[j-1] = arr[j-1],arr[j]
    return arr                

print(bubblesort(t))    


def bubblesort1(arr):
    n = len(arr)
    if n == 1:
        return arr
    for i in range(n):
        for j in range(n-i-1):
            if arr[j+1] < arr[j]:
                arr[j+1],arr[j] = arr[j],arr[j+1]

    return arr                

print(bubblesort1(t))



def selsort(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i+1,n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i],arr[min_idx] = arr[min_idx] , arr[i]
    return arr

print(selsort(t))                

# Quick sort in Python


# Function to partition the array on the basis of pivot element
def partition(array, low, high):

    # Select the pivot element
    pivot = array[high]
    i = low - 1

    # Put the elements smaller than pivot on the left and greater 
    #than pivot on the right of pivot
    for j in range(low, high):
        if array[j] <= pivot:
            i = i + 1
            (array[i], array[j]) = (array[j], array[i])

    (array[i + 1], array[high]) = (array[high], array[i + 1])

    return i + 1


def quickSort(array, low, high):
    if low < high:

        # Select pivot position and put all the elements smaller 
        # than pivot on left and greater than pivot on right
        pi = partition(array, low, high)

        # Sort the elements on the left of pivot
        quickSort(array, low, pi - 1)

        # Sort the elements on the right of pivot
        quickSort(array, pi + 1, high)

quickSort(t,0,len(t)-1)
print(t)




