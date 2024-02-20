#include<iostream>
using namespace std;
class demo
{
int number;
static int count;
public:
demo()
{
number=0;
number++;
count++;
}
void display()
{
cout<<"\nnumber= "<<number;
cout<<"\ncount= "<<count;
}
};
int demo::count=0;
main()
{
demo d1;
d1.display();//c=1 n=1
demo d2;
d2.display();//c=2 n=1
demo d3,d4;
d3.display();//c=4 n=1
d4.display();//c=4 n=1
}
