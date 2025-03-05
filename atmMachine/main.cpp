#include <iostream>

using namespace std;

class Human
{
public:
    string name;
    int age;

    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Account
{
public:
    string name;
    int password;
    int balance;
    Account(string name, int password, int balance)
    {
        this->name = name;
        this->password = password;
        this->balance = balance;
    }
};

int main()
{
    Human human1("Jericho G. Delos Reyes", 19);
    Human human2("Justine Lawrence B. Coronel", 25);

    Account account1(human1.name, 123456, 2000);
    Account account2(human2.name, 525252, 1500);

    bool hasAccess = false;
    int choice;
    int deposit;
    int withdraw;
    int password;

    cout << "************| ATM SIMULATOR |************" << endl;
    cout << "Enter password: ";
    cin >> password;

    if (password == account1.password)
    {
        cout << "Welcome " << account1.name << "!" << endl;
        hasAccess = true;
    }
    else if (password == account2.password)
    {
        cout << "Welcome " << account2.name << "!" << endl;
        hasAccess = true;
    }
    else
    {
        cout << "Wrong password." << endl;
        return 1;
    }

    while (hasAccess = true)
    {
        cout << "\n";
        cout << "************| ATM OPTIONS |************" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Your balance is: P" << account1.balance << endl;
            break;
        case 2:
            cout << "Enter deposit amount: ";
            cin >> deposit;
            account1.balance = account1.balance + deposit;
            cout << "Deposit successful! Your new balance is: P" << account1.balance << endl;
            break;
        case 3:
            cout << "Enter withdrawal amount: ";
            cin >> withdraw;
            if (account1.balance < withdraw)
            {
                cout << "Insufficient funds! Your current balance is: P" << account1.balance << endl;
            }
            else
            {
                account1.balance = account1.balance - withdraw;
                cout << "Withdrawal successful! Your new balance is: P" << account1.balance << endl;
            }
            break;
        case 4:
            cout << "Thank you for using the Zer0_ATM! Goodbye.";
            return 1;
        default:
            cout << "Enter a valid input." << endl;
            break;
        }
    }

    return 0;
}