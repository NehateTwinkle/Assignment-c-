#include<iostream>
using namespace std;
template<typename obj>
obj test(obj x,obj y)
{
	return x+y;
}
int main()
{
	cout<<test(12,45)<<endl;
	cout<<test(12.4,56.8);
	return 0;
}