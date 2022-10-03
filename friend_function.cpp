#include<iostream>
using namespace std;
class x
{
	private:
		string property="property=";
		public:
			void get()
			{
				cout<<"total ";
			}
				friend void set(x ref);
};

		void set(x ref)
		{
			cout<<ref.property<<" 4567839";
		}
int main()
{
	x obj;
	obj.get();
	set(obj);
	return 0;
}