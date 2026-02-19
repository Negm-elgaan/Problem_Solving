class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> NewVec;
        for (int i = 0 ; i < n ; i++)
        {
            NewVec.push_back(nums[i]);
            NewVec.push_back(nums[i + n]);
        }
        return NewVec;
    }
};