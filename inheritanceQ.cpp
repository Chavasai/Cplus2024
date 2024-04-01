#include<iostream>
using namespace std;
class publication
{
	public:
	string name;
	float price;
	public:
	void get_data()
	{
		cout<<"Enter the name of the book:";
	cin>>name;
	    cout<<"Enter the price of the book:";
	cin>>price;	
	}
    void put_data()
    {
    	cout<<"\n Name of the book is:"<<name;
    	cout<<"\n price of the book is"<<price;
	}
	
};
class book:public publication
{
	public:
	int count;
	public:
	void get_data()
	{
		cout<<"\nEnter the page count of the book:";
	 cin>>count;	
	}
	void put_data()
    {
    	
    	cout<<"\npage count of the book is:"<<count;
	}
};
class tape:public book
{
	public:
	float play_time;
	public:
	void get_data()
	{
		cout<<"\nEnter the playtime of the book:";
	cin>>play_time;	
	}
	void put_data()
    {
    	
    	cout<<"\nplay time of the book is:"<<play_time;
	}
};
int main()
{
class tape t;
t.publication::get_data();
t.publication::put_data();
t.book::get_data();
t.book::put_data();
t.get_data();
t.put_data();	
}

