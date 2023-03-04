class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0){
            return 0;
        }
        else if(nums.size() == 1){
            return 1;
        }

        sort(nums.begin(), nums.end());
        int count = 0;
        int out = 0;

        for(int i=0; i<nums.size() - 1; i++){
            if(nums[i+1] == (nums[i] + 1)){
                count++;
                out = max(count, out);
            }
            else if(nums[i+1] == nums[i]){
                count = count + 0;
            }
            else{
                count = 0;
            }
        }
        return out+1;
    }
};