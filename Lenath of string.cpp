#include <iostream>
using namespace std;

int getlength(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++){
        count ++;
    }
    return count;
}

int main() {
    char name[20];
    cout<<"Enter vour name "<<endl;
    cin>>name;
    cout<< "Your names is "<<name<<endl;
    cout<<"Lenath of string is "<<getlength(name)<< endl;
	return 0;
}
