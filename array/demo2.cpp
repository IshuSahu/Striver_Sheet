#include <bits/stdc++.h>
using namespace std;

int findEquilibriumIdx(int *arr, int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int rightSum = totalSum;
    for (int i = 0; i < n; i++)
    {
        rightSum -= arr[i];
        if (leftSum == rightSum)
        {
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}

void wordWithMaxLetter(string &str)
{
    int maxOccurringChar = 0;
    int curr_maximumchar = 0;
    int len = str.length();
    string result = "";

    for (int left = 0; left < len;)
    {
        int right = left + 1;

        while (str[right] != ' ' && right < len)
        {
            right++;
        }
        curr_maximumchar = 0;

        int frequency[26] = {0};
        for (int i = left; i < right; i++)
        {
            frequency[str[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (frequency[i] > 1)
            {
                curr_maximumchar++;
            }
        }

        if (curr_maximumchar > maxOccurringChar)
        {
            maxOccurringChar = curr_maximumchar;
            result = "";
            for (int i = left; i < right; i++)
            {
                result += str[i];
            }
        }
        left = right + 1;
    }

    if (result.empty())
    {
        cout << "-1";
    }
    else
    {

        cout << "Word with highest number of repeated letters : ";
        cout << result << "\n";
    }
}
int main()
{
    string str = "ISHU";


    // wordWithMaxLetter(str);
    int len =str.length();
    string result = "";

    for (int i = 0; i < len; i++)

    {
       int ascii = (int)str[i];
       if(ascii>=65 && ascii<=90){
            str[i] = char(ascii +32);
       }else{
            str[i] = char(ascii -32);
       }
    }

    // cout<<char(122)<<endl;
    cout<<str<<endl;
    
    return 0;
}