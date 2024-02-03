#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
    vector<int> result;

    for (int j = 0; j < mCols; j++) {
        if (j % 2 == 0) {  // Top to bottom
            for (int i = 0; i < nRows; i++) {
                result.push_back(arr[i][j]);
            }
        } else {  // Bottom to top
            for (int i = nRows - 1; i >= 0; i--) {
                result.push_back(arr[i][j]);
            }
        }
    }

    return result;
}
