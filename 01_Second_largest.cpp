#include<bits/stdc++.h>

using namespace std;

void getElements(int arr[], int n){
    if(n<1){
        cout<<-1<<" "<<-1<<endl;
    }
    int small= INT_MAX,second_small=INT_MAX;
    int large = INT_MIN, second_large= INT_MIN;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        small = min(small,arr[i]);
        large = max(large,arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<second_small && arr[i]!=small){
            second_small = arr[i];
        }
        else if(arr[i]>second_large && arr[i]!=large){
            second_large= arr[i];
        }
    }
    cout<<second_small<<" "<<second_large<<endl;
}
void GetSwap(int *arr, int n,int k){
    int start = 0;
    int end = n-1;
    while (start <=end && k!=2)
    {
        swap(arr[start++],arr[end--]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<end;
    }
    
    
}
int main(){
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
// int k=2;
    // GetSwap(arr,n,k);
    return 0;

}