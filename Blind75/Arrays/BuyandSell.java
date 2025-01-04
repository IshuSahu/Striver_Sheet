import java.util.*;

class BuyandSell {
    public static int maxProfit(int arr[]){
        int Profit=0;
        int mini = arr[0];
        for(int i=0;i<arr.length;i++){
            int currprofit = arr[i] - mini;
            Profit = Math.max(Profit,currprofit);
            mini = Math.min(mini,arr[i]);
        }
        return Profit;
    }
    
    public static void main(String[] args) {
        int arr[] ={7,1,5,3,6,4};
        System.out.println("Maximum profit will be: "+ maxProfit(arr));
    }    
}






















