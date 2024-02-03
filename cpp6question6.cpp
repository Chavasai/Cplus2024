#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int hourlywage_upto40,no_hours_worked,hourly_wageafter40hr;
	cout<<"Enter the hours worked  :";
	cin>>no_hours_worked;
	cout<<"Enter the hourly wage";
	int hourlywage;
	cin>>hourlywage;
	hourlywage_upto40=(40*hourlywage);
	cout<<"hourly wage upto 40 hrs :"<<hourlywage_upto40;
	hourly_wageafter40hr=((no_hours_worked-40)*hourlywage*1.5);
	cout<<"\n hourly wage after 40 hrs :"<<hourly_wageafter40hr;
	int weekly_pay=(hourlywage_upto40+hourly_wageafter40hr);
	cout<<"\nweekely pay is:"<<weekly_pay;
	int weekly_holding;
	if(weekly_pay>1000)
	{
	 weekly_holding=(weekly_pay*0.28);
	}
	else if(weekly_pay>600 && weekly_pay<1000)
	{
		weekly_holding=(weekly_pay*0.21);
	}
	else
	{
		weekly_holding=(weekly_pay*0.10);
	}
	int net_pay=weekly_pay-weekly_holding;
	cout<<"\nweekly holdings is:"<<weekly_holding;
	cout<<"\nnet pay is :"<<net_pay;
		
}
