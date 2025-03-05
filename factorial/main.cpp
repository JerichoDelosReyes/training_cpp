#include <iostream>

using namespace std;

int main()
{
    int x;
    int ans = 1;
    cout << "Enter a number you want to !: ";
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        ans = ans * i;
    }

    cout << ans;

    return 0;
}