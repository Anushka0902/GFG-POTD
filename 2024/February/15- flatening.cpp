class Solution {
public:
    Node* head;
    Node* tail;
    void inOrder(Node* curr){
        if(!curr)
            return;
        
        inOrder(curr->left);
        if(!head)
            head = curr;
        else{
            tail->right = curr;
            curr->left = tail;
        }
        tail = curr;
        inOrder(curr->right);
    }
    Node *flattenBST(Node *root)
    {
        head = tail = NULL;
        inOrder(root);
        return head;
    }
};
