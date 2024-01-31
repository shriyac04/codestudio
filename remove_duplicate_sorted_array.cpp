#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	if(n==0)
	return 0;
	sort(arr.begin(),arr.begin()+n);
	int count1=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[i-1]){
			count1++;
		}
	}
return count1;
}
