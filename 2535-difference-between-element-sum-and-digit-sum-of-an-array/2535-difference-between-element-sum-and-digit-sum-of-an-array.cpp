class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int e_sum = 0;
        int d_sum = 0;
    
        for(int i=0; i<nums.size(); i++){
            e_sum += nums[i];

            while(nums[i]){
                d_sum += nums[i]%10;
                nums[i] /= 10;
            }
        }
    return abs(e_sum - d_sum);
    }
};