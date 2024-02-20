class Solution {
public:
    bool can(int i, string& A, vector<string> & B){
        if(i == A.size())
            return true;
            
        for(auto str: B){
            if(str.size() <= (A.size() - i) && A.substr(i, str.size()) == str){
                if(can(i + str.size(), A, B))
                    return true;
            }
        }
        
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
       return can(0,A,B);
    }
};
