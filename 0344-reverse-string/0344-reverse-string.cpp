class Solution {
public:
    void reverseString(vector<char>& str) {
        int e=str.size()-1;
        int s=0;
        while(s<e){
            swap(str[s++],str[e--]);
        }
    }       
};