class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest =arr[0];
	    int second_largest INT_MIN;
	    int k=0;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>largest)
	        {
	            second_largest=largest;
	            largest=arr[i];
	            k=1;
	            
	        }
	        if(arr[i]>second_largest && arr[i]!= largest)
	            {
	               second_largest=arr[i];
	               k=1;
	            }
	        
	    }
	    if(k==0)
	        {
	            return -1;
	        }
	        else
	        {
	            return second_largest;
	        }
	}
};