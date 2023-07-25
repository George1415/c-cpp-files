#include <iostream>
using namespace std;
// Function prototype
void myFunction(int** arr, int rows, int cols);

// Example usage
void myFunction(int** arr, int rows, int cols) {
    // Access and manipulate elements of the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}

int main() {
    int rows = 5;
    int cols = 5;
    int count = 0;
    // Dynamically allocate memory for the 2D array
    int** myArray = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        myArray[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            myArray[i][j] = count;
            count++;
        }
    }

    // Initialize the elements of the array (for example)
    // ...

    myFunction(myArray, rows, cols); // Passing the 2D array to the function

    // Don't forget to deallocate the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] myArray[i];
    }
    delete[] myArray;

    return 0;
}
