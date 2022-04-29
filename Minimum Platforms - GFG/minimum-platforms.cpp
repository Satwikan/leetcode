// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    struct rail {
        int start;
        int end;
    };
    bool static mySort(rail a, rail b) {
        return a.end < b.end;
    }
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
     int findPlatform(int arr[], int dep[], int n)
   {
    sort(arr,arr+n);
    sort(dep,dep+n);
   int platfrom=1;
   int j=0;
   int ans=1;
   int i=1;
   //for(int i=1;i<n;i++)
   while(i<n&&j<n)
   {
       if(arr[i]<=dep[j])
       {
           platfrom++;
           ans=max(ans,platfrom);
           i++;
       }
       else
       {
           platfrom--;
           j++;
       }}
       return ans;
   }

};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends