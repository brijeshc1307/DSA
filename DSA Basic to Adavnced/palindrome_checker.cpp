
#include <iostream>
using namespace std;

// Function to check if a string is a palindrome
bool checkPalindrome(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s] != name[e]){
            return false;
        }
        else{
            s++;
            e--;  
        }
    }
    return true;
}

// Function to get the length of the string
int getlength(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++){
        count ++;
    }
    return count;
}

// Main function
int main() {
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<< "Your name is "<<name<<endl;
    int len=getlength(name);
    cout<<"Is palindrome or not: "<<boolalpha<<checkPalindrome(name,len)<< endl;
    return 0;
}

//Sample Output

/*
Enter your name: madam
Your name is madam
Is palindrome or not: true
*/

/* Notes

- The program assumes that the maximum length of the input string is 20 characters.
- The `checkPalindrome` function checks if the input string is a palindrome or not by comparing the first and last characters of the string and moving towards the middle of the string until the entire string is checked.
- The `getlength` function counts the number of characters in the string until it encounters the null character `\0`, which marks the end of the string.
- The program uses the `boolalpha` manipulator to output the boolean value as "true" or "false".*/
