#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int result = nums[0];
    for(int i=0;i<nums.size()-1;i++) {
        int p = nums[i];
        for(int j=i+1;j<nums.size();j++) {
           result = max(result,p);
           p *= nums[j];
        } 
        result = max(result,p);//manages (n-1)th term 
    }
    return result;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums)<<endl;

    
    // vector<int> nums = {40,50,10,230,20};

    for (int i = 0; i < nums.size(); i++)
    {
        int count=0;
        set<int> s;
        for (int j = 0; j < nums.size(); j++)
        {
            if(nums[j]<nums[i]){
                s.insert(nums[j]);
            }
        }
        cout<<s.size()+1<<" "; 
    }
    
    return 0;
}
