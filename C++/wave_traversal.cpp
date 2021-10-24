#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cin>>a[i][j];
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            if(j%2==0)cout<<a[i][j]<<" ";
            else cout<<a[m-1-i][j]<<" ";
        }
    }
    return 0;
}
