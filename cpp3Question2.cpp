#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int hourly_wage,hours_worked,witholding_percentage,weekly_pay;
	cout<<"Enter the details of each element";
	cin>>hourly_wage>>hours_worked>>witholding_percentage;
	weekly_pay=(hourly_wage*hours_worked)-witholding_percentage;
	cout<<"weekly_pay is ="<<weekly_pay;
		
}
