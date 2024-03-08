class Solution {
public:
    bool sameFreq(string s)
    {
        unordered_map<char,int> cnt;
        for(auto i: s)
            cnt[i]++;
        
        int nin, nax;
        nin = nax = cnt[s[0]];
        
        for(auto i: cnt){
            nin = min(nin, i.second);
            nax = max(nax, i.second);
            if(nax - nin > 1)
                return 0;
        }
        
        int cnin = 0;
        for(auto i: cnt)
            if(i.second == nin)
                ++cnin;
            
        return cnt.size() - cnin <= 1;
    }
};
