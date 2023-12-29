class Solution {
public:
    int kSubstrConcat(int n, string s, int k) {
        if (n % k > 0)
            return 0;

        unordered_set<string> st;
        for (int i = 0; i < n / k; ++i)
            st.insert(s.substr(i * k, k));

        return st.size() <= 2;
    }
}
