/*
Given a string, write a function to check if it is a permutation of a palindrome.
*/
#include <iostream>
using namespace std;
#define NO_OF_CHARS 256

bool PalindromePermutation (string str)
{
    // create a count array and initialise all values as 0
    int count[NO_OF_CHARS] = { 0 };

    // for each count in string, increment count in the array
    for (int i = 0; str[i]; i++) {
        count[str[i]]++;
    }
    // count odd occurences
    int odd = 0;
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (count[i] & 1) {
            odd++;
        }
        if (odd > 1) {
            return false;
        }
    }
    return true;
}


int main() 
{
    string str;
    cin >> str;
    PalindromePermutation(str)
    ? cout << str << " is a permutation of a palindrome\n"
    : cout << str << " is not a permutation of a palindrome\n";
    return 0;
}

