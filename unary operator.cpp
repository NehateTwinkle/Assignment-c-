#include<iostream>
using namespace std;
class person
{
	public:
		int value;
		void get(int x)
		{
			value=++x;
			
		}
		
		void operator ++()
		{
			++value;
			--value;
		}
		void set()
		{
			cout<<value<<endl;
		}
};
int main()
{
	person p;
	p.get(9);
	++p;
	p.set();

	return 0;
}