#include<iostream>
using namespace std;
class person
{

	
	public:
		int a,b;
		
		person()
		{
			cout<<"enter value of a and b:";
			cin>>a>>b;
			cout<<"a="<<a <<"b="<<b<<endl;
			cout<<"sum="<<a+b<<endl;
			cout<<"sum="<<a-b<<endl;
			cout<<"sum="<<a*b<<endl;
			cout<<"sum="<<a/b<<endl;
			
		}
};

int main()
{
	person p;
	
	return 0;
}