/*Question:

In the kingdom of CodeLand, programmers Alice and Bob are tasked with creating bug-fighting
warriors to protect their kingdom's software from malicious bugs. They decide to use object-oriented
programming principles to design these warriors.

Abstract Class Creation: Define an abstract class called BugWarrior with the following pure virtual functions:
void attack(): Represents the action of attacking bugs.
void defend(): Represents the action of defending against bugs.
Concrete Class Implementation: Implement two concrete classes that derive from BugWarrior:
KnightWarrior: A bug-fighting warrior specialized in close combat.
WizardWarrior: A bug-fighting warrior specialized in using magical spells.
Ensure that each concrete class provides implementations for the attack() and defend() functions according to their specialized abilities.
Usage: Provide a code snippet demonstrating how Alice and Bob can create 
instances of KnightWarrior and WizardWarrior to combat the bugs in CodeLand.
Write C++ code to solve the above tasks.
Your Task:
Write C++ code to address each part of the question.
Ensure to include proper class definitions, implementations, and a usage example demonstrating the creation of bug-fighting warriors.*/
#include<iostream>
using namespace std;
class BugWarrior
{
public:
virtual void attack()=0;
virtual void defend()=0;
	
};
class KnightWarrior : public BugWarrior
{
	public :
		int a;
		public:
	void attack()
	{
		cin>>a;
	if(a==1)
	{
	  cout<<"\nA bug is attacking the system, This is Knight Warrior";
    }
    else
		{
		cout<<"\nNo bug found in the system , This is knight Warrior";	
    }
	}
    void defend()
	{
	 	cin>>a;
	if(a==1)
	{
	  cout<<"\nCounter measurements have been intiated, This is Knight Warrior";
    }
    else
		{
			cout<<"\nNo need of any action, This is knight Warrior";	
    }
	}	
};
class WizardWarrior : public BugWarrior
{
	public :
		int a;
		public:
	void attack()
	{
		cin>>a;
	if(a==1)
	{
	  cout<<"\nA bug is attacking the system, This is WizardWarrior";
    }
    else
		{
		
	cout<<"\nNo bug found in the system , This is WizardWarrior";	
    }
	}
	void defend()
	{
	 	cin>>a;
	if(a==1)
	{
	  cout<<"\nCounter measurements have been intiated, This is WizardWarrior";
    }
    else
		{
		cout<<"\nNo need of any action, This is WizardWarrior";	
    }
	}		
};
int main()
{
	class BugWarrior *b;
	class KnightWarrior k;
	class WizardWarrior w;
	b=&k;
	b->attack();
	b->defend();
	b=&w;
	b->attack();
	b->defend();
}
