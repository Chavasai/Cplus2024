#include<conio.h>
#include<iostream>
using namespace std;

class Movie
{
	private:
		char title[30];
		int  year;
		char director_name[40];
		public:
	 void settitle();
	 void setyear();
	 void setdirector();
	 
	 void display()
	 {
	 	cout<<title<<"\n"<<year<<"\n"<<director_name;
			  }		 
};

void Movie ::settitle()
{
	cin>>title;
}
void Movie ::setyear()
{
	cin>>year;
}
void Movie ::setdirector()
{
	cin>>director_name;
}

int main()
{
	Movie M1;
	M1.settitle();
	M1.setyear();
	M1.setdirector();
	M1.display();
	
}
