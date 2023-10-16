// #include <bits/stdc++.h>

// using namespace std;
// int CheckRepeatFrequency(string s){
//     int frequency[26] = {0}  ;

//     for (int i = 0; i < s.length(); i++)
//     {
//         frequency[s[i]-'a']++;
//     }
//     int maxFrequency=0;
//     char ch;
//     for (int i = 0; i < 26; i++)
//     {
//         if(frequency[i]>maxFrequency){
//             maxFrequency = frequency[i];
//             ch='a'+i;
//         }
//     }
//     cout<<ch<<endl;
//     return maxFrequency;
// }
// void largestWord(string str){
//     str+=' ';
//     vector<string> v;
//         string s="";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if(str[i]!=' '){
//             s+=str[i];
//         }else{
//             v.push_back(s);
//             s="";
//         }
//     }
//     int maxCount=INT_MIN;
//     string ans="";
//     for (int  i = 0; i < v.size(); i++)
//     {
//         int count = CheckRepeatFrequency(v[i]);
//         if(count>maxCount){
//             ans = v[i];
//         }
//     }
//     cout<<ans;

// }

// int main()
// {
//     string str = "ashu janakram sahu";
//     largestWord(str);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void HighestRepeatedLetters(string &str) {
        int len = str.length() ;

        int maximumword = 0 ;

        int curr_maximumword = 0  ;

        string result = ""  ;


        for (int left = 0; left < len;) {

            int right = left + 1;
            while (str[right] != ' ' && right < len) {
                right++ ;
            }

            int frequency[26] = {0}  ;
            curr_maximumword = 0  ;

            for (int index = left ; index < right ; index++) {
                frequency[str[index] - 'a']++  ;
            }
            for (int index = 0 ; index < 26 ; index++) {
                if (frequency[index] > 1) {
                    curr_maximumword ++  ;
                }
            }


            if (curr_maximumword > maximumword) {
                maximumword = curr_maximumword ;
                result = ""  ;
                for (int j = left ; j < right ; j++)
                    result += str[j] ;

            }

            left = right + 1  ;
        }

        if (result.empty()) {
            cout << "-1";
        }
        else {

            cout << "Word with highest number of repeated letters : " ;
            cout << result << "\n"  ;
        }
    }
};
int main() {

    string str = "abcdefg google mirosoft"  ;
    Solution obj ;
    obj.HighestRepeatedLetters(str)  ;

    return 0 ;
}