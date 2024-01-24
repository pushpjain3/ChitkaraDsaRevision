#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
       
}

int main() {
    /*
        A phrase is a palindrome if, after converting all uppercase letters into 
        lowercase letters and removing all non-alphanumeric characters, it reads 
        the same forward and backward. Alphanumeric characters include letters and numbers.

        Given a string s, return true if it is a palindrome, or false otherwise.
    */
    string s = "A man, a plan, a canal: Panama";
    if(isPalindrome(s)){
        cout<<"Given String is a palindrome.";
    }
    else{
        cout<<"Given String is not a palindrome.";
    }
    return 0;
}
