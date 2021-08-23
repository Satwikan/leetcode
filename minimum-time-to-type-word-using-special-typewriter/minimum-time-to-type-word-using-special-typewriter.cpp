class Solution {
public:
    int mod(char a, char b) {
        int diff = a - b;
        // cout << a << b<< " ";
        if (diff >= 13) {
            cout << "1a" << diff << diff%13;
            return (diff - 26)*-1;
        }
        if (diff < 0){
            // cout << "2a";
            return mod(b, a);
        }
        // cout << "3a";
        return diff;
    }
    int minTimeToType(string word) {
        int time = 0;
        char pointer = 'a';
        for (char c: word){
            time += mod(pointer, c) + 1;
            pointer = c;
            cout << time << " " << pointer << endl;
        }
        return time;
    }
};