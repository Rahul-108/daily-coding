Question: Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
Link: https://leetcode.com/problems/pascals-triangle-ii
class Solution {
public:
    void calculateRow(vector<vector<int>>&triangle, int curInd, int rowIndex){
        if(curInd == rowIndex)
        return;

        vector<int>temp;
        temp.push_back(1);

        for(int i=1; i<=curInd; i++){
            temp.push_back(triangle[curInd][i-1] + triangle[curInd][i]);
        }

        temp.push_back(1);

        triangle.push_back(temp);

        calculateRow(triangle, curInd+1, rowIndex);
    }

    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0)
        return {1};

        if(rowIndex == 1)
        return {1, 1};

        vector<vector<int>>triangle;
        triangle.push_back({1});
        triangle.push_back({1,1});

        calculateRow(triangle, 1, rowIndex);

        vector<int>ans = triangle[rowIndex];

        return ans;
    }
};