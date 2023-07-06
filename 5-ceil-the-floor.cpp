/**
int getfloor(int arr[],int n,int x)
{
	int low=0,high=n-1;
	int ans=-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		
		if(arr[mid]<=x)
		{
			ans=arr[mid];
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return ans;
}
int getceil(int arr[],int n,int x)
{
	int low=0,high=n-1;
	int ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]>=x)
		{
			ans=arr[mid];
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	sort(arr,arr+n);
   int f=getfloor(arr,n,x);
   int g=getceil(arr,n,x);
   return make_pair(f,g);
}
*/