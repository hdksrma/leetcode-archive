class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int p = 0;
        int n = 1;
        vector<int> out(nums.size(), 0);

        for(int i=0; i<nums.size(); i++){
            
            if(nums[i] > 0){
                out[p] = nums[i];
                p = p+2;
            }

            else{
                out[n] = nums[i];
                n = n+2;
            }
        }

        return out;
    }
};