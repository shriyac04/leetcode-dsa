
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i=nums.size();
        std::rotate(nums.begin(),nums.begin()+k+1,nums.end());
    }
};
