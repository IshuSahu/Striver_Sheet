#include <bits/stdc++.h>

using namespace std;
bool isSubset1(int *arr1, int m, int *arr2, int n){
	if(m>n ) return false;
	
	for (int i = 0; i < m; i++)
	{
		bool present = false;
		for (int j = 0; j < n; j++)
		{
			if(arr1[i]==arr2[j]){
				present = true;
				break;
			}
		}
		if(present == false) return false;
	}
	return true;
}
//  optimal (nlogm);
#include <bits/stdc++.h>
using namespace std;

bool bSearch(int elem, int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        int mid= (start+end)/2;
        if(arr[mid]==elem)
            return true;
        else if(arr[mid]<elem)
            start = mid+1;
        else end= mid-1;
    }
    return false;
}

bool isSubset(int arr1[], int m, int arr2[], int n){
    
    sort(arr2,arr2+n); // library function to sort the array time complecity: O(N * log(N))
    
    if(m>n) return false;
    for(int i=0; i<m; i++){
        
	    bool present= bSearch(arr1[i],arr2,n);
	    if(present==false) return false;
	}
	return true;
}

int main()
{
	int arr1[]={1,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans= isSubset(arr1,m,arr2,n);
	
	if(ans==true)
	    cout<<"arr1[] is a subset of arr2[]";
	else cout<<"arr1[] is not a subset of arr2[]";
	
	return 0;
}

