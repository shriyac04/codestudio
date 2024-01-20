#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int>& nums, int n, int K) {
    sort(nums.begin(), nums.end());
    set<vector<int>> tripletSet;
    vector<vector<int>> output;

    for (int i = 0; i < n - 2; i++) {
        int low = i + 1, high = n - 1;
        while (low < high) {
            if (nums[i] + nums[low] + nums[high] < K) {
                low++;
            } else if (nums[i] + nums[low] + nums[high] > K) {
                high--;
            } else {
                tripletSet.insert({nums[i], nums[low], nums[high]});
                low++;
                high--;
            }
        }
    }
     for (auto it : tripletSet) {
        output.push_back(it);
    }

    return output;
}
