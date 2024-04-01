#include<iostream>
using namespace std;
class time 
{
	int hrs;
	int min;
	public:
		time(int h,int m)
		{
			hrs=h;
			min=m;
		}
		time()
		{
			hrs=0;
			min=0;
		}
		operator int()
		{
			int x;
			x=hrs*60+min;
			return x;
		}
};
int main()
{
	time t1(03,25);
	time t2;
	int m=90;
	m=t1;
	cout<<m;
}
