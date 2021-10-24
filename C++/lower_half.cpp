#include<iostream>
#define R 3
#define C 3

using namespace std; 

// Function to input array elements  

void inputarrayelements(int matrix[R][C], int row, int col) 

{     cout<<" *******Please input data in array*******";

      for (int i= 0;i< row; i++)

    {

      for (int j=0; j < col; j++) 

       { cout<<" ***Enter elements for["<<i<<"]["<<j<<"]***";

cin>>matrix[i][j];

         }

        }

      }

// Function to display lower half triangular matrix 

void displaylowerhalftriangularmatrix (int matrix[3][3], int row, int col) 

{  cout<<"? Lower half triangular matrix ?";

    for (int i= 0;i< row; i++)

    {

     for (int j = 0; j < col; j++) 

     {

       if (i + j>row-1) 

         {
cout<<matrix[i][j] <<"\t"; 

           } 

         else

cout<< "\t";

    } 

cout<<endl; 

   } 

}

int main ()

{

int row = 3 , col = 3 ;
int matrix[R][C];

   inputarrayelements(matrix,R,C); 

   displaylowerhalftriangularmatrix (matrix,R,C);

   return 0 ; 

}


