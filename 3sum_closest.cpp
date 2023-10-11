class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int diff=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int ele=nums[i];
            int s=i+1;
            int e=nums.size()-1;
            
            while(s<e){
                if(ele+nums[s]+nums[e]==target)
                {
                    return ele+nums[s]+nums[e];
                }
                else if(abs( ele+nums[s]+nums[e]-target)<diff){
                    diff=abs( ele+nums[s]+nums[e]-target);
                    ans=ele+nums[s]+nums[e];
                }
            
            
           else if(ele+nums[s]+nums[e]<target) s++;
            else if(ele+nums[s]+nums[e]>target) e--;
            }
        }

        return ans;
        
    }
};
