class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int news = 0;  
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[news] = nums[i];  
                news++;
            }
        }
        
        return news;
    }
};

