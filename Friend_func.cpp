//FRIEND FUNCTION AND FRIEND CLASS
#include<iostream>
using namespace std;
class demo
{
int a,b;
public:
demo()
{
a=10;
b=20;
}
friend void display(demo);//friend function
};
void display(demo d)
{
cout<<d.a<<"and "<<d.b<<endl;
}
main()
{
demo d1,d2;
display(d1);
display(d2);
}
