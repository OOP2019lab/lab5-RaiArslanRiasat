#include"Header.h"
void main()
{
	bankaccount myaccount("jon snow",888);
	myaccount.print();
	myaccount.withdrawn(50000);
	myaccount.deposit(250000);
	myaccount.deposit(40000);
	myaccount.withdrawn(50000);
	myaccount.print();
	system("pause");
}
