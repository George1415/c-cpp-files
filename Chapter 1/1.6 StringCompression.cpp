/*
Implement a method to perform basic string compression using the counts of repeated characters
*/
#include <iostream>
#include <string>
using namespace std;

string StringCompression (string str)
{
    int count=1;
    string compressed_str = "";
    for (int i = 1; i < str.length(); i++) {
        if (str[i-1] == str[i])
            count++;
        
        else
        {
            compressed_str += str[i-1];
            compressed_str += to_string(count);
            count = 1;
        }

        if(compressed_str.length() >= str.length())
            return str;
    }
    compressed_str += str[str.length()-1];
    compressed_str += to_string(count);
    if(compressed_str.length() >= str.length())
        return str;
    return compressed_str;
}





int main() {
    string str;
    cin >> str;
    cout << StringCompression(str) << "\n";
    return 0;
}