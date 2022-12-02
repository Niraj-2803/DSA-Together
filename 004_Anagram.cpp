class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    int isAnagram(string a, string b){
        int n = a.size();
        int m = b.size();
        if(n != m){
            return false;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a == b){
            return true;
        }
        return false;
    }
};