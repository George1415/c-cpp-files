/*
1.1 Is Unique
Implement an algorithm to determine if a string has all unique characters. 
What if you cannot use additional data structures?
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool isUnique(string str)
{
    //sorting brute force technique
    sort(str.begin(),str.end());
    for (int i = 0; i <str.length() - 1; i++) {
        // if two adjacent characters are equal, return false
        if (str[i] == str[i + 1]) {
            return false;
        }
    }
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