/*
Assume you have a method isSubstring which checks if one word
is a substring of another. Given two strings, s1 and s2, 
write code to check if s2 is a rotation of s1 using only one
call to isSubstring.
*/
#include <iostream>
using namespace std;

void isSubstring(string s1, string s2) {
    // empty function
}

void isRotation(string s1,string s2) {
    if (s1.length() == s2.length() && s1.length() > 0) {
        string s1s1 = s1 + s1;
        return isSubstring(s1s1, s2);
    }
}

int main() {
    string s1 = "waterbottle";
    string s2 = "erbottlewat";
    isRotation(s1, s2);
    return 0;
}