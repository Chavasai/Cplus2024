#include<conio.h>
#include<iostream>
using namespace std;
class figure
{
	int side;
	int length;
	int breadth;
	int radius;
	float pi;
		int square;
			int circle;
			int rectangle;
	public:
		figure()
		{
			cout<<"default constructor";
			side = 20;
			length = 10;
			breadth = 14;
			radius = 6;
			pi = 3.14; 
		}
		figure( int s,int l,int b, int r,float p= 3.14)
		{
			cout<<"\n parameterised constructor";
			side=s;
			length=l;
			breadth=b;
			radius=r;
			pi=p;	
		}
		
		void area_of_square()
		{
			int square=side*side;
			cout<<"\n area of square is :"<<square;
		}
		void area_of_circle()
		{
			int circle=pi*radius*radius;
		cout<<"\n area of radious is:"<<circle;	
		}
		void area_of_rectangle()
		{
			int rectangle = length*breadth;
		cout<<"\n area of the rectangle is :"<<rectangle;	
		}
};

int main()
{
	class figure f1;
	f1.area_of_square();
	f1.area_of_circle();
	f1.area_of_rectangle();
	figure f2(4,5,6,7,3.14);
	f2.area_of_square();
	f2.area_of_circle();
	f2.area_of_rectangle();	
}
