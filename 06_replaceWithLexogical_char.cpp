#include <bits/stdc++.h>
/*
Example 1:
Input: string str = “abcdxyz”
Output: bcdeyza
*/
using namespace std;
string solve(string str)
{
    string ans="";
    for (int i = 0; i < str.length(); i++)
    {
        ans +=(char)str[i] + 1;
    }
    
    
    return ans;
}
int main()
{

    // Input string
    string str1 = "Janakram";
    
    cout << solve(str1) << "\n";
    return 0;
}
