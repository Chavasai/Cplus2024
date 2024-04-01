#include<iostream>
using namespace std;
class demo
{
	int x,y,z;
	public:
		demo()
		{
			x=1;
			y=0;
			z=1;
			
		}
		void operator !()
		{
			x=!x;
			y=!y;
			z=!z;
		}
		void display()
		{
			cout<<x<<"\n"<<y<<"\n"<<z;
		}
};
int main()
{
  demo d1;
  !d1;
  d1.display();	
}
