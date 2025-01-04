#include <bits/stdc++.h>

using namespace std;
void countFreq(int *arr, int n)
{
    unordered_map<int, int> freqMap;
    for(int i=0;i<n;i++){
        freqMap[arr[i]]++;
    }

    for(const auto &pair: freqMap ){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    
}
int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}