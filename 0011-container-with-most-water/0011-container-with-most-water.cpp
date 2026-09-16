class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

    int st = 0;
    int end = n-1;

    int maxCap = 0;

    while (end > st)
    {
        maxCap = max(maxCap, ((min(height[st], height[end])) * (end - st)));
        if (height[st] <= height[end])
        { // st is small
            st++;
        }
        else
        {
            end--;
        }
    }
    return maxCap;
    }
};