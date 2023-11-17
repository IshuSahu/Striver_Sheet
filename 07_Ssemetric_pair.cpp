/*
Example 1:
Input: (1,2),(2,1),(3,4),(4,5),(5,4)
Output: (2,1) (5,4)
Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    unordered_map<int, int> mp;
    cout << "The Symmetric Pairs are: " << endl;
    for (int i = 0; i < n; i++)
    {
        int first = arr[i][0];
        int second = arr[i][1];
        /*mp.find(second) is used to search for the key second in the map mp. It returns an iterator pointing to the element with the given key if it exists in the map or mp.end() if it does not exist.*/
        // mp[second] == first checks if the value associated with the key second in the map mp is equal to first. This is checking whether the pair (first, second) exists in the map. If it does, this condition evaluates to true.
        // if {second,first} existed previously,print them.
        if (mp.find(second) != mp.end() && mp[second] == first)
        {
            cout << "(" << first << " " << second << ")"<< " ";
        }
        // else store them in the map
        else
        {
            mp[first] = second;
        }
    }
}