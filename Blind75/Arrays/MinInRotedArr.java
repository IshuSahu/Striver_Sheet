 class MinInRotedArr {

    public static int findMin(int arr[]){
        int low = 0, high = arr.length - 1;
        int ans = Integer.MAX_VALUE;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[low] <= arr[high]) { 
                ans = Math.min(ans, arr[low]);
                break;
            }
           
            if (arr[low] <= arr[mid]) { // Check for sorted! 4 < 7 ==> true
                ans = Math.min(ans, arr[low]);  // take out the minimum and Go to the next half
                low = mid + 1;

            } else { 
                ans = Math.min(ans, arr[mid]); // take out the minimum and Go to the next half
                high = mid - 1;
            }
        }
        return ans; 
    }
    public static void main(String[] args) {
        int[] arr = {4, 5, 6, 7, 0, 1, 2, 3};
        int ans = findMin(arr);
        System.out.println("The minimum element is: " + ans );
    }
}
