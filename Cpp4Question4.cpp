#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int hours_required,complete_eight_hour_work_days,remaining_hours_needed_onlast_day,total_cost;
	cout<<"hours_required\n";
	cin>>hours_required;
	complete_eight_hour_work_days=(hours_required/8);
	remaining_hours_needed_onlast_day=(hours_required%8);
	cout<<"complete eight hour work days "<<complete_eight_hour_work_days<<"\nremaining_hours_needed_onlast_day\n"<<remaining_hours_needed_onlast_day;
	int total_cost_eight_hours_days=(complete_eight_hour_work_days*200);
	cout<<"\ntotal cost for eight hours work days "<<total_cost_eight_hours_days;
	int partial_day_cost=(remaining_hours_needed_onlast_day*40);
	cout<<"\npartial_day_cost "<<partial_day_cost;
	int total_cost_of_job=(total_cost_eight_hours_days+partial_day_cost);
	cout<<"\ntotal_cost_of_job "<<total_cost_of_job;
}
