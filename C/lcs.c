#include<stdio.h>
#include<string.h>

//diagnol arrow == c
//up arrow == u
//left arroe ==l

int m,n;
int c[20][20];    //this array is used to store the value
char b[20][20];  //this array is used to store arrow part

void print_lcs(int i,int j,char *x)
{
    if(i==0 || j==0)
        return ;
    if(b[i][j]=='c')
    {
        print_lcs(i-1,j-1,x);
        printf("%c",x[i-1]);
    }
    else if(b[i][j]=='u')
        print_lcs(i-1,j,x);
    else
        print_lcs(i,j-1,x);
}

void lcs_length(char *x,char *y)
{
    m = strlen(x);
    n = strlen(y);

    for(int i=1;i<=m;i++)
    {
        c[i][0]=0;  //fixing the column value to zero
    }

    for(int j=1;j<=n;j++)
    {
        c[0][j]=0;  //fixing the row value to zero
    }

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';   //diagnol arrow == c
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='u';  //up arrow == u
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='l';  //left arroe ==l
            }
        }
    }
    printf("%d \n",c[m][n]);
}

int main()
{
    char x[20],y[20];

    printf("Enter 1st string sequence:");
    scanf("%s",x);
    printf("Enter 2nd string sequence:");
    scanf("%s",y);
    printf("\nThe Longest Common Subsequence is ");

    lcs_length(x,y);

    print_lcs(m,n,x);

    return 0;
}
