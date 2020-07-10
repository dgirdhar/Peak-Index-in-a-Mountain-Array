class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int previousItemIndex = 0;
        
        for (int i = 1; i < A.size(); ++i) {
            if (A[i] < A[previousItemIndex]) {
                break;
            }
            else {
                previousItemIndex = i;
            }
        }
        
        return previousItemIndex;
    }
};
