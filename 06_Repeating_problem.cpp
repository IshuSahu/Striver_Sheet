// Find all repeating elements in an array
/*
Example 1:
Input: 
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
*/
#include<bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    
    cout<<"The repeating elements are: ";
    for(int i=0;i<arr.size();i++) {
        if(arr[i] == arr[i+1]) {
            cout<<arr[i]<<" ";
        }
    }
        
}
/*
Find all the non-repeating elements in an array
Input:
 Nums = [1,2,-1,1,3,1] 
Output:
 2,-1,3
*/
void findNonRepeatingElements(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    
    cout<<"\nThe Non-repeating elements are: ";
    for(int i=0;i<arr.size();i++) {
        if(arr[i] == arr[i+1]) {
            i++;   
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
        
}


int main() {
    vector<int> arr = {1,2,-1,1,3};
    findRepeatingElements(arr);
    findNonRepeatingElements(arr);
    return 0;
}
