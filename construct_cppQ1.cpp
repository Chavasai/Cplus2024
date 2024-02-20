#include<conio.h>
#include<iostream>
using namespace std;

class tollbooth
{
	int total_cars;
	double total_cash;
	
	public:
		tollbooth()
		{
			total_cars=0;	
			total_cash=0;
		}
		void payingCar()
		{
		  //cin>>total_cars;
		  total_cash+=100;
		}
			void nopayCar()
			{
				//cin>>tatal_cars;
				total_cars++;
			}
			void display()
			{
				cout<<total_cars;				
			}
			
};
int main()
{
	tollbooth t;
	t.payingCar();
	t.display();
	t.nopayCar();
	t.display();
	
}
