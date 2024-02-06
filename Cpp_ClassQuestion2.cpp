#include<conio.h>
#include<iostream>
using namespace std;

class GroceryItem
{
	private:
		int item_stocknumber;
		float item_price;
		int Quantity_in_stock;
		float total_value;
		public:
			void dataEntry()
			{
			stocknumber();
			price();
			in_stock();
			GroceryItems_total_value();
			}
			private:
				void stocknumber()
				{
					cin>>item_stocknumber;
				}
				void price()
				{
					cin>>item_price;
				}
				void in_stock()
				{
					cin>>Quantity_in_stock;
				}
				void GroceryItems_total_value()
				{
	            total_value=(item_price*Quantity_in_stock);
                }
                public:
				void display()
				{
					cout<<"stocknumber"<<item_stocknumber<<"\nprice"<<item_price<<"\nin_stock"<<Quantity_in_stock<<"\nGroceryItem’s_total_value"<<total_value;
				}
				
};
int main()
{
	GroceryItem G1;
	G1.dataEntry();
	G1.display();
}
