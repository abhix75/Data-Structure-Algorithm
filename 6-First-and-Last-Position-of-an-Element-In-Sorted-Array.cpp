/**
METHOD-I(USING LOwer-Bound and Upper-Bound)




#include <bits/stdc++.h> 

int lowerbound(vector<int>&arr,int n,int k)
{
    int low=0,high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid] >= k)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
int upperbound(vector<int>&arr,int n,int k)
{
    int low=0,high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]>k)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int lb=lowerbound(arr,n,k);

    if(lb == n || arr[lb] != k) return{-1,-1};

    return {lb,upperbound(arr,n,k)-1};
}*/







/**
METHOD-II (Without Using Lower-bound and Upper-bound)

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
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int fo=firstoccurence(arr,n,k);
    
    if(fo== -1) return {-1,-1};

    return {fo, lastoccurence(arr, n, k)};
}



*/