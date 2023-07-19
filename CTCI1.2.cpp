/*
Given two strings, write a method to decide if one is a permutation of the other
*/

#include <iostream>
#include <algorithm>
using namespace std;
// sort both strings and then compare strings
bool checkPermutation (string str1, string str2)
{
    // if lengths are not equal then they cannot be permutations
    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2) {
        return false;
    }

    // sort strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // compare
    for (int i = 0; i < n1; i++) {
        if (str1[i] != str2[i]) {
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