#include <bits/stdc++.h> 
using namespace std; 
       double average(vector<int>& salary) {
        int n=salary.size();
        int mn=INT_MAX,mx=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+salary[i];
            mn=min(mn,salary[i]);
            mx=max(mx,salary[i]);
        }
        double ans=(sum-mn-mx)/((n-2)*1.0);
        if(n>2)
            return ans;
        else 
            return 0;
    }
int main() 
{ 
 vector<int> arr = {8000,9000,2000,3000,6000,1000}; 
 cout<<average(arr)<<endl; 
}