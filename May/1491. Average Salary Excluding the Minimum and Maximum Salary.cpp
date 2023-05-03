class Solution
{
public:
    double average(vector<int> &salary)
    {
        int n = salary.size();
        double total = accumulate(salary.begin(), salary.end(), 0);
        sort(salary.begin(), salary.end());
        total = total - salary[0] - salary[n - 1];
        double avg = total / (n - 2);
        return avg;
    }
};