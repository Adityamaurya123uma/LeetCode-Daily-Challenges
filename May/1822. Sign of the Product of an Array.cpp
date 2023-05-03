class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        // sort(nums.begin(),nums.end());
        int sign = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                sign++;
            }
            if (nums[i] == 0)
            {
                return 0;
            }
        }
        if (sign % 2 == 0)
        {
            return 1;
        }
        return -1;
    }
};