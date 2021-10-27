#include <iostream>
using namespace std;


void
subseq (string s, string ans)
{
  if (s.length () == 0)
    {
      cout << ans << endl;
      return;
l    }
  char ch = s[0];
  string ros = s.substr (1);
  cout<<"\n the length of 1st string is....."<<s.length()<<endl;
  subseq (ros, ans);
  cout<<"the value of ros"<<ros<<endl;
  subseq (ros, (ans + ch));
  cout<<"\n the length of 2nd string is....."<<s.length()<<endl;
}

int
main ()
{
  subseq ("ABC", "a");
  return 0;
}
