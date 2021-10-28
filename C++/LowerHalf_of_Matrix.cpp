//C++Program to print lower half of a matrix 


#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns;
	
	cout << "\n Enter Matrix rows and Columns to find Lower Triangle =  ";
	cin >> i >> j;
	
	int lowerTriMatrix[i][j];
	
	cout << "\n Enter the Matrix Items\n";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> lowerTriMatrix[rows][columns];
		}		
	}

 	cout << "\nThe Result of the Lower Triangle Matrix is :\n";
 	for(rows = 0; rows < i; rows++)
  	{
  		cout << "\n";
   		for(columns = 0; columns < j; columns++)
    	{
    		if(rows >= columns)
    		{
    			cout << lowerTriMatrix[rows][columns] << " ";
			}
			else
			{
				cout << "0 ";
			}
   	 	}
  	}	

 	return 0;
}