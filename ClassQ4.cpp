#include<conio.h>
#include<iostream>
using namespace std;//next class function overloading static function

class bank_account
{   
    public:
	char name_of_depositer[40];
	int account_number;
	char type_of_account;
	float balance_in_account;
	public:
		void initial_values()
		{
			name_of_depositer[40];
			cout<<"Enter the name ";
			cin>>name_of_dipositer;
			account_number;
			cout<<"Enter the account number ";
			cin>>account_number;
			type_of_account;
			cout<<"Enter type of account";
			cin>>type_of_account;
			balance_in_account=1000.21;			
		}
		int deposite_an_amount()
		{
			cin>>d
		}
		void withdraw_after_checking();
		void name_balance();
};

