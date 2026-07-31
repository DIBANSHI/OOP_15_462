#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int amt;
    string pin, name;

public:
    void withdraw(int a) {
        cout << "Withdraw: " << a << endl;
    }

    void deposit(int a) {
        cout << "Deposit: " << a << endl;
    }
};

int main()
{
    BankAccount b;
    b.deposit(500);
    b.withdraw(200);

    return 0;
}