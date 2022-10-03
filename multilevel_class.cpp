#include<iostream>
using namespace std;
class father
{
	protected:
	int money=23458;
	public:
	void get()
	{
	//	m=money;
		cout<<money<<endl;
	}
};
class mother:public father
{
	protected:
	int rupee=45367;
	public:
    void getm()
	{
		cout<<rupee<<endl<<money;
		}	
};
class son:public mother
{
	public:
	    
		//	cout<<"multilevel ..."<<endl;
		
};
int main()
{
	son s;
	s.get();
	s.getm();
		return 0;
}