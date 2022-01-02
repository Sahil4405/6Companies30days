

// Questions Link: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#
// Sliding Window Technique

class{
	public:
	    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
	        // sort(arr[i])
	        long long product = 1;
	        int cnt = 0;
	        // int j = 0;
	        
	        long long i = 0, j = 0;
	        
	        while(i < n){
	            product *= a[i];
	            
	            while(j < n && product >= k){
	                product = product/a[j];
	                j++;
	            }
	            
	            if(product < k){
	                cnt += i - j + 1;
	            }
	            
	            i++;
	        }
	        
	        return cnt;
	    }
};