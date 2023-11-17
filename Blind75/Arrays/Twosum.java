
/*
 Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
Result: YES (for 1st variant)
       [1, 3] (for 2nd variant)
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.
 */
import java.util.*;

class Twosum {

    public static int[] twoSum(int n, int arr[], int target) {
        int ans[] = new int[2];
        ans[0] = ans[1] = -1;
        HashMap<Integer, Integer> hm = new HashMap<>();
        for (int i = 0; i < n; i++) {
            int num = arr[i];
            int moreneed = target - num;
            if (hm.containsKey(moreneed)) {
                ans[0] = hm.get(moreneed);
                ans[1] = i;
                return ans;
            }
            hm.put(arr[i], i);
        }
        return ans;
    }

    public static void main(String[] args) {
        int n = 5;
        int arr[] = { 2, 6, 5, 8, 11 };
        int target = 14;
        int ans[] = twoSum(n, arr, target);

        System.out.println("Answer is: [" + arr[0] + ", " + arr[1] + "]");
    }
}

// TC ==O(N)
// SC ==O(N)
