#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) 
{
    int low = 0, high = 0, start = 0 , len = 0, n= s.length() ; 
    for(int i= 0 ; i < s.length() ; i++)
    {
        low= i;
        high = i+1;
        while(low >= 0 && high < n && s[low] == s[high] )
        {
            low--;
            high++;
        }
        if( len < (high -low - 1))
        {
          //  cout<<high - low - 1<<endl;
            start = low +1;
            len = high -low -1 ;
        }
        // check for odd length
        low = i-1;
        high = i +1 ;
        while ( low >= 0  && high < n && s[low] == s[high])
        {
            low --;
            high++;
        }
        if( len < (high -low - 1))
        {
           // cout<<"hrer";
            start = low +1;
            len = high -low -1 ;
        }
    }
  //  cout<<start<<" "<<len;
    return s.substr(start, len);
}
int main()
{
    string s;
    cin>>s;
    cout <<longestPalindrome(s);
    return 0;
}
