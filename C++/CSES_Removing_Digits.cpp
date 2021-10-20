/*You are given an integer n. On each step, you may subtract one of the digits from the number.

How many steps are required to make the number equal to 0?

Input

The only input line has an integer n.

Output

Print one integer: the minimum number of steps.

Constraints
1≤n≤106
Example

Input:
27

Output:
5

Explanation: An optimal solution is 27→20→18→10→9→0.
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

vector<ll>v;
void digits(ll n)
{
    while(n)
    {
        v.push_back(n%10);
        n = n/10;
    }
}

int main()
{
        ll n;
        cin>>n;

        ll count = 0;
        while(n)
        {
            digits(n);

            if(v.size()==1)
            {
                count++;
                break;
            }
            ll mini = n;
            for(int i = 0;i<v.size();i++)
            {
                mini = min(n -v[i],mini);
                
            }
            count++;
            n = mini ;
            v.clear();

        }
        cout<<count<<endl;

           
}
