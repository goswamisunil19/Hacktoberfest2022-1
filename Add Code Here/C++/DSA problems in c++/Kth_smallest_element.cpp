
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        // Method 1: Using sorting tc - O(nlogn)
        
        sort(arr+l,arr+r+1);
        return arr[k-1];
        
        
    }
};
