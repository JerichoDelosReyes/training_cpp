#include <iostream>

using namespace std;

void swap(string &x, string &y);

int main()
{
    string x = "Jericho";
    string y = "Justine";

    swap(x, y);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
}

void swap(string &x, string &y)
{
    string temp;

    temp = x;
    x = y;
    y = temp;
}