class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m.insert(make_pair(nums[i],i));
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(target-nums[i]) && m[target-nums[i]]!=i  )
            {
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
                return ans;
            }
        }
            
        return ans;
        
    }
};