class Solution {
public:
    int findMin(vector<int>& nums) {
        // for(int j=0 ; j<nums.size() ; j++){
        //     int lastElement = nums[nums.size()-1];
        //     for(int i = nums.size() - 1; i > 0; i--) nums[i] = nums[i - 1];
        //     nums[0]=lastElement;
        // }
        int minimum = *min_element(nums.begin(), nums.end());
        return minimum;
    }
};