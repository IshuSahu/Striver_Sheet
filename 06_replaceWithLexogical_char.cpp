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
        char a = (char)str[i] + 1;
        if(a > 'z'){
            ans += a -26;
        }
        else{
            ans +=a;
        }
    }
    
    
    return ans;
}
int main()
{

    // Input string
    string str1 = "abcdxyz";
    
    cout << solve(str1) << "\n";
    return 0;
}
