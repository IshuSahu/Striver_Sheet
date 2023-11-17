import java.util.*;

public class Search_InRotedAr {
    public static int search(ArrayList<Integer> arr, int n, int k) {
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if(arr.get(mid)==k){
                return mid;
            }
            // if left part is sorted 
            if(arr.get(low)<= arr.get(mid)){
                if(arr.get(low)<= k &&  k<=arr.get(mid)){
                    high = mid-1;
                }else{
                    low = mid +1;
                }
            }
            // if right part is sorted
            else{

                if(arr.get(mid)<=k && k<=arr.get(high)){
                    low = mid +1;
                }else{
                    high= mid-1;
                }
            }

        }
        return -1;
    }
    public static int search1(int[] arr, int n, int k) {
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if(arr[mid]==k){
                return mid;
            }
            // if left part is sorted 
            if(arr[low]<= arr[mid]){
                if(arr[low]<= k &&  k<=arr[mid]){
                    high = mid-1;
                }else{
                    low = mid +1;
                }
            }
            // if right part is sorted
            else{

                if(arr[mid]<=k && k<=arr[high]){
                    low = mid +1;
                }else{
                    high= mid-1;
                }
            }

        }
        return -1;
    }

    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(7, 8, 9, 1, 2, 3, 4, 5, 6));
        int arr1[] ={7, 8, 9, 1, 2, 3, 4, 5, 6};
        int n = 9, k = 6;
        // int ans = search(arr, n, k);
        int ans = search1(arr1, n, k);
        if (ans == -1)
            System.out.println("Target is not present.");
        else
            System.out.println("The index is: " + ans);
    }
}
