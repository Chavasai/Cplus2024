#include<conio.h>
#include<iostream>
using namespace std;
 class figure
 {int side,length,breadth,radius; 
    double pi;
 	public:
 		void area(int s)
 		{
 		 side = s;
 		    cout<<side*side;	
		 }
		 void area(	int l, int b)
		 {
		  length = l;
		  breadth = b;
		 cout<<length*breadth;  
		 }
		 void area(float pi , int r)
		 {
		 	pi =3.14;
		 	radius = r;
		 	cout<<pi*radius*radius;
		 }
 };
 int main()
 {
   figure f1;
   int s,l,b,r,pi;
   cin>>s>>l>>b>>r;
   	f1.area(s);
   	f1.area(l,b);
   	f1.area(pi,r);
 }
