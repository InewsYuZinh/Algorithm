//  two sum
#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    static vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i < nums.size(); i++)
        for(int j=i+1; j < nums.size(); j++)
        if(nums[i] + nums[j] == target)
        return{i,j};
        return{};
    }
};
int main(){
    int target;
    vector<int> nums;
    int num;
    
    // cout << "Enter the target value: ";
    cin >> target;
    // cout << "Enter the numbers (enter -1 to stop): ";
    do
    {
        cin >> num;
        nums.push_back(num);
    } while (num > -1);
    
    // Find two numbers that add up to the target
    vector<int> result = Solution::twoSum(nums, target);
    
    // Print the result
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    return 0;
}