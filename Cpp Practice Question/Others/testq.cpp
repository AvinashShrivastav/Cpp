#include <iostream>

const int ROWS = 3;  // Number of rows in the array
const int COLS = 4;  // Number of columns in the array

using namespace std;

void setArrData(int arr[ROWS][COLS]) {
    cout << "Enter array elements:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }
}

void printArrData(const int arr[ROWS][COLS]) {
    cout << "Array elements:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

double getAverage(const int arr[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
    }
    return static_cast<double>(sum) / (ROWS * COLS);
}

void findMax(const int arr[ROWS][COLS]) {
    cout << "Max elements in each column:\n";
    for (int j = 0; j < COLS; j++) {
        int maxElement = arr[0][j];
        for (int i = 1; i < ROWS; i++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
        cout << "Column " << j << ": " << maxElement << endl;
    }
}

int main() {
    int arr[ROWS][COLS];

    setArrData(arr);
    printArrData(arr);

    double average = getAverage(arr);
    cout << "Average: " << average << endl;

    findMax(arr);

    return 0;
}
