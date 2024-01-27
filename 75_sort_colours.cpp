class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int count3=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0){
                count1++;
            }
            else if(nums[i]==1){
                count2++;

            }
            else{
                count3++;
            }
            i++;

        }
        for(int j=0;j<count1;j++){
            nums[j]=0;
        }
         for(int j=count1;j<count2+count1;j++){
            nums[j]=1;
            }
             for(int j=count2+count1;j<count3+count2+count1;j++){
            nums[j]=2;
             }
             
    }

};
