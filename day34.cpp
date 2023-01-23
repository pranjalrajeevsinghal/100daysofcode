//Qlink-> https://leetcode.com/problems/sort-the-students-by-their-kth-score/description/
//Code-

int k1;
bool compn(vector <int> &a, vector <int> &b)
{
    return (a[k1]>b[k1]);
}

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        k1 = k;
        sort(score.begin(),score.end(),compn);
        return score;
    }
};
