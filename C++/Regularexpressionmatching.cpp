/* 
Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:

'.' Matches any single character.​​​​
'*' Matches zero or more of the preceding element.
The matching should cover the entire input string (not partial).

 

Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa". */

#include <bits/stdc++.h>
using namespace std;

bool isMatch(string &s, string &p) 
{
    int n = s.length(), m= p.length();
    int dp[m+1][n+1];

    for(int i= 0 ;  i <= m ; i++)
    {
        for(int j= 0 ;  j <= n ;j++)
        {
            if( i== 0 && j== 0)
                dp[i][j] =1;
            else if ( i == 0 )
                dp[i][j] = 0;
            else if( j == 0 )
            {
                dp[i][j] =0;
                if( p[i-1] == '*')
                    dp[i][j] = dp[i-2][j];
            }
            else
            {
                if( p[i-1] == '*')
                {
                    dp[i][j] = dp[i-2][j];
                    if(p[i-2] == '.' || p[i-2] == s[j-1] )
                        dp[i][j] |= dp[i][j-1];
                }

                else if( p[i-1] == '.' || p[i-1] == s[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = 0;
            }
            //cout<<dp[i][j] <<" ";
        }      
        // cout<<endl;
    }
    return dp[m][n];
}
int main()
{
    char str[] = "aab";
    char pattern[] = "*****ba*****ab";
    
 
    if (isMatch( str, pattern ))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
 
    return 0;
}
