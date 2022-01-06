
// Question Link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

class solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr, arr+n);
        int mis, rep;
        int *vi = new int[2];
        
        for(int i = 0; i < n; i++){
            if(arr[i] == arr[i+1]){
                rep = arr[i];
            }
            
            if(binary_search(arr, arr+n, i+1)){
                continue;
            }else{
                mis = i+1;
            }
            
            // if(arr[i] ==)
        }
        
        vi[0] = rep;
        vi[1] = mis;
        
        return vi;
    }
};