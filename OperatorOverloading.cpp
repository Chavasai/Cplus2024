#include<iostream>
using namespace std;

class demo
{
	public:
		int val;
		public:
			demo()
			{
				val = 20;
			}
			void operator--(int)//postfix
			{
				val--;
			}
			void operator--()//prefix
		{
			val--;
		}
		void display()
		{
			cout<<val;
		}
	
	
};

int main()
{
	demo d1;
	d1--;
	d1.display();
	demo d2;
	--d2;
	d2.display();
}

