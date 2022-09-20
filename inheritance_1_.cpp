#include<iostream>
using namespace std;
class father
{
	protected:
		int money=4567;
};
class mother:public father
{
	public:
	void getm()
	{
		cout<<"share money to mother="<<money<<endl;
	}
};
class son:public father
{
	public:
	void gets()
	{
		cout<<"share money to son="<<money;
	}
};
int main()
{
	mother m;
	son s;
	m.getm();
	s.gets();
	return 0;
}