class Solution {
public:
    vector<int> factorial(int N)
    {
    vector<int> res(1,1);

 int carry=0,pos=0;
      for(int i=2;i<=N;i++)
       {
           carry=0;pos=0;
           for(int j=0;j<res.size();j++){
               pos= res[j]*i+carry;
               res[j] = pos%10;
               carry=pos/10;
           }
           while(carry){
               res.resize((res.size()+1),carry%10);
               carry/=10;
           }
       }
       reverse(res.begin(),res.end());
       return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  
