//Description:
/*
Sample Input 1:
2
3 4
1 2 3 4
5 6 7 8
9 10 11 12
4 4
1 2 4 5
3 6 8 10
11 12 13 15
16 14 9 7
Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4
1 3 11 16 14 12 6 2 4 8 13 9 7 15 10 5 
Explanation For Sample Input 1:
Here, the elements are printed in a form of a wave, first, the 0th column is printed from top to bottom then the 1st column from bottom to top, and so on. Basically, the even column is printed from top to bottom and the odd column in the opposite direction.
*/

//Code :
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
 vector<int> ans;
    for(int i=0; i<mCols; i++){
        if(i%2==0){
          for (int j = 0; j < nRows; j++) {
            ans.push_back(arr[j][i]);
          }
        } else {
          for (int k = nRows - 1; k >= 0; k--) {
            ans.push_back(arr[k][i]);
          }
        }
        }
    return ans;
}

// Time complexity : O(n^2) or O(m*n)
// Space complexity : O(1)

