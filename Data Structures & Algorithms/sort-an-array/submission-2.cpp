class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       heapSort(nums);
       return nums;
    }
private:
    void heapify(vector<int>& arr, int n, int i){
        int l = (i << 1) + 1;
        int r = (i << 1) + 2;
        int largest = i;

        if(l < n && arr[l] > arr[largest]){
            largest = l;
        }
        if(r < n && arr[r] > arr[largest]){
            largest = r;
        }
        if(largest != i){
            swap(arr[i], arr[largest]);
            heapify(arr, n , largest);
        }
    }
    void heapSort(vector<int>& arr){
        int n = arr.size();
        for(int i = n/2 -1; i >= 0; i--){
            heapify(arr, n, i);
        }
        swap(arr[0], arr[n-1]);

        for(int i = n-1; i > 0; i--) {
            heapify(arr, i, 0);
            swap(arr[0], arr[i-1]);

        }
    }
};
 // heap sort
 // 有錯誤, 找到第一個最大值交換後, 後續都是往下調整
