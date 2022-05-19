class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> v;
        for(int i=0;i<nums.size();i++){
            int ele = nums[i];
            if(ele!=0)
            v.push_back(ele);
        }
         for(int i=0;i<nums.size();i++){
            int ele = nums[i];
            if(ele==0)
            v.push_back(ele);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }
    }
};