#include<iostream>
using namespace std;

class student
{
 int reg_no;
 float cgpa;
 public:
  student(int a,float b)
  {
  	reg_no=a;
  	cgpa=b;
  }
  student(student & R)
  {
  	reg_no=R.reg_no;
  	cgpa=R.cgpa;
  }
  void display()
  {
  	cout<<"\nreg no is "<<reg_no<<"\ncgpa is"<<cgpa;
  }
  
	
};
main()
{
	student s1(12308817,7.69);
	s1.display();
	student s2(12388817,7.68);
	s2.display();
	student s3(s2);
	s3.display();
	
}
