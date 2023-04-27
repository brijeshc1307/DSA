/*Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total = row*col;
        int startingrow=0;
        int startingcol=0;
        int endingRow=row-1;
        int endingCol=col-1;
    vector<int> ans;
    while(count < total) {
    //print starting row
    for(int index = startingcol; count < total && index<=endingCol; index++){
        ans.push_back(matrix[startingrow][index]);
        count++;
    }
    startingrow++;
    //print ending column

    for (int index=startingrow; count < total && index<=endingRow; index++) {
        ans.push_back(matrix[index][endingCol]);
        count++;
    }
    endingCol--;
    //print ending row
    for (int index=endingCol; count < total && index>=startingcol; index--) {
        ans.push_back(matrix[endingRow][index]);
        count++;
    }
    endingRow--;
    //print starting col
    for (int index=endingRow; count < total && index>=startingrow; index--) {
        ans.push_back(matrix[index][startingcol]);
        count++;
    }
    startingcol++;

    }
    return ans;
    }
};


// Time complexity : O(n^2) or O(m*n)
// Space complexity : O(1)
// Notes :
// Logic :
// Best Solution in Leetcode :
