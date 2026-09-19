
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (root ==NULL)
            return{};
vector <int>result;
queue<TreeNode *> que;
que.push(root);
while (!que.empty()){
    int n =que.size();
TreeNode * t= NULL;
while(n--){
t=que.front();
que.pop();
if(t->left!=NULL){
    que.push(t->left);
    }
    if(t->right!=NULL){
    que.push(t->right);}
 
}
result.push_back(t->val);
    }
    return result;
    }


};