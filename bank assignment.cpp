#include<iostream>
using namespace std;
class bank
{
	private:
		int acc_num=2463799;
		int balance_in_acc=234000;
		int amount;
		string name_of_depositor="Rajeshbhai";
		string type_of_acc="saving acc";
		public:
			void get()
			{
				cout<<" your balance=";
				//cin>>balance_in_acc;
				cout<<balance_in_acc<<endl;
			}
			void get1()
			{
				cout<<"withdraw ammount=";
				cin>>amount;
				amount=balance_in_acc-amount;
				cout<<amount<<endl;
				
			}
			
			void get2()
			{
				cout<<"bank holder name="<<name_of_depositor<<endl<<"current balance="<<amount;
			}
			
};
int main()
{
	bank b;
	b.get();
	b.get1();
	b.get2();
	return 0;
}