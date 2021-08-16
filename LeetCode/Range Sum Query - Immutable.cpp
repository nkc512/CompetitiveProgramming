class NumArray {
public:
    vector<int> numvec;
    NumArray(vector<int>& nums) {
        numvec=nums;
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left;i<=right;i++)
        {
            sum+=numvec[i];
        }
        return sum;
    }
};