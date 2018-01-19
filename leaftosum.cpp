/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void findpath(TreeNode* A, int b, vector<int> &v,vector <vector<int>> &ans)
{
    if(b==0 && A->left==NULL && A->right==NULL)
      ans.push_back(v);
      
     if(A->left!=NULL)
    {
        int x=(A->left)->val;
        v.push_back(x);
        findpath(A->left,b-x,v,ans);
        v.pop_back();
    }
    

    if(A->right!=NULL)
    {
        int x=(A->right)->val;
        v.push_back(x);
        findpath(A->right,b-x,v,ans);
        v.pop_back();
    }
    
}


vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    
    vector < vector<int> > ans;
    vector <int> v;
    
    if (A==NULL)
    return ans;
    
    v.push_back(A->val);

    int left=B-A->val;
    findpath(A,left,v,ans);
    
    return ans;
}

