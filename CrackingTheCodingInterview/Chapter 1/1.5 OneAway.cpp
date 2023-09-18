/*
There are three types of edits that can be performed on strings: 
insert a character, remove a character, or replace a character. 
Given two strings, write a function to check if they are one edit
(or zero edits) away.
*/
#include <iostream>
using namespace std;

// returns true if str1 and str2 are one edit away, else false
bool OneAway (string str1, string str2)
{
    // find length of given strings
    int length1 = str1.length(), length2 = str2.length();

    // if difference between string lengths is more than return false
    if (abs(length1-length2) > 1)
        return false;

    // count number of edits
    int count = 0;

    int i = 0, j = 0;
    while(i < length1 && j < length2)
    {
        if (str1[i] != str2[j])
        {
            if (count == 1)
                return false;
            
            // if length of one string is more then insertion/deletion occured
            if (length1 > length2)
                i++;
            else if (length2 > length1)
                j++;
            else
            {
                i++;
                j++;
            }
            // increment count
            count++;

        }
        else
        {
            i++;
            j++;
        }
    }
    if (i < length1 || j < length2)
        count++;
 
    return true;
}


int main() {
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    OneAway(str1, str2)
        ? cout << str1 << " is one edit away from " << str2
        : cout << str1 << " is not one edit away from " << str2;
    return 0;
}