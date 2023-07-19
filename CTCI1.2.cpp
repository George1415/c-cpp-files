/*
Given two strings, write a method to decide if one is a permutation of the other
*/

#include <iostream>
using namespace std;

const int NUM_OF_CHAR = 256;

bool checkPermutation (string str1, string str2)
{
    // if strings aren't same length, they can't be permutations of eachother
    if (str1.length() != str2.length()) {
        return false;
    }
    
    // create two count arrays and initialise all values to 0
    int count[NUM_OF_CHAR] = { 0 };

    
    
    for (int i = 0; i < str1.length(); i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < NUM_OF_CHAR; i++) {
        if (count[i]) {
            return false;
        }
    }
    return true;
}

int main() 
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    if (checkPermutation(str1, str2)) {
        cout << "The string " << str1 << " is a permutation of " << str2 << "\n";
    }
    else {   
        cout << "The string " << str1 << " isn't a permutation of " << str2 << "\n";
    }

}