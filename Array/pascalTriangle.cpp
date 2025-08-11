#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows);

        for (int i = 0; i < numRows; i++) {
            arr[i].assign(i + 1, 1);
        }

        if (numRows > 2) {
            for (int i = 2; i < numRows; i++) {
                for (int j = 1; j < i; j++) {
                    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
                }
            }
        }
        return arr;
    }
};