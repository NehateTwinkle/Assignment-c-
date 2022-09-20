#include <iostream>
using namespace std;
class choice
{
	public:
 void per()
	{
		cout<<"enter two number.."<<endl;
		int a,b;
		cin>>a>>b;
		cout<<"sum="<<a+b<<endl<<"sum="<<a-b<<endl<<"sum="<<a*b<<endl;
	}
};
int main()
{
	choice c;
	   c.per();
	return 0;
}