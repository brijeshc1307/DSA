/*

3
1 
2 3 
4 5 6

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int num=1;
  for(int i=1; i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num++;
    }
    cout<<endl;
  }
  return 0;
}

// TC = O(n^2)

/*

4
1 
2 3 
3 4 5 
4 5 6 7 

*/


#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  
  for(int i=1; i<=n;i++){
    int num=i;
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num++;
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
  
  for(int i=1; i<=n;i++){
    for(int j=i;j<i*2;j++){
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
    int j=i;
    while(j<i*2){
      cout<<j<<" ";
      j++;
    }
    cout<<endl;
    i++
  }
  return 0;
}
