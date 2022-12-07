vector<int> find(int arr[], int n , int x )
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    int ans = 0;
    int test = 0;
    while(start <= end){
        if(arr[mid] == x){
            test = 1;
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > x){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    int s = 0;
    int e = n - 1;
    int m = s + (e-s)/2;
    int answer = 0;
    while(s <= e){
        if(arr[m] == x){
            answer = m;
            test = 1;
            s = m + 1;
        }
        else if(arr[m] > x){
            e = m - 1;
        }
        else{
            s = m + 1;
        }
        m = s + (e-s)/2;
    }
    if(test == 1){
        return {ans, answer};
    }
    else{
        return {-1, -1};
    }
}