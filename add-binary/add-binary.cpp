class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        int carry = 0 ;
        string res ;
        int i= 0;
        while(i <a.length() || i<b.length()){
            
            int x = i <a.length() ? a[i] -'0' :0;
            int y = i <b.length() ? b[i] -'0' :0;
            
            int p = x+ y +carry;
            carry = p/2;
            res += to_string(p%2);
            i++;
        }
        if(carry>0){
            res+=to_string(carry);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};