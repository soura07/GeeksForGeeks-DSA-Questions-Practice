class Solution
{
    public:
    bool isRotated(string str1, string str2)
    {
        string anticlockwise = str1.substr(2, str1.length()) + str1.substr(0, 2);
        string clockwise =  str1.substr(str1.length()-2, str1.length()) + str1.substr(0, str1.length()-2);
        if(anticlockwise == str2 || clockwise == str2){
            return true;
        }
        return false;
    }

};
