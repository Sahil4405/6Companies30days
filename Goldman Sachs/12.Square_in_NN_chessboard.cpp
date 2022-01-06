
// Question Link: https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long sum = 0;
        
        if(N == 1)
        return 1;
        
        while(N > 0){
            sum += N*N;
            N--;
        }
        
        return sum;
    }
};