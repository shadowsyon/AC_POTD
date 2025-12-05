class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max,min,gcd=1;
        max=nums[0];
        min=nums[0];
        for(int i=1;i<nums.size();i++){
            if (nums[i]>max){
                max=nums[i];
            }
            if (nums[i]<min){
                min=nums[i];
            }
        }
        for(int i=1;i<=min;i++){
            if(min%i==0 && max%i==0){
                gcd=i;
            }
        }
        return gcd;    
    }
};
