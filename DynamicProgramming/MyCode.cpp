class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums2.size();
        stack<int> s;
        unordered_map<int,int> mp;
        for(int i=m-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                mp[nums2[i]]= -1;
            }
            else if(s.size()>0 && s.top()>nums2[i])
            {
                 mp[nums2[i]]= s.top();
            }
            else if(s.size()>0 && s.top()<=nums2[i])
            {
                while(s.size()>0 && s.top()<=nums2[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                      mp[nums2[i]]= -1;
                }
                if(s.size()>0 && s.top()>nums2[i])
                {
                     mp[nums2[i]]= s.top();
                }
            }
            s.push(nums2[i]);
        }
        vector<int>ans;
        for(auto it: nums1)
        {
            ans.push_back(mp[it]);
        }
        return ans;
        
    }
};