/*
1.1 Is Unique
Implement an algorithm to determine if a string has all unique characters. 
What if you cannot use additional data structures?
*/

#include <iostream>
#include <algorithm>
using namespace std;

//use of extra data structure
const int MAX_CHAR = 256;

bool isUnique(string str)
{
    //if length is greater than 256, characters will have repeated
    if (str.length() > 256) {
        return false;
    }
    bool chars[MAX_CHAR] = { 0 };
    for (int i = 0; i < str.length(); i++) {
        if (chars[int(str[i])] == true) {
            return false;
        }
        chars[int(str[i])] = true;
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