Problem link:https://www.codingninjas.com/studio/problems/binary-search_972?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
       
       int low=0,high=n-1;
       
       while(low<=high)
       {
           int mid=(low+high)/2;
           
           if(arr[mid]==k) return mid;
           
           else if(arr[mid]>k)
           {
               high=mid-1;
           }
           else
           {
               low=mid+1;
           }
       }
       return -1;
    }
};
