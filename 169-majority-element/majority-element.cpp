class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int x : nums) {
            hash[x]++;

            if(hash[x] > nums.size() / 2) {
                return x;
            }
        }
        return -1;
    }
};