#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    vector<int>v;
    int siz=arr.size();
    sort(arr.begin(),arr.end());
   for(int i=0;i<siz-1;i++){
       if(arr[i]==arr[i+1])
               return arr[i];
           }

    }

