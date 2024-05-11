
//Specification file for the account class
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
	double balance;     //account balance
	double interestRate;//Interest rate for the period
	double interest;    //Interest earned for the period
	int transactions;   //Number of transactions
public:
	Account(double iRate = 0.045, double bal = 0)
	{
		balance = bal;
		interestRate = iRate;
		interest = 0;
		transactions = 0;
	}

	void setInterestRate(double iRate)
	{
		interestRate = iRate;

	}
	void makeDepositRate(double amount)
	{
		balance += amount; transactions++;
	}
	void withdraw(double amount);   //defined in account.cpp

	void calcInterest()
	{
		interest = balance * interestRate;
		balance += interest;
	}
	void getIntrestRate() const
	{
		return intrestRate;
	}
	double getBalance() const
	{
		return balance;

	}
	double getInterest() const
	{
		return interest;

	}
	int getTransaction() const
	{
		return transactions;
	}
};
#endif
