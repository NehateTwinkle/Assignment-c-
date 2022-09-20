#include<iostream>
using namespace std;
class a
{
	public:
	void geta()
	{
		cout<<"class get a.."<<endl;
	}
};
class b:public a
{
	public:
		void getb()
		{
			cout<<"class get b.."<<endl;
		}
};
int main()
{
	b obj;
	obj.geta();
	obj.getb();
	

	return 0;
}