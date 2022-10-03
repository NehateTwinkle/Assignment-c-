#include<iostream>
using namespace std;
class student
{
    protected:
	int roll_num;
	public:
	void sum()
	{
		int num;
		cout<<"enter your roll no:";
		cin>>num;
		cout<<"roll no="<<num<<endl;
	}
		
};
class Test:public student
{
	protected:
		
	int marks,maths,english;
	public:
	void get()
{
	cout<<"enter two subject marks:"<<endl;
	cin>>maths>>english;
	cout<<"maths="<<maths<<endl<<"english="<<english<<endl;
}
};
class result:public Test
{
	public:
		void set()
{
		
	marks=maths+english;
	cout<<"total marks="<<marks;
}
};

int main()
{
	result R;
	R.sum();
	R.get();
	R.set();
//	R.sum();
	return 0;
}