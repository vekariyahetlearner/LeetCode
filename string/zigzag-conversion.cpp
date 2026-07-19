class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;

        string result;
        int cycle = 2 * numRows - 2;

        for (int row = 0; row < numRows; row++) {
            for (int j = 0; j + row < s.size(); j += cycle) {
                result += s[j + row];
                if (row > 0 && row < numRows - 1 && j + cycle - row < s.size())
                    result += s[j + cycle - row];
            }
        }
        return result;
    }
};