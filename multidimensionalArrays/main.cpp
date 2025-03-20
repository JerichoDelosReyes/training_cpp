#include <iostream>
using namespace std;

int main() {
    int cube[2][3][4];

    cout << "Enter 24 elements for the 3D array:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cin >> cube[i][j][k];
            }
        }
    }


    cout << "\nThe 3D array is:\n";
    for (int i = 0; i < 2; i++) {
        cout << "Layer " << i << ":\n";
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << cube[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
