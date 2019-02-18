#include<iostream>
#include<string>
#include<string.h>
#include<conio.h>
using namespace std;
class bankaccount
{
	string holdername;
	int accountnumber;
	double balance;
	int *transaction;
	int totalnooftransaction,nooftrasaction;
	int withdrawnamount,depositamount;
	void setholdername(string name);
	void setaccountnumber(int number);
public: 
	int noofdeposit,noofwithdrawn;
	void deposit(int amount);
	void withdrawn(int amount);
	bankaccount();
	bankaccount(string holdername,int accountnumber);
	void print();
	void increaseTranCapacity();
	~bankaccount();
};
