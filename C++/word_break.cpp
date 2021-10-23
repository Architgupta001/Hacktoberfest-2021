/*Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

Note that the same word in the dictionary may be reused multiple times in the segmentation.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  bool wordBreak(string s,vector<string>&wordDict) {
      int n=s.size();
      vector<bool>dp(n,false);
        dp[0]=true;
     for(int i=0;i<=n;i++){
       for(auto& str :wordDict){
           if(dp[i]){
              if(s.substr(i,str.size()).compare(str)==0){
                  dp[i+str.size()]=true;
              } 
           }
       } 
    }
        return dp[n];
}
int main()
{
    vector<string> vect = {"apple","pen"};
    string s1,s2;
    cout<<"enter string"<<endl;
    cin>>s1;
    wordBreak(s1,vect)? cout <<"True\n": cout << "False\n";
    return 0;
}
