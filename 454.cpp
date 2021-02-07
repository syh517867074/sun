#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    //将C+D的各种组合的和放入map
    //双层循环A，B在map中查找相加为0的值，找到后就记录一次
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> record;
        for(int i=0;i<C.size();i++){
            for(int j=0;j<D.size();j++){
                record[C[i]+D[j]]++;
            }
        }
        int res =0;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                int tmp1 = 0-A[i]-B[j];
                if(record.find(0-A[i]-B[j]) != record.end()){
                    res+=record[0-A[i]-B[j]];
                }

            }
        }
        return res;

    }
};

int main()
{
    Solution tmp;
    vector<int> A={1,2};
    vector<int> B={-2,-1};
    vector<int> C={-1,2};
    vector<int> D={0,2};
    cout<<tmp.fourSumCount(A,  B,  C,  D) ;
    getchar();
    return 0;
}