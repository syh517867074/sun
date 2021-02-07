#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        
        int res=0;
        //循环访问每个元素
        for(int i=0; i<points.size();i++){
            unordered_map<int ,int> record;
            //内层循环再次访问每个元素
            for(int j=0;j<points.size();j++)
            {
                //取两个不同元素操作
                if(j!=i)
                {
                    //计算两个不同元素的距离
                    int tmp=(points[i][0]-points[j][0])*(points[i][0]-points[j][0])+(points[i][1]-points[j][1])*(points[i][1]-points[j][1]);
                    cout<<"points[i][0]="<<points[i][0]<<",points[i][1]="<<points[i][1]<<",points[j][0]="<<points[j][0]<<",points[j][1]="<<points[j][1]<<endl;
                    cout<<"i="<<i<<",j="<<j<<",tmp="<<tmp<<"=="<<endl;
                    //距离作为key，距离出现次数作为value保存到map
                    record[tmp]++;
                }
                
            }
            //遍历map，取出每一组的value通过计算value*(value-1)算出有多少与i距离相等的组合
            for(unordered_map<int ,int>::iterator iter= record.begin();iter!=record.end();iter++)
            {
                cout<<"iter->first="<<iter->first<<",iter->second"<<iter->second<<endl;
                res += (iter->second)*(iter->second-1);
            }
        }

        return res;

    }

};

int main()
{
    vector<vector<int>> points{{1,1},{2,2},{3,3}};
    Solution tmp;
    cout<<tmp.numberOfBoomerangs(points)<<endl;
    getchar();
    return 0;
}