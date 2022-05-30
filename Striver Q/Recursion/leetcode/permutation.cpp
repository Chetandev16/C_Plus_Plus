class Solution {
public:
    
    
    void solve(vector<int> &nums,vector<vector<int>> &ans,unordered_map<int,bool> &visited,vector<int> &v){
        if(v.size() == nums.size()){
            ans.push_back(v);
            return;
        }
        
        for(int k=0;k<nums.size();k++){
            if(!visited[nums[k]]){
                visited[nums[k]] = true;
                v.push_back(nums[k]);
                solve(nums,ans,visited,v);
                v.pop_back();
                visited[nums[k]] = false;
            }
        }
    }

    void solve(vector<int> &nums,vector<vector<int>> &ans,int i){
        if(i == nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int k=i;k<nums.size();k++){
           swap(nums[k],nums[i]);
            solve(nums,ans,i+1);
            swap(nums[k],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,bool> visited;
        vector<int> v;
        solve(nums,ans,visited,v);
        return ans;
    }
};