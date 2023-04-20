## Program Code

```c++
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
```

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
- The program uses the `swap` function from the `<algorithm>` header to swap the characters in the string.
