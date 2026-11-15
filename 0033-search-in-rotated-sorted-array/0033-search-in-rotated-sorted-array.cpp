
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        if (n == 0) return -1;

        int lo = 0;
        int hi = n - 1;
        int pivot = -1;

        // Case 1: Array is already sorted
        if (nums[lo] <= nums[hi]) {
            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;

                if (nums[mid] == target) return mid;
                else if (nums[mid] < target) lo = mid + 1;
                else hi = mid - 1;
            }
            return -1;
        }

        // Case 2: Find pivot (largest element)
        lo = 0;
        hi = n - 1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (mid < n - 1 && nums[mid] > nums[mid + 1]) {
                pivot = mid;
                break;
            }

            else if (nums[mid] >= nums[lo]) {
                lo = mid + 1;
            }

            else {
                hi = mid - 1;
            }
        }

        // Left sorted half
        int lol = 0;
        int hil = pivot;

        while (lol <= hil) {
            int midl = lol + (hil - lol) / 2;

            if (nums[midl] == target) return midl;
            else if (nums[midl] < target) lol = midl + 1;
            else hil = midl - 1;
        }

        // Right sorted half
        int lor = pivot + 1;
        int hir = n - 1;

        while (lor <= hir) {
            int midr = lor + (hir - lor) / 2;

            if (nums[midr] == target) return midr;
            else if (nums[midr] < target) lor = midr + 1;
            else hir = midr - 1;
        }

        return -1;
    }
};
