class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_max,global_max;
        current_max=global_max = nums[0];

        for(int i=1;i<nums.size();i++){
            current_max = max(nums[i], current_max + nums[i]);

            if(current_max>global_max){
                global_max = current_max;
            }
        }
        return global_max;
    }
};