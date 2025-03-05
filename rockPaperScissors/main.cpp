#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    while (true)
    {
        int choice;
        string array[] = {"Rock", "Paper", "Scissors"};
        int sizeOfChoice = sizeof(array) / sizeof(array[0]);

        int ai = rand() % sizeOfChoice + 1;

        cout << "*************|ROCK PAPER SCISSORS|*************" << "\n";
        cout << "Choices: Rock (1), Paper (2), Scissors (3)" << "\n";
        cout << "Enter choice: ";
        cin >> choice;

        cout << "You picked: " << array[choice - 1] << '\n';
        cout << "Opponent picked: " << array[ai - 1] << '\n';

        if (choice - 1 == ai - 1)
        {
            cout << "Tied." << '\n';
        }
        else if ((choice == 1 && ai == 2) || (choice == 2 && ai == 3) || (choice == 3 && ai == 0))
        {
            cout << "You lost." << '\n';
        }
        else
        {
            cout << "You win." << '\n';
        }
        char restart;
        cout << "Try again? (y/n): ";
        cin >> restart;

        restart = tolower(restart);

        if (restart == 'y')
        {
            continue;
        }
        else if (restart == 'n')
        {
            break;
        }
        else
        {
            cout << "Enter a valid input";
            break;
        }
    }
}
