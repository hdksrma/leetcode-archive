class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int red=0, white=0, blue=0;
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){red++;}
            else if(nums[i]==1){white++;}
            else {blue++;}
        }

        while(red){
            nums[count] = 0;
            red--;
            count++;
        }

        while(white){
            nums[count] = 1;
            white--;
            count++;
        }

        while(blue){
            nums[count] = 2;
            blue--;
            count++;
        }

    }
};