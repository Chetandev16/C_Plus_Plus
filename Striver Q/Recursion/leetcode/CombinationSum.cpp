class Solution {
public:
   void solve(vector<int> &arr , int target, int i ,vector<int> &v, vector<vector<int>> &ans1){
        
       if(i == arr.size()){
            if(target == 0)
                ans1.push_back(v);
        
            return;
        }
       
    if(arr[i] <= target){
           v.push_back(arr[i]);
           solve(arr,target-arr[i],i,v,ans1);
    
           v.pop_back();
      }
       solve(arr,target,i+1,v,ans1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(candidates,target,0,v,ans);
        
        return ans;
    }
};