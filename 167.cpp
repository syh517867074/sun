#include <iostream>
#include <caccert>

//对撞指针
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0,r = numbers.size() - 1;
        while( l < r ){
            if (numbers[i] + numbers[r] == target){
                int res[2] = {l+1, r+1}; //使用int数组记录实际位置，下标从0开始所以加1
                return vector<int>{res, res + 2}; //注意此处数组转vertor是把数组起始地址和结束地址传进来
            }
            else if(numbers[i] + numbers[r] > target){
                r--;
            }
            else
            {
                l++;
            }
            
        }

        throw invalid_argument("the input has no solution");
    }
};