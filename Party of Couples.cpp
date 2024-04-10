#Party of Couples

class Solution{
    public:
    int findSingle(int n, int arr[]){
        // code here
        int xorr = 0;
        for(int i=0;i<n;i++)
        xorr^=arr[i];
        return xorr;
    }
};
