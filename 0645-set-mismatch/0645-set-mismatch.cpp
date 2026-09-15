class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        unordered_map<int, int> m;
        vector<int> ans(2);

        for(int i=0; i<nums.size(); i++){

            m[nums[i]]++;

            if(m[nums[i]] == 2){
                ans[0] = nums[i]; 
            }
            
        }

        //misssing number
        for(int i = 1; i <= nums.size(); i++) {
            if(m[i] == 0) {
                ans[1] = i;
            }
        }

        return ans;
    }
};