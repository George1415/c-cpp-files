/*
1.1 Is Unique
Implement an algorithm to determine if a string has all unique characters. 
What if you cannot use additional data structures?
*/

#include <iostream>
using namespace std;

bool isUnique(string str)
{
    // 32 bits set to zero
    int checker = 0;
    for (int i = 0; i < str.length(); i++) {
        int BitAtIndex = int(str[i]) - 'a';
        
        // if that bit is already set in counter return false
        if ((checker & (1 << BitAtIndex)) > 0) {
            return false;
        }
        // else update checker
        checker = checker | (1 << BitAtIndex);
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