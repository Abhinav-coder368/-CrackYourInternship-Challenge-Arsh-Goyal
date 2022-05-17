class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int i;
         set<int> ::iterator itr;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int ele   = nums[i];
            s.insert(ele);
        }
         nums.clear();
        for(auto i=s.begin();i!=s.end();i++)
        {
            nums.push_back(*i);
        }

        return nums.size();
    }
};