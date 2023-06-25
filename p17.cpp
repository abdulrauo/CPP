#include <iostream>
using namespace std;
class bankaccount
{
protected:
    string CustomerName;
    double Accno;
    double balance;
    string AccType;

public:
    bankaccount(const string &name, double initialBalance)
    {
        CustomerName = name;
        balance = initialBalance;
    }
    virtual void deposit(double amount) = 0;
    virtual void withdrawal(double amount) = 0;
    virtual void displayBalance() = 0;
};
class savings : public bankaccount
{
    double interestRate;

public:
    savings(const string &name, double no, double intr) : bankaccount(name, no), interestRate(intr) {}
    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposited sucessfully";
    }
    void withdrawal(double amount)
    {
        if (amount < balance)
        {
            balance -= amount;
            cout << "Withdrawn Successfully";
        }
        else
            cout << "Balance insuffient";
    }
    void displayBalance()
    {
        cout << "Balance: " << balance;
    }
    void compoundInterest()
    {
        double interest = balance * interestRate;
        balance += interest;
        cout << "interest added successfully interest: " << interest;
    }
};
class CurrentAccount : public bankaccount
{
private:
    double minimumBalance;
    double serviceCharge;

public:
    CurrentAccount(const string &accNum, double initialBalance, double minBalance, double charge)
        : bankaccount(accNum, initialBalance), minimumBalance(minBalance), serviceCharge(charge) {}

    void deposit(double amount)
    {
        balance += amount;
        cout << endl
             << "Deposited " << amount << " succefully!" << endl;
    }

    void withdrawal(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << endl
                 << "Withdrawal of " << amount << " successful." << endl
                 << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayBalance()
    {
        cout << "Current Account Balance: " << balance << endl;
    }

    void checkMinimumBalance()
    {
        if (balance < minimumBalance)
        {
            balance -= serviceCharge;
            cout << "Service charge applied due to balance below minimum: " << serviceCharge << endl;
        }
    }
};

int main()
{
    savings savings("SA001", 5000.0, 0.05);
    CurrentAccount current("CA001", 10000.0, 5000.0, 100.0);

    cout << endl
         << "..........Savings account.........." << endl;
    savings.displayBalance();
    savings.deposit(2000.0);
    savings.displayBalance();
    savings.withdrawal(1500.0);
    savings.compoundInterest();
    savings.displayBalance();

    cout << endl
         << "..........Current account.........." << endl;
    current.displayBalance();
    current.deposit(5000.0);
    current.displayBalance();
    current.withdrawal(10000.0);
    current.checkMinimumBalance();
    current.displayBalance();

    return 0;
}