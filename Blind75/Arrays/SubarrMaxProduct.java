public class SubarrMaxProduct {
    public static long maxSubarrayProduct(int arr[],int n){
        long Result = arr[0];
        for (int i = 0; i < arr.length; i++) {
            int p = arr[i];

            for (int j = i+1; j < arr.length; j++) {
                Result = Math.max(p, Result);
                p*=arr[j];
            }
            Result = Math.max(Result, p); 
            
        }
        return Result;
    }
    public static void main(String[] args) {
        int[] arr = {1,2,-3,0,-4,-5};
        int n = arr.length;
        long maxSum = maxSubarrayProduct(arr, n);
        System.out.println("The maximum subarray sum is: " + maxSum);
    }
}
