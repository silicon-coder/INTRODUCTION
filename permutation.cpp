class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&ans,vector<int>&res,int ind){
        if(ind>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            solve(nums,ans,res,ind+1);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        int index=0;
        solve(nums,ans,res,0);
        return ans;
    }
};