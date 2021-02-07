class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> tmp;
        for(int i=0;i<nums.size();i++)
        {
            int com = target - nums[i];
            if(tmp.find(com) != tmp.end())
            {
                int res[2]={i,tmp[com]};
                return vector<int>(res,res+2);
            }
            tmp[nums[i]] = i;
        }
        //throw invalid_argument("the input has no sulotion");
        return vector<int>(0,0);
    }
};