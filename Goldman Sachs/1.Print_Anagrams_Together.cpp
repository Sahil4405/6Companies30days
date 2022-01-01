// Questions Link: https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#


class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ans;
        map<string, vector<string>> mp;
        
        for(int i = 0; i < string_list.size(); i++){
            string s = string_list[i];
            sort(s.begin(), s.end());
            mp[s].push_back(string_list[i]);
        }
        
        for(auto i:mp){
            ans.push_back(i.second);
        }
        
       return ans; 
    }
};