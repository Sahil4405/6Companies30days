

// Question Link: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#

string encode(string src)
{     
  //Your code here 
  string str;
  
  for(int i = 0; i < src.size(); i++){
      char s = src[i];
      int cnt = 0;
      
      while(src[i] == s){
          cnt++;
          i++;
      }
      
      str += s;
      str += to_string(cnt);
      
      i--;
  }
  
  
  return str;
}     