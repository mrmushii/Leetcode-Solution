class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int pivot = -1;
        for(int i = A.size()-2;i>=0;i--){
            if(A[i]<A[i+1]){
                pivot = i;
                break;
            }
        
        }
        if(pivot==-1){
            reverse(A.begin(), A.end());
            return;
        }
        for(int i = A.size()-1; i>pivot;i-- ){
            if(A[i]>A[pivot]){
                swap(A[pivot],A[i]);
                break;
            }
        }
        int a = pivot+1,b = A.size()-1;
        while(a<=b){
            swap(A[a++], A[b--]);
        }
    }
};