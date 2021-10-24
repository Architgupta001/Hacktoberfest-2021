#include<iostream>
using namespace std;
//function that check alphabet
void chr(int c)
{
    if((c>=97 && c<=122) ||( c>=65 && c<=90))
    cout<<"alphabet";
    else
    {
        cout<<"not alphabet";
    }
}
int main()
{
    //taking a value from user
    char a;
    cin>>a;
    chr(a);   // passing the value to the function
    return 0;
}
    