#include<iostream>
using namespace std;
class cricketer
{
	protected:
		int total_run=1200;
		int average_run;
		int best_perfomance=105; 
};
class batsman:public cricketer 
{
	public:
	//	int average_run=150;
	//	int best_perfomance=134;
	void get()
	{
	//	cout<<"enter your total run"<<endl;
	//	cin>>total_run;
		cout<<"total run ="<<total_run<<endl;
		average_run=total_run/12;

		cout<<"your average run="<<	average_run<<endl;
		cout<<"best perfomance";
	//	cin>> best_perfomance;
		cout<<"best perfomance="<< best_perfomance;
		
	}
   	
};
int main()
{
	batsman b;
	b.get();
	return 0;
}