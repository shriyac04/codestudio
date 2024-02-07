#include <bits/stdc++.h> 
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{int n=matrix.size();
for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        swap(matrix[i][j],matrix[j][i]);
    }
}

  return matrix;  // Write your code here.
}
