#include<iostream>
using namespace std;
class Animal
{
	public:
  virtual speak()
  {	
  }
  void makeSpeak(Animal *a)
  {
  	a->speak();
  }
};
class dog : public Animal
{
  public:
  
  void makespeak(Animal *a)
  {
  	dog d;
  	a=&d;
  	a->speak();
  }	
  speak()
  {
  	cout<<"Woof";
  }	
};
class Cat : public Animal
{
 public :
 	void makespeak(Animal *a){
 	Cat c;
 	a=&c;
 	a->speak();
 }
 
  speak()
  {
  	cout<<"\nMeow";
	  }	
};
class Cow : public Animal
{
 public:
 	void makespeak(Animal *a)
 	{
 		Cow C;
 		a=&C;
 	    a->speak();
	 }
 	speak(){
	 
 cout<<"\nMoo";
}
};
int main()
{
	class dog d;
	class Cat c;
	class Cow C;
	d.makespeak(&d);
	c.makespeak(&c);
	C.makespeak(&C);
}
