
#include <iostream>
using namespace std;

int main()
{
    
    int num;
    cin >> num; 
    int array[31];
    array[0] = 0;
    array[1] = 1;
    array[2] = 1;
    for(int i = 3; i < 31; i++) {
        array[i] = array[i-2] + array[i-1];
        if (num == array[i]) {
            cout << num << "\n";
        }
    }
    
    //for (int i = 0; i < 31; ++i) {
      //  std::cout << array[i] << " ";
    //}

    
}