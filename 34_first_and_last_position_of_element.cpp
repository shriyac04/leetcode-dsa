class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=-1,h=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target)
            l=i;
        }
        for(int j=n-1;j>=0;j--){
            if(nums[j]==target)
            h=j;
        }
        return {h,l};
    }
};
