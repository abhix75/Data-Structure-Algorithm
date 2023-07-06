
#include <bits/stdc++.h> 

int firstoccurence(vector<int>&arr,int n,int k)
{
    int low=0,high=n-1;
    int first=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(arr[mid] == k)
        {
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<k)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return first;
}

int lastoccurence(vector<int>&arr,int n,int k)
{
    int low=0,high=n-1;
    int last=-1;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(arr[mid]==k)
        {
            last=mid;
            low=mid+1;
        }
        else if (arr[mid]<k)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return last;
}
int firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int fo=firstoccurence(arr,n,k);
    
    if(fo == -1) return 0;

    return ((lastoccurence(arr, n, k) - fo) + 1);
}
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	return firstAndLastPosition(arr,n,x);
}
