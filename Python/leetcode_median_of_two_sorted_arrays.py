class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        mergedList = nums1 + nums2 #Both lists are merged together using the + operator to make a new list
        length = len(mergedList) 
        mergedList.sort() #The merged list is then sorted in the ascending order
        middleIndex = int(length/2) #Firstly, we find the middle index
        
        #If length of mergedList is even, it has two middle indices
        if len(mergedList)%2 == 0: 
            #Since, middleIndex shows the greater middle index, to find the smaller middle index we subtract the OG             middleindex by 1
            m = mergedList[middleIndex-1] 
            n = mergedList[middleIndex]
            #Median is found by adding the values found in the two middle indices and then divided by 2
            median = (m+n)/2 
            return median
        
        #If length of mergedList is odd, it had one middle index and that can be easily found
        else:  
            median = mergedList[middleIndex]
            return median
    