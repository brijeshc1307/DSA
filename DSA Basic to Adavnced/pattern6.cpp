/*

5
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for(int i=1; i<=n;i++){
    for(int j=n;j>i;j--){
      cout<<"  ";
    }
    for(int j=1;j<=i;j++){
      cout<<j<<" ";
    }
    for(int j=i-1;j>=1;j--){
      cout<<j<<" ";
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
    int j=n,k=1;
    while(j>i){
      cout<<"  ";
      j--;
    }
    while(k<=i){
      cout<<k<<" ";
      k++;
    }
    int l=i-1;
    while(l>=1){
      cout<<l<<" ";
      l--;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

// TC = O(n^2)

