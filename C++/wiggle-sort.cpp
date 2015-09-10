// Time:  O(n)
// Space: O(1)

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        if (nums.empty()) {
            return;
        }
        int pre = nums[0];
        bool inc = true;
        for (int i = 1; i < nums.size(); ++i) {
            if ((inc && pre <= nums[i]) ||
                (!inc && pre >= nums[i])) {
                nums[i - 1] = pre;
                pre = nums[i];
            } else {
                nums[i - 1] = nums[i];
            }
            inc = !inc;
        }
        nums.back() = pre;
    }
};