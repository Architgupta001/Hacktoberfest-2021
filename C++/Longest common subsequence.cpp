// This code prints the longest common subsequence between two strings using dp
#include<bits/stdc++.h>
using namespace std;
#define fast              ios::sync_with_stdio(false);cin.tie(0);

string printlongestsequence(string a, string b)
{
    int n=a.length(), m=b.length();
    int t[n+1][m+1];

    // initialising matrix
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            {
                t[i][j]=0;
            }
        }
    }

    //filling matrix
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
                t[i][j]= 1+ t[i-1][j-1];
            else
                t[i][j]= max(t[i-1][j], t[i][j-1]);
        }
    }

    string answer="";
    int i=n,j=m;

    while(i>0 && j>0)
    {
        if(a[i-1]==b[j-1])
        {
            answer.push_back(a[i-1]);
            i--, j--;
        }
        else{
            if(t[i-1][j] > t[i][j-1])
                i--;
            else
                j--;
        }
    }

    reverse(answer.begin(), answer.end());
    return answer;


}

int main()
{
    fast
    string a="AGGTAB";
    string b="GXTXAYB";

    cout<< printlongestsequence(a,b);
    return 0;
}
