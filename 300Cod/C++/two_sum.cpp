//  two sum
#include <cstddef>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    static vector<int> twoSum(vector<int>& nums, int target) {
        for(size_t i=0; i < nums.size(); i++)
            for(size_t j=i+1; j < nums.size(); j++)
                if(nums[i] + nums[j] == target)
                    return{static_cast<int>(i),static_cast<int>(j)};
        return{};
    }
};

int main(){
    int target;
    vector<int> nums;
    int num = 0;
    
    cout << "Enter the target value: ";
    cin >> target;
    cout << "Enter the numbers (enter -1 to stop): ";
    while (cin >> num && num != -1) {
        nums.push_back(num);
    }

    // Find two numbers that add up to the target
    vector<int> result = Solution::twoSum(nums, target);
    
    // Print the result
    if (result.empty()) {
    cout << "No solution\n";
    } else {
        cout << "[" << result[0] << "," << result[1] << "]\n";
    } 
    return 0;
}
