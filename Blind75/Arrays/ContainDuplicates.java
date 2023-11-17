import java.util.HashMap;
import java.util.HashSet;

class ContainDuplicates {

    static boolean containsDuplicate(int arr[]){
        HashSet<Integer> hashSet = new HashSet<>();
        for(int i=0;i<arr.length;i++){
            hashSet.add(arr[i]);
        }
        if(arr.length > hashSet.size()){
            return true ;
        }

        return false;

        /* OR
         
        for(int i=0; i<nums.length;i++){
            if(hs.contains(nums[i])){
                return true;
            }else{
                hs.add(nums[i]);
            }
        }
        return false;
         */
    }
    public static void main(String[] args) {
        int nums[]= {1, 2, 3, 1};
	    
	    boolean res = containsDuplicate(nums);
	    
	    System.out.println(res);
    }    
}

