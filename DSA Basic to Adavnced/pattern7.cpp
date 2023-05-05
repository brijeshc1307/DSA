/*

5
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++){
    for(int j=1;j<=(n-i);j++){
      cout<<j<<" ";
    }
    for(int j=1;j<=i;j++){
      cout<<"* *"<<" ";
    }
    for(int j=n-i;j>=1;j--){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}


// TC = O(n^2)

// OR

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
      cout<<j<<" ";
    }
    
    for(int k=1;k<=(i-1)*2;k++){
      cout<<"*"<<" ";
    }
    for(int m=n-i+1;m>=1;m--){
      cout<<m<<" ";
    }
    cout<<endl;
  }
  return 0;
}

// OR

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1,k=1;
    while(j<=n-i+1){
      cout<<j<<" ";
      j++;
    }
    while(k<=(i-1)*2){
      cout<<"*"<<" ";
      k++;
    }
    int m=n-i+1;
    while(m>=1){
      cout<<m<<" ";
      m--;
    }
    i++;
    cout<<endl;
  }
  return 0;
}
