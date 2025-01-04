#include <iostream>
using namespace std;
string Remove_duplicate(string str)
{
    string ans = "";
    // int j;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     for (j = 0; j < i; j++)
    //     {
    //         if (str[i] == str[j])
    //         {
    //             break;
    //         }
    //     }
    //     if (i == j)
    //     { // Index same
    //         ans += str[i];
    //     }
    // }


    /* O(n) */
    char ch = str[0];
    for (int i = 1; i <= str.length(); i++)
    {
        if (str[i] != ch)
        {
            ans += ch;
        }
        ch = str[i];
    }
    return ans;
}
string LowerToUpper(string s)
{
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            ans += (char)(s[i] - 32);
            i++;
        }
        else
        {
            ans += s[i];
        }
    }
    return ans;
}

int main()
{
    string str = "Hello Hello There";
    
    cout << "After Remove duplicate: " << Remove_duplicate(str) << endl;
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    cout<<str;
}