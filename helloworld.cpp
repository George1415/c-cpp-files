/*
1.1 Is Unique
Implement an algorithm to determine if a string has all unique characters. 
What if you cannot use additional data structures?
*/

#include <iostream>
using namespace std;

bool isUnique(string str)
{
    //if at any time we encounter 2 same characters return false
    for (int i = 0; i < str.length() - 1; i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                return false;
            }
        }
    }
    // if no duplicate character encountered return true
    return true;
}

int main()
{
    string str;
    cin >> str;
    if (isUnique(str)) {
        cout << "The string " << str << " has all unique characters\n";
    }
    else {
        cout << "The string " << str << " has duplicated characters\n";
    }

}