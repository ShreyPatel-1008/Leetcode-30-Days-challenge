//540. Single Element in a Sorted Array
// time complexity: O(log n)
// space complexity: O(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();

        if (n == 1) return A[0];

        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // side cases
            if (mid == 0 && A[0] != A[1]) return A[mid];
            if (mid == n - 1 && A[n - 1] != A[n - 2]) return A[mid];

            // fixed chained comparison
            if (A[mid] != A[mid - 1] && A[mid] != A[mid + 1]) 
                return A[mid];

            if (mid % 2 == 0) { // even index
                if (A[mid] == A[mid + 1]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            } else { // odd index
                if (A[mid] == A[mid - 1]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
