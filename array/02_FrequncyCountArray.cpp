// #include <bits/stdc++.h>
// using namespace std;
 
// void countFreq(int arr[], int n)
// {
//     vector<bool> visited (n,false);

//     for (int i = 0; i < n; i++)
//     {
//         if (visited[i] == true)
//             continue;
        
//         int count = 1;
//         for (int j = i+1; j <n; j++)
//         {
//             if(arr[i]==arr[j]){
//                 count++;
//                 visited[j]=true;
//             }
//         }
//         cout<<arr[i]<<" Count: "<<count<<endl;
        
//     }
    
// }
 
// int main()
// {
//     int arr[] = {10,5,10,15,10,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     countFreq(arr, n);
//     return 0;
// }

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> freqMap;    
    
    for (int i = 0; i < n; i++)
    {
        freqMap[arr[i]]++;
    }

    for (const auto &pair : freqMap)
    {
        cout << pair.first << " Count: " << pair.second << endl;
    }
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
