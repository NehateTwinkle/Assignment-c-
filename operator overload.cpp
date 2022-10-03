#include<iostream>
using namespace std;
class overloding
{
	public:
		int value;
		void get(int a)
		{
			value=a;
		}
		overloding operator + (overloding x)
		{
			x.value=value+x.value;
			return x;
		}
		void set()
		{
			cout<<"sum="<<value;
		}
		
};
int main()
{
	overloding obj1,obj2,obj3,obj4,obj5,obj6,obj7,obj8,obj9,obj10,sum;
	obj1.get(105);
	obj2.get(30);
	obj3.get(24);
	obj4.get(12);
	obj6.get(90);
	obj7.get(10);
	obj8.get(40);
	obj9.get(45);
	obj5=obj1+obj2+obj3+obj4;
	obj10=obj6+obj7+obj8+obj9;
	sum=obj5+obj10;
	sum.set();	
	return 0;
}