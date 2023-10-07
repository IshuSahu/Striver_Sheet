// #include <iostream>
// #include <algorithm>
// using namespace std;
// void Printfrequency(string str)
// {
//     sort(str.begin(), str.end());
//     char ch = str[0];
//     int count = 1;
//     for (int i = 1; i < str.length(); i++)
//     {
//         if (str[i] == ch)
//             count++;
//         else
//         {
//             cout << ch << count << " ";
//             count = 1;
//             ch = str[i];
//         }
//     }
//     cout << ch << count << " ";
// }

// int main()
// {
//     string str = "takeuforward";
//     Printfrequency(str);
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// void Printfrequency(string str)
// {
//     sort(str.begin(), str.end());
//     char ch = str[0];
//     int count = 1;
//     for (int i = 1; i < str.length(); i++)
//     {
//         if (str[i] == ch)
//             count++;
//         else
//         {
//             if (count > 1)
//             {
//                 cout << ch << "-->" << count << endl;
//             }
//             count = 1;
//             ch = str[i];
//         }
//     }
//     cout << ch << "-->" << count << endl;
//     ;
// }

// int main()
// {
//     string str = "sinstriiintng";
//     Printfrequency(str);
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "sinstriiintng";

    int counts[26] = {
        0};

    for (int i = 0; i < str.length(); i++)
        counts[str[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        if (counts[i] > 1)
            cout << (char)(i + 'a') << " - " << counts[i] << "\n";

    return 0;
}