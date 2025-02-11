class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int plat_needed=1 , result=1;
    	int i=1,j=0;
    	
    	while(i<n and j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        plat_needed++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j])
    	    {
    	        plat_needed--;
    	        j++;
    	    }
    	    if(plat_needed>result)
    	    {
    	        result=plat_needed;
    	    }
    	}
    	return result;
    }
};