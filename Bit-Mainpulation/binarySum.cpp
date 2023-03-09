// Problem 67. Add Binary Bit Mainpulation 

//Given two binary strings a and b, return their sum as a binary string.


class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int i = a.size() -1;
        int j = b.size() -1;
        int c = 0;
        while(i >= 0 && j >= 0) {
            if(a[i] == '0' && b[j] == '0') {
                if(c == 0) {
                    s = '0'+ s;
                } else {
                    s = '1' + s;
                }
                c = 0;
            } 
            else if(a[i] == '1' && b[j] == '0') {
                if(c == 1) {
                    s = '0'+ s;
                    c = 1;
                } else {
                    s = '1' + s;
                }
            }
            else if(a[i] == '0' && b[j] == '1') {
                if(c == 1) {
                    s = '0'+ s;
                    c = 1;
                } else {
                    s = '1' + s;
                }
            }
            else if(a[i] == '1' && b[j] == '1') {
                if(c == 1) {
                    s = '1'+ s;
                    c = 1;
                } else {
                    s = '0' + s;
                    c = 1;
                }
            }
            i--, j--;
        }
        while(i >= 0) {
            if(c == 0 and a[i] == '1') {
                s = '1' + s;
            }
            else if(c == 1 && a[i] == '1') {
                s = '0' + s;
            }
            else if(c== 1 && a[i] == '0') {
                s = '1' + s;
                c=0;
            }
            else if(c == 0 && a[i] == '0') {
                s = '0' + s;
            }
            i--;
        }
        while(j >= 0) {
            if(c == 0 and b[j] == '1') {
                s = '1' + s;
            }
            else if(c == 1 && b[j] == '1') {
                s = '0' + s;
            }
            else if(c== 1 && b[j] == '0') {
                s = '1' + s;
                c=0;
            }
            else if(c == 0 && b[j] == '0') {
                s = '0' + s;
            }
            j--;
        }

        if(c == 1) 
            s = '1' + s;

        return s;
    }
};