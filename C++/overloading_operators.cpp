#include<iostream>
using namespace std;
class complex
{
float x;
float y;
public:
 complex()
{x=0;y=0;}

complex operator+(complex);
complex operator*(complex);

friend istream &operator >>(istream &input,complex &t)
{
    cout<<"Enter the real part";
    input>>t.x;
    cout<<"Enter the imaginary part";
    input>>t.y;
}
friend ostream &operator <<(ostream &output,complex &t)
{
    output<<t.x<<"+"<<t.y<<"i\n";
}
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return(temp);
}
complex complex::operator*(complex c)
{
    complex temp2;
    temp2.x=(x*c.x)-(y*c.y);
    temp2.y=(y*c.x)+(x*c.y);
    return (temp2);
}
int main()
{
complex c1,c2,c3,c4;
cout<<"Default constructor value=\n";
cout<<c1;
cout<<"\nEnter the 1st number\n";
cin>>c1;
cout<<"\nEnter the 2nd number\n";
cin>>c2;
c3=c1+c2;
c4=c1*c2;
cout<<"\nThe first number is ";
cout<<c1;
cout<<"\nThe second number is ";
cout<<c2;
cout<<"\nThe addition is ";
cout<<c3;
cout<<"\nThe multiplication is ";
cout<<c4;
return 0;
}