#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int rows;
    cout << "Enter the rows you want: ";
    cin >> rows;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << '\n';
    }

    for (i = rows - 1; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
