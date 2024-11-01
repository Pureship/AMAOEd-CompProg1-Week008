#include <iostream>
#include "_pause.h"

using namespace std;

int main() {

    int arr[6], temp;

    // Accept 5 integers
    cout << "Enter 5 integers (separated by spaces): ";
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    // Display the 5 integers
    cout << "You entered: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. Program to display an equilateral triangle with user-defined height (1-10)
    string characters[10] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };
    int height;

    cout << "Enter height of the triangle (1-10): ";
    cin >> height;
    if (height < 1 || height > 10) {
        cout << "Invalid height." << endl;
        return 1;
    }

    for (int i = 0; i < height; ++i) {
        for (int j = height - i - 1; j > 0; --j) {
            cout << " ";
        }
        for (int k = 0; k <= i; ++k) {
            cout << characters[i] << " ";
        }
        cout << endl;
    }

    // 3. Program to sort 6 integers in ascending order using only 4 variables (including the array)
    cout << "\nEnter 6 integers to sort (separated by spaces): ";
    for (int i = 0; i < 6; ++i) {
        cin >> arr[i];
    }

    // Sorting using bubble sort
    for (int i = 0; i < 6 - 1; ++i) {
        for (int j = 0; j < 6 - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted integers
    cout << "Sorted integers: ";
    for (int i = 0; i < 6; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cin.ignore();
    
    _pause();
    return 0;
}