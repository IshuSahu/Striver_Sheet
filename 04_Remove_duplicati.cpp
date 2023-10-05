// #include<bits/stdc++.h>
// /*
//     Function in Hashset STL:
//     set.find
//     set.insert()
//     set.erase()
//     set.count()
    
// */
// using namespace std;
// int removeDuplicates(int arr[], int n) {
//   set < int > set;
//   for (int i = 0; i < n; i++) {
//     set.insert(arr[i]);
//   }
//   int k = set.size();
//   int j = 0;
//   for (int x: set) {
//     arr[j++] = x;
//   }
//   return k;
// }
// int main() {
//   int arr[] = {1,1,2,2,2,3,3};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int k = removeDuplicates(arr, n);
//   cout << "The array after removing duplicate elements is " << endl;
//   for (int i = 0; i < k; i++) {
//     cout << arr[i] << " ";
//   }
// }


/*
Remove Duplicate form the Unsorted array: Time/Space Complexity : O(n)
*/
#include <bits/stdc++.h>
using namespace std ;

class removeDuplicate {

public:

    void duplicate(int arr[], int n) {

        map<int, int>mp ;

        for (int i = 0; i < n; i++) {
            if (mp.find(arr[i]) == mp.end()) {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
    }

} ;
int main() {

    int arr[] = {4, 3, 9, 2, 4, 1, 10,2, 89, 34} ;
    int n = 10  ;

    removeDuplicate d1  ;
    d1.duplicate(arr, n) ;

    return 0 ;
}