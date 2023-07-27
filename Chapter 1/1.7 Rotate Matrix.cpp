#include <iostream>
using namespace std;

void outputArray(int** arr, int n) 
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}
void rotateArray(int** arr, int n) 
{
    for (int layer = 0; layer < n/2; layer++) {
        int first = layer;
        int last = n - 1 - layer;
        for (int i = first; i < last; i++) {
            int offset = i - first;
            int top = arr[first][i]; // store top

            // left --> top
            arr[first][i] = arr[last - offset][first];

            // bottom --> left
            arr[last - offset][first] = arr[last][last- offset];

            // right --> bottom
            arr[last][last - offset] = arr[i][last];
            
            // top --> right
            arr[i][last] = top;

        }
    }
}

int main() {
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

    cout<< "Unchanged Matrix:\n";
    outputArray(myArray, n);
    rotateArray(myArray, n);
    cout<< "Rotated Matrix:\n";
    outputArray(myArray, n);

    //deallocate the dynamically allocated memory
    for (int i = 0; i < n; ++i) {
        delete[] myArray[i];
    }
    delete[] myArray;

    return 0;
}
