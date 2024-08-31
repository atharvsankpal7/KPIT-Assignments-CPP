#include <iostream>
#include <cstring>
#include "bitmap.h"
using namespace std;

Account::Account()
{
	// code here
}

Account::Account(int acc, const char *n, double bal)
{
	// code here
	accno = acc;
	char *nw = new char[strlen(n) + 1];
	strcpy(nw, n);
	strcpy(name, nw);
	balance = bal;
}

void Account::accept()
{
	// code here
	cin >> accno >> name >> balance;
}

void Account::display()
{
	// code here
	cout << accno << " " << name << " " << balance << endl;
}

void Account::deposite(int amount)
{
	// code here
	balance += amount;
}

void Account::withdraw(int amount)
{
	// code here
	if (balance >= amount)
	{
		balance -= amount;
	}
	else
	{
		throw "Insufficient Balance";
	}
}

int Account::getAccno()
{
	return accno;
}

char *Account::getName()
{
	return name;
}

double Account::getBalance()
{
	return balance;
}

void Account::setAccno(int id)
{
	accno = id;
}

void Account::setName(const char *n)
{
	strcpy(name, n);
}

void Account::setBalance(double bal)
{
	balance = bal;
}

bool Account::searchAccountById(Account *accounts, int size, int id)
{
	bool status = false;

	// code here
	for (int i = 0; i < size; i++)
	{
		if (accounts[i].getAccno() == id)
		{
			status = true;
			break;
		}
	}

	return status;
}

double Account::getHighestBalance(Account *accounts, int size)
{
	double highestBal = accounts[0].getBalance();

	// code here
	for (int i = 1; i < size; i++)
	{
		highestBal = max(highestBal, accounts[i].getBalance());
	}
	return highestBal;
}

double Account::getLowestBalance(Account *accounts, int size)
{
	double lowestBal = accounts[0].getBalance();

	// code here
	for (int i = 1; i < size; i++)
	{
		lowestBal = min(lowestBal, accounts[i].getBalance());
	}
	return lowestBal;
}
