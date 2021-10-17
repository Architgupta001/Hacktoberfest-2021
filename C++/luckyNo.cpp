//Program To find out Lucky Four
#include <iostream>
#include <iomanip>
void solve();
int main()
{
    int t=1;
    std::cin >> t;
  //Running Test Cases
    while(t--)
    {
        solve();
    }
    
}
//This function is use how many no of digit four is present in an integer
void solve()
{
    int n,c=0;
    std::cin >> n;
  //Running the loop to find out "Lucky Four"
    while(n)
    {
        if(n%10==4)
        c++;
        n=n/10;
    }
    std::cout << c << std::endl;
}
