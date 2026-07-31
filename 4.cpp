#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string accNum, string holder, double initialBalance = 0.0)
    {
        accountNumber = accNum;
        accountHolder = holder;

        if (initialBalance < 0)
        {
            throw invalid_argument("Initial balance cannot be negative.");
        }

        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount)
    {
        if (amount <= 0)
        {
            throw invalid_argument("Deposit amount must be positive.");
        }

        balance += amount;
    }

    // Withdraw function
    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            throw invalid_argument("Withdrawal amount must be positive.");
        }

        if (amount > balance)
        {
            throw runtime_error("Insufficient balance.");
        }

        balance -= amount;
    }

    // Display account details
    void show()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : " << fixed << setprecision(2) << balance << endl;
    }
};

int main()
{
    try
    {
        BankAccount acc("123456", "Dibanshi", 1000);

        cout << "Initial Details:\n";
        acc.show();

        acc.deposit(500);
        cout << "\nAfter Deposit:\n";
        acc.show();

        acc.withdraw(300);
        cout << "\nAfter Withdrawal:\n";
        acc.show();
    }
    catch (exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}