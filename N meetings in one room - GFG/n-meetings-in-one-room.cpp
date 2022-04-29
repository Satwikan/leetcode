// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    struct meeting {
        int start;
        int end;
    };
    
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    bool static sortByEnd (struct meeting m1, struct meeting m2){
        return (m1.end < m2.end);
    }
    int maxMeetings(int start[], int end[], int n)
    {
        struct meeting meet[n];
        for (int i = 0; i < n; i++) {
            meet[i].start = start[i];meet[i].end = end[i];
        }
        
        sort(meet, meet+n, sortByEnd);
        int limit = meet[0].end;
        int mm = 1;
        for (int i = 1; i < n; i++) {
            if (meet[i].start > limit) {
                mm++;
                limit = meet[i].end;
            }
        }
        return mm;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends