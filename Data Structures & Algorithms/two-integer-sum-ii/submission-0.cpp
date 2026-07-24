class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right=numbers.size()-1;
        int left=0;
        vector<int> ans(2);
        while(left<right)
        {
            if(numbers[right]+numbers[left]==target)
            {
                ans[0]=left+1;
                ans[1]=right+1;
                return ans;
            }
            else if(numbers[right]+numbers[left]>target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return {};
    }
};
