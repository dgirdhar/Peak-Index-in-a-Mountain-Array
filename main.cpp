class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int startIndex = 0;
        int endIndex = A.size() - 1;
        int res = 0;
        
        while (startIndex <= endIndex) {
            int mid = startIndex + (endIndex - startIndex) / 2;
            
            if ((mid + 1) <= endIndex && A[mid] < A[mid + 1]) {
                startIndex = mid + 1;
            }
            else if ((mid - 1) >= startIndex && A[mid] < A[mid - 1]) {
                endIndex = mid - 1;
            }
            else {
                res = mid;
                break;
            }
        }
        
        return res;
    }
};
