#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
/*整体思路：滑动窗口从0开始构建，循环条件是窗口左侧小于整个容器个数，每次先判断整个
    sum值小于预期就把窗口扩大，把右侧的值纳入有边界+1，如果sum值大于预期就把左侧边界
    收缩l右移。 如果sum值大于预期就取窗口内个数和记载的个数对比取出较小值。
*/
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l = 0,r = -1; //初始化时窗口内不包含元素。
        int sum = 0;    //开始窗口的的总值为0
        int res = nums.size() + 1; //窗口内元素个数设为容器大小+1表示无效
        while(l<nums.size())  //左窗口边界小于容器的元素数量
        {
            if(r+1 < nums.size() && sum < s) //判断r+1小于容器大小是因为sum<s紧接着要向右扩展
                sum += nums[++r];             //扩展后sum要把右边界新纳入的值算进来，所以先扩展再纳入
            else 
                sum -= nums[l++];             //左边界右移相当于左边收缩了窗口，将sum减去原来右边界值后右移
            
            if(sum >= s)            //符合条件时
                res = min(res, r-l+1);        //将记录的个数和窗口内的元素个数对比取较小值
        }

        if(res == nums.size() + 1)
            return 0;
        
        return res;
    }
};

int main()
{
    return 0;
}