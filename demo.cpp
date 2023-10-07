#include<bits/stdc++.h>
using namespace std;
void ReverseofWord(string str){
    vector<string> ans;
    string s="";
    str+=' ';
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]!=' '){
            s+=str[i];
        }else{
            ans.push_back(s);
            s="";
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<"After reversing words: "<<endl;
    for (int  i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}
int main()
{
    string s="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<s<<endl;
    ReverseofWord(s);
    
    
    return 0;
}