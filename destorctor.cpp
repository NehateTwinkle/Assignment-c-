#include<iostream>
using namespace std;
class person
{
	private:
	int atmpin=4567;
	int balance=23768;
	
	public:
		person()
		{
			cout<<"enter your atm pin number ..";
		//	cin>>atmpin;
			cout<<atmpin<<endl<<"balance="<<balance;
		}
		
};
int main()
{
	person p;
//	p.person1();
	return 0;
}