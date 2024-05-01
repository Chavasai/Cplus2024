#include<iostream>
using namespace std;
class shape
{
	public:
	int width;
	int height;
	public : 
	area()
	{
		
	}	
};
class Rectangle : public shape
{
	public:
		area(int w, int h)
		{
		 width = w;
		 height=h;
		 cin>>w>>h;
		 int a=w*h;
		 cout<<"Area of the rectangle is:"<<a;
		 Rectangle::area(4,5);	
		}
		
};
class Triangle : public Rectangle
{
	public:
		area()
		{
		 cin>>width>>height;
		 int b=0.5*width*height;
		 cout<<"Area of the triangle is:"<<b;	
		}		
};
int main()
{
	class Triangle T;
	T.area();
	T.Rectangle::area(4,5);
}
