 /*Given N non-negative integers a1,a2....a where each represents a point at coordinate (i,ai). N vertical lines are drawn such that the two
  endpoints of line i are at(i,ai) and (i,0). Find the two lines, which together with the x-axis form a container, such that it contains the most 
  water*/
  #include<iostream>
  #include<limits.h>
  using namespace std;

 void max_Area()                                                                //Function to compute maximum area
  {
  int n;
  cout<<"Enter the size of the array."<<endl;
  cin>>n;                                                                   //Accepting the array size from the user, n=array size.
  int a[n];
  cout<<"Enter the elements of the array"<<endl;
  for(int i=0;i<n;i++)                                                     // Accepting the array elements from the user
      {
          cin>>a[i];
      }
    int l=0,r=n-1,h_min=0,area=INT_MIN;
        while(l<r)
        {
        h_min=min(a[l],a[r]);
        area=max(area,(r-l)*h_min);
        if(h_min==a[l])
            l++;
        else
            r--;
        }
        cout<<" Output: "<<area<<endl;                                  /*Printing the maximum area of the container containing 
                                                                         maximum water*/                      
}

int main()
{
  max_Area();                                                            //Calling the function max_Area().
  return 0;
}
