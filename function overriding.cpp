#include <iostream>
using namespace std;
class bank
{
	public:
		void get(int x)
		{
			cout<<"value of x="<<x<<endl;
		}
};
class user:public bank
{
	public:
		void get(int y)
		{
			cout<<"value of y="<<y;
		}
};
int main()
{
	user u;
	u.get(56);
	u.bank::get(45);
	return 0;
}