#include<conio.h>
#include<iostream>
using namespace std;
struct phone
{
	int area_code;
	int exchange;
	int number;
};
main()
{
	struct phone d1,d2;
	d1.area_code=507304;
	d1.exchange=8003;
	d1.number=8897;
	cout<<"Enter the details of the d2";
	cin>>d2.area_code;
	cin>>d2.exchange;
	cin>>d2.number;
	cout<<"\n("<<d1.area_code<<") "<<d1.exchange<<"-"<<d1.number;
	cout<<"\n("<<d2.area_code<<") "<<d2.exchange<<"-"<<d2.number;
}
