class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);

    int n = nums.size();

    // store in pairs
    vector<pair<int,int>> arr;

    for(int i=0; i<n; i++){
        arr.push_back({nums[i], i});
    }

    // sort as per the value
    sort(arr.begin(), arr.end());

    int start = 0, end = n - 1;
    int sum = 0;

    while (end > start)
    {

        sum = arr[start].first + arr[end].first;

        if (sum == target)
        {
            return {arr[start].second,arr[end].second};
            break;

        }
        else if (sum > target)
        {
            end--;
        }
        else if (sum < target)
        {
            start++;
        }
    }

    return {};
    }
};