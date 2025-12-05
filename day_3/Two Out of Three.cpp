class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    int count;
    vector<int> nums4;
    vector<int> result;
    for(int i=0;i<nums1.size();i++){
        count=0;
        for(int j=i+1;j<nums1.size();j++){
            if (nums1[i]==nums1[j]){
                count++;
            }
        }
        if(count==0){
            nums4.push_back(nums1[i]);
        }
    }
    for(int i=0;i<nums2.size();i++){
        count=0;
        for(int j=i+1;j<nums2.size();j++){
            if (nums2[i]==nums2[j]){
                count++;
            }
        }
        if(count==0){
            nums4.push_back(nums2[i]);
        }
    }
    for(int i=0;i<nums3.size();i++){
        count=0;
        for(int j=i+1;j<nums3.size();j++){
            if (nums3[i]==nums3[j]){
                count++;
            }
        }
        if(count==0){
            nums4.push_back(nums3[i]);
        }
    }
    for(int i=0;i<nums4.size();i++){
        count=0;
        for(int j=i+1;j<nums4.size();j++){
            if (nums4[i]==nums4[j]){
                count++;
            }
        }
        if (count > 0) {
                bool already = false;
                for (int k = 0; k < result.size(); k++) {
                    if (result[k] == nums4[i]) {
                        already = true;
                        break;
                    }
                }
                if (!already) {
                    result.push_back(nums4[i]);
                }
            }
    }
    return result;     
    }
};
