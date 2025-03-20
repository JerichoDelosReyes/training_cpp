#include <iostream>
using namespace std;

int main() {
    int layers, rows, cols;

    // Ask the user for the 3D array size
    cout << "Enter number of layers: ";
    cin >> layers;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Declare a 3D array dynamically
    int ***array = new int**[layers];
    for (int i = 0; i < layers; i++) {
        array[i] = new int*[rows];
        for (int j = 0; j < rows; j++) {
            array[i][j] = new int[cols];
        }
    }

    // Taking input for the 3D array
    cout << "\nEnter the elements:\n";
    for (int i = 0; i < layers; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                cout << "Element at [" << i << "][" << j << "][" << k << "]: ";
                cin >> array[i][j][k];
            }
        }
    }

    // Displaying the 3D array
    cout << "\nThe 3D array is:\n";
    for (int i = 0; i < layers; i++) {
        cout << "Layer " << i << ":\n";
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                cout << array[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < layers; i++) {
        for (int j = 0; j < rows; j++) {
            delete[] array[i][j];
        }
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
