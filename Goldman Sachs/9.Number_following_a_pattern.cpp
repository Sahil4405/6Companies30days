
// Question Link: https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1

class solution{
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int> st;
        string str;
        int num = 1;
        
        for(int i = 0; i < S.size(); i++){
            if(S[i] == 'D'){
                st.push(num);
                num++;
            }else{
                st.push(num);
                num++;
                
                while(st.size() > 0){
                    str += to_string(st.top());
                    st.pop();
                }
            }
        }
        
        st.push(num);
        
        while(st.size() > 0){
            str += to_string(st.top());
            st.pop();
        }
        
        return str;
    }
};