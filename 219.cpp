#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    //设置set保存的值始终保持在k,每次来了数之后去set中查找，能找到说明有K以内的重复。
    //没有找到则放set中，如果set元素个数到k+1，则释放左边界的下标为i-k的元素
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> record;
        for(int i =0;i<nums.size();i++){
            if(record.find(nums[i]) != record.end())
            {
                return true;
            }
            record.insert(nums[i]);
            if(record.size() == k+1)
            {
                record.erase(nums[i-k]);
            }
        }
        return false;
    }
};