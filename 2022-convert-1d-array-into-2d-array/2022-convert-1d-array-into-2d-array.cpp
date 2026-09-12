class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int num = original.size();

        vector<vector<int>> vec(m, vector<int>(n));
        int count = 0;
        if(num>(m*n) || (num<(m*n))){
            vector<vector<int>> v;
            return v;
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(count<num){
                    vec[i][j] = original[count++];

                }
            }
        }

        return vec;


    }
};