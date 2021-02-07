#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    //将非0元素放入辅助数组然后赋值回去
    void moveZeroes(vector<int>& nums) {
        vector<int> nonZeroElement;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i])
                nonZeroElement.push_back(nums[i]);
        for(int i = 0; i < nonZeroElement.size(); i++)
            nums[i] = nonZeroElement[i];
        for(int i = nonZeroElement.size();i < nums.size(); i++)
            nums[i] = 0;
    }
    void moveZeroes(vector<int>& nums,int n) {
        int k = 0; //nums中，[0...k]的元素均为非0元素

        // 遍历到第i个元素后，保证[0...1]中的所有非0元素
        //都按照顺序排列在[0...k]中
        for(int i = 0; i < nums.size(); i++)
            if(nums[i])
                nums[k++] = nums[i];
        for(int i = k; i<nums.size();i++)
            nums[i] = 0;
    }

    void moveZeroes(vector<int>& nums,int n,int x) {
        int k = 0;
        // 遍历到第i个元素后，保证[0...1]中的所有非0元素
        //都按照顺序排列在[0...k]中
        //同时，[k...i]为0
        for(int i = 0; i < nums.size(); i++)
            //优化当i!=k时说明k是0
            if(nums[i])
                if(i != k)
                    swap(nums[k++], nums[i]);
                else
                {
                    k++;
                }
                
    }
};

int main()
{
    int a[] = {0,1,0,3,0,2};
    vector<int> vec(a,a+sizeof(a)/sizeof(int));
    Solution().moveZeroes(vec,1,1);
    for( int i = 0; i < vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    return 0;
}