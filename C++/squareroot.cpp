#include<iostream>
#include<stdio.h>

class Sqroot {
    
    private :
                int n;
                long double sqroot;

    public : 
                void sqroot1();
                Sqroot(int a, long double b);

};
Sqroot::Sqroot(int a, long double b = 0)
{
    n = a;
    sqroot = b;
}
void Sqroot::sqroot1()
{
    long double temp;
    sqroot = n/2;

    while(temp != sqroot)
    {
        temp = sqroot;
        sqroot = (sqroot + n/sqroot)/2;
    }

    std::cout << sqroot << std::endl;
}
int main(int argc, char *argv[])
{
    int c;
    std::cin >> c ;

    Sqroot squareroot(c,0.0);
    squareroot.sqroot1();

    return 0;
}