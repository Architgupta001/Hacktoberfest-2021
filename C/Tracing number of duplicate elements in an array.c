// Program to find the number of duplicate elements in an array

#include<stdio.h>
int main()
{
	int arr1[100];
	int arr2[100];
	int arr3[100];
	int n,m=1,ctr=0;
	int i,j;
	printf("Input number of elements:- \n");
	scanf("%d",&n);
	printf("Input %d elements in array:- \n",n);
	for(i=0;i<n;i++)
	{
		printf("Element %d:- ",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		arr2[i] = arr1[i];
		arr3[i] = 0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr1[i] == arr2[j])
			{
				arr3[j] = m;
				m++;
			}
		}
		m=1;
	}
	for(i=0;i<n;i++)
	{
		if(arr3[i] == 2)
		{
			ctr++;
		}
	}
	printf("Total number of duplicate elements found in array is:- %d\n",ctr);
	return 1;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
/*

Output :- 

Input number of elements:-
5
Input 5 elements in array:-
Element 0:- 6
Element 1:- 8
Element 2:- 9
Element 3:- 9
Element 4:- 6
Total number of duplicate elements found in array is:- 2

*/
