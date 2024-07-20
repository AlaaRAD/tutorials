#include <vector>
#include <iostream>
#include <unordered_map>


class Solution {

    public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        std::vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }

        return result;
    }

    // another solution with unordered map
    std::vector<int> twoSum2(std::vector<int>& nums, int target) {
        
        std::unordered_map<int, int> map;
        std::vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                result.push_back(map[complement]);
                result.push_back(i);
                return result;
            }
            map[nums[i]] = i;
        }



};

int main() {

    Solution solution;

    std::vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    std::vector<int> result = solution.twoSum(nums, target);

    for (auto i : result) {
        std::cout <<  i << std::endl;
    }

    return 0;
}