class Solution {
public:
void dfs(vector<vector<int>>& graph, int &src,int &target,vector<int> &temp,vector<vector<int>> &result){
temp.push_back(src);
if(src==target){
result.push_back(temp);
}
else{
    for(int v :graph[src]){
        dfs(graph,v,target,temp,result);
temp.pop_back();
    }

}

}
 
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n =graph.size();
       vector<vector<int>> result;
 vector<int> temp;
 int src=0;
 int target=n-1;
 dfs(graph,src,target,temp,result);
return result;
    }
};