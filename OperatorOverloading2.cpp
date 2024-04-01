#include<iostream>
using namespace std;
class demo
{
	int x,y,z;
	public:
		demo()
		{
			x=4;
			y=5;
			z=6;
		}
		demo(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void operator-()
		{
			x=-x;
			y=-y;
			z=-z;
		}
		void display()
		{
			cout<<x<<"\n"<<y<<"\n"<<z;
		}
};
int main()
{
	demo d1;
	-d1;
	d1.display();
	demo d2(11,13,16);
	-d2;
	d2.display();
}
