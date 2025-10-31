#include <bits/stdc++.h>
using namesp std;

int Search(vector<int> &arr, int target){
    int low=0;
    int high = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target) return mid;
        else if (target > arr[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int recursive(vector<int> &arr, int target, in low, int high){
    if (low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target){
        return recursive(arr,target,mid+1,high);
    }else {
        return recursive(arr,target,low,mid-1);
    }
}