#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int search(int arr[], int N, int X)
    {
        for(int i=0;i<N;i++){
            if(arr[i] == X){
                return i;
            }
            
        }
        return -1;
        
    }
};
int main()
{
	Solution ob;
	int a[5]= {1,2,3,4,5};
	cout<<ob.search(a, 5, 4);
    	
	return 0;
}