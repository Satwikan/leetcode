// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string arrangeString(string str)
    {
        sort(str.begin(), str.end());
        int i = 0;
        int count = 0;
        while (str[i] < 'A'){
            count += str[i] - '0';
            str.erase(i, 1);
        }
        str = str + to_string(count);
        return str;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends