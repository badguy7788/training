/*
ZigZag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int numRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
*/
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows)
    {
        int cols;
        int pos;
        string temp;

        cols = (s.length() + 2*numRows - 2)/(2 * numRows - 2);
        cout<< "s.length() = "<< s.length()<< endl;
        cout<< "cols = "<< cols<< endl;
        for(int i = 0; i < numRows; ++i)
            for(int j = 0; j < cols; ++j)
            {
                pos = 2*(numRows - 1) * j;
//                temp += s.at(pos);
//                cout<< "pos - i = "<< pos - i<< endl;
//                cout<< "pos = "<< pos<< endl;
//                cout<< "i = "<< i<< endl;

                if(pos - i >= 0 && pos - i < s.length() )
                    temp += s.at(pos - i);
                if(pos + i > 0 && pos + i < s.length() && i != 0 && pos + i != pos - i && i != numRows - 1)
                    temp += s.at(pos + i);
            }

        return temp;


    }
};

int main()
{
//    string str("PAYPALISHIRINGOPQS");
    string str("");
    Solution s;
    cout<< "result: "<< s.convert(str, 1)<< endl;
    return 0;
}
