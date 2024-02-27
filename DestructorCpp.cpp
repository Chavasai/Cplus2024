//destructor
#include<iostream>
using namespace std;
class demo
{
public:
demo()//constructor
{
cout<<"\ndefault constructor";
}
~demo()
{
cout<<"\nDestroyed";
}
};
main()
{
demo d1;
demo d2,d3;
cout<<"\nene of program";
}
