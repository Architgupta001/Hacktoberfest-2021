#include <bits/stdc++.h>
using namespace std;

// max_element is a function to calculate the maximum value in array

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int character;
        int arr[26]={ };  //initializing all the element with zero
        for(int i=0;i<s.length();i++)
        {
            character=s[i];  // character is a variable which stores a value of string
            arr[character-97]++;  // increase the value of array by one
        }

        for(int i=0;i<26;i++)
        {
           if(arr[i]==*max_element(arr, arr + 26) || arr[i]==0) 
               continue;

           if(arr[i]<*max_element(arr, arr + 26)|| arr[i]>*max_element(arr, arr + 26))   
                return false;
        }
        return true;
    }
};

int main()
{
  Solution s1;
  string s="abacbc";
  cout<<s1.areOccurrencesEqual(s);
  return 0;
}
