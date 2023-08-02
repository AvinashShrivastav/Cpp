#include <iostream>

// Function to convert lowercase characters to uppercase
void convertToLowerToUpper(char arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            // Convert lowercase character to uppercase
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!'};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
    }

    convertToLowerToUpper(arr, size);

    std::cout << "\nArray after converting lowercase to uppercase: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
    }

    return 0;
}
