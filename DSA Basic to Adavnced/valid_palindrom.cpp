/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.*/


class Solution {
private:
bool validchar(char ch){
    if((ch >='a' && ch <='z') || (ch >='A' && ch <='Z') || (ch >='0' && ch <='9')){
        return 1;
    }
    return 0;
}


char tolowercase(char ch){
  if((ch >='a' && ch <='z') || (ch >='0' && ch <='9')){
    return ch;
  } 
  else{
    char temp = ch-'A'+'a';
    return temp;
  }  
}

bool checkPalindrome(string s)
{
    int st=0;
    int e=s.length()-1;
    while(st<=e){
        if(s[st] != s[e]){
          return 0;
        }
      else{
        st++;
        e--;  
      }
      return 1;
    }
    return 1;
}

public:
bool isPalindrome(string s) {
  // remove faltu char
    string temp ="";
    for(int j=0; j<s.length(); j++) {
        if (validchar(s[j])) {
        temp.push_back(s[j]);
        }
    }
    for(int j=0; j<temp.length(); j++){
        temp[j]= tolowercase(s[j]);
    }
return checkPalindrome(temp);
}
};
