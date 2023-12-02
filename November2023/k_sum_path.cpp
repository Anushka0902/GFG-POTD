 int traversal(Node *root, unordered_map<int, int>& mp, int& k, int sum) {
        if (!root) return 0;
        
        int res = 0;
        int currSum = sum + root->data;
        
        if (mp.find(currSum - k) != mp.end()) 
            res += mp[currSum - k];
            
        mp[currSum]++;
        
        res += traversal(root->left, mp, k, currSum);
        res += traversal(root->right, mp, k, currSum);
        
        mp[currSum]--;
        return res;
    }

    int sumK(Node *root, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        return traversal(root, mp, k, 0);
    }
