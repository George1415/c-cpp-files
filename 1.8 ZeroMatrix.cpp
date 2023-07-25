#include <iostream>
using namespace std;

void nullifyRow(int** arr, int n, int row) {
    for (int j = 0; j < n; j++)
        arr[row][j] = 0;
}

void nullifyColumn(int** arr, int n, int column) {
    for (int i = 0; i < n; i++)
        arr[i][column] = 0;
}

void setZeros(int** arr, int n)
{
    bool rowHasZero = false;
    bool columnHasZero = false;

    // check if first row has zero
    for (int j = 0; j < n; j++) {
        if (arr[0][j] == 0) {
            rowHasZero = true;
            break;
        }
    }

    // check if first column has zero
    for (int i = 0; i < n; i++) {
        if (arr[i][0] == 0) {
            columnHasZero = true;
            break;
        }
    }

    // check for zeroes in the rest of the array
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[i][j] == 0) {
                arr[i][0] == 0;
                arr[0][j] == 0;
            }
        }
    }

    // nullify rows based on value in first column
    for (int i = 1; i < n; i++) {
        if(arr[i][0] == 0)
            nullifyRow(arr, n, i);
    }

    // nullify columns based on values in first row
    for (int j = 0; j < n; j++) {
        if(arr[0][j] == 0)
            nullifyColumn(arr, n, j);
    }

    // nullify first row
    if(rowHasZero)
        nullifyRow(arr, n, 0);

    // nullify first column
    if(columnHasZero)
        nullifyColumn(arr, n, 0);
}

void outputArray(int** arr, int n) 
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int n = 5;
    int count = 0;
    // Dynamically allocate memory for the 2D array
    int** myArray = new int*[n];
    for (int i = 0; i < n; ++i) {
        myArray[i] = new int[n];
    }
    // add consecutive values to 2D array
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            myArray[i][j] = count;
            count++;
        }
    }

    // output result
    cout<< "original array:\n";
    outputArray(myArray, n);
    setZeros(myArray, n);
    cout << "nullifying rows and columns with zero in it:\n";
    outputArray(myArray, n);
}