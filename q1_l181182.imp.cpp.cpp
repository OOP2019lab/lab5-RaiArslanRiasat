#include"Header.h"
bankaccount::bankaccount()
{
	totalnooftransaction=10;
	transaction=new int[totalnooftransaction];
	transaction=nullptr;
	withdrawnamount=0;
	depositamount=0;
	nooftrasaction=0;
	noofdeposit=0;
	noofwithdrawn=0;
	balance=0;
}
bankaccount::bankaccount(string name,int number)
{
	holdername=name;
	accountnumber=number;
	totalnooftransaction=10;
	transaction=new int[totalnooftransaction];
	transaction=nullptr;
	withdrawnamount=0;
	depositamount=0;
	nooftrasaction=0;
	noofdeposit=0;
	noofwithdrawn=0;
	balance=0;
}
void bankaccount::print()
{
	cout<<"Holder Name : "<<holdername<<endl;
	cout<<"Account number : "<<accountnumber<<endl;
	cout<<"Balance : "<<balance<<endl;
	cout<<"Total no of Deposits : "<<noofdeposit<<endl;
	cout<<"Total No of Withdrawn : "<<noofwithdrawn<<endl;
	cout<<"Total No of Transaction : "<<nooftrasaction<<endl;
}
void bankaccount::deposit(int amount)
{
	if(amount!=0)
	{
		balance=balance+amount;
		nooftrasaction++;
		noofdeposit++;
	}
	else
		cout<<"Enter valid amount \n";
}
void bankaccount::withdrawn(int amount)
{

	if(amount!=0)
	{
		if(amount < balance)
		{
			balance=balance-amount;
			nooftrasaction++;
			noofwithdrawn++;
		}
		else
		{
			cout<<"there is not enough amount : \nplease Enter new amount : \n";
		}
	}
}
void bankaccount::setholdername(string name)
{
	holdername=name;
}
void bankaccount::setaccountnumber(int num)
{
	accountnumber=num;
}
void bankaccount::increaseTranCapacity()
{
	if(nooftrasaction==totalnooftransaction)
	{
		nooftrasaction=2*nooftrasaction;
	}
}
bankaccount::~bankaccount()
{
	delete []transaction;
}