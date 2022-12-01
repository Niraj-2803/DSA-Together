class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int ans = n*(n+1)/2;
        int sum = 0;
        for(int i=0;i<n-1;i++){
            sum = sum + array.at(i);
        }
        return ans - sum;
    }
};