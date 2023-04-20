#include <iostream>
using namespace std;

void reversestring(char name[], int n){
  int s=0;
  int e=n-1;
  while(s<e){
    swap(name[s++],name[e--]);
  }
}
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
  int len=getlength(name);
    cout<<"Lenath of string is "<<len<< endl;
  reversestring(name,len);
    cout<<"Reverse of string is "<<name<<endl;
	return 0;
}
