
// Questions Link: https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    if (n == 1 or n == 2 or n == 3 or n == 4 or n == 5)
        return n;
 
        set<long long int> s;
        s.insert(1);
        n--;
        
        while (n) {
            auto it = s.begin();
     
     
            long long int x = *it;
     
     
            s.erase(it);
     
     
            s.insert(x * 2);
            s.insert(x * 3);
            s.insert(x * 5);
            n--;
        }
        
        return *s.begin();
	}
};