
class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        
          int ans = 0;
        
        for(int i = L + 1; i < R; i++){
            int cur = i;
            
            while(cur){
                ans += (cur % 10) == X;
                cur /= 10;
            }
        }
        
        return ans;
    }
};
