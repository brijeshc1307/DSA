// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
//  Output: ["h","a","n","n","a","H"]

// ## Program Code

#include <iostream>
using namespace std;

// Function to reverse the string
void reversestring(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
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
    cout<<"Length of string is "<<len<< endl;
    reversestring(name,len);
    cout<<"Reverse of string is "<<name<<endl;
    return 0;
}
/*```

## Sample Output

```
Enter your name: John
Your name is John
Length of string is 4
Reverse of string is nhoJ
```

## Notes

- The program assumes that the maximum length of the input string is 20 characters.
- The `reversestring` function modifies the original string in place.
- The `getlength` function counts the number of characters in the string until it encounters the null character `\0`, which marks the end of the string.
- The program uses the `swap` function from the `<algorithm>` header to swap the characters in the string.*/


// Using Recursion
#include <iostream>
using namespace std;

void revrse(string &str, int i,int j){
    if(i>j)
        return;
    swap(str[i],str[j]);
    i++;
    j--;
    revrse(str,i,j);
}
int main() {
    string name="Brijesh";
    cout<<name<<endl;
    revrse(name,0,name.length()-1);
    cout<<name<<endl;

    return 0;
}

// TC =O(N)
