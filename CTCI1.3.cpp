/*
write a method to replace all spaces in a string with "%20".
*/
#include <iostream>
using namespace std;

void replaceSpaces(string str) 
{
    string add = "%20";
    for (int i = 0; i<str.length(); i++) {
        if(str[i] == ' ') {
            str.replace(i, 1, add);
        }
    }
    cout << str;
}

int main()
{
    string str = "Mr John Smith    ";
    replaceSpaces(str);
    return 0;
}