class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
     sort(nums.begin(), nums.end());

     int key =0;
     for(int i=0; i<nums.size(); i++){
         
         if(key!=nums[i]){return key;}
         key=key+1;
     }

    return key;  }
};