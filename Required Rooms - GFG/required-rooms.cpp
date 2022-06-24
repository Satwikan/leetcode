// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

class Solution{
public:
    int rooms(int N, int M){
        int x = gcd(N, M);
        return N/x + M/x;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        
        Solution ob;
        cout<<ob.rooms(N, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends