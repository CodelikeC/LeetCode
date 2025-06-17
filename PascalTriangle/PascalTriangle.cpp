class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> prevRow;
        
        for (int i = 0; i < numRows; i++) {
            vector<int> currentRow(i + 1, 1);
            
            for (int j = 1; j < i; j++) {
                currentRow[j] = prevRow[j - 1] + prevRow[j];
            }
            
            result.push_back(currentRow);
            prevRow = currentRow;
        }
        
        return result;
    }
};

// Using recursion.. methods 
// // class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         if (numRows == 0) return {};
//         if (numRows == 1) return {{1}};
        
//         vector<vector<int>> prevRows = generate(numRows - 1);
//         vector<int> newRow(numRows, 1);
        
//         for (int i = 1; i < numRows - 1; i++) {
//             newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
//         }
        
//         prevRows.push_back(newRow);
//         return prevRows;
//     }
// };
