#include <bits/stdc++.h>
using namespace std;

void heapify(int A[], int n, int i){
    int larg = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l<n && A[l] > A[larg]){
        larg = l;
    }
    if(r<n && A[r] > A[larg]){
        larg = r;
    }
    if(larg != i){
        swap(A[i], A[larg]);
        heapify(A, n, larg);
    }
}

void heap_sort(int A[], int n){
    for(int i=n/2-1; i>=0; i--){
        heapify(A, n, i);
    }
    for(int i=n-1; i>0; i--){
        swap(A[0], A[i]);
        heapify(A, i, 0);
    }
}

int main(){
    int A[] = {33, 45, 1, 100, -5, 6, 98};
    int n = sizeof(A)/sizeof(A[0]);
    heap_sort(A, n);
    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
