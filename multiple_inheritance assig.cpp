#include<iostream>
using namespace std;
class person
{
	public:
		string name="Kiran";
		int age=24;
		
		void get()
		{
			cout<<"Member name="<<name<<endl;
			cout<<"age of member="<<age<<endl;
		}
};
class student
{
	public:
		int percentage=78;
		void set()
		{
			cout<<"percentage="<<percentage<<endl;
		}
};
class teacher:public person, public student
{
	public:
		int salary=45000;
		void information()
		{
		//	cin>>salary;
		   cout<<"salary of member="<<salary<<endl;
		}
};
int main()
{ 
     teacher T;
     T.get();
     T.information();
     T.set();
	return 0;
}