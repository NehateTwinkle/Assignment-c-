#include<iostream>
using namespace std;
template<typename a>

class person
{
	public:
		a variable;
		a getvariable(a t)
		{
			variable=t;
			cout<<variable<<endl;
			return t;
		}
};
int main()
{
	person <int>p;
	person <float>p1;
	person <char>p2;
	person <string>p3;
	p.getvariable(33); 
	p1.getvariable(45.50);
	p2.getvariable('B');
	p3.getvariable("hello");
	return 0;
}