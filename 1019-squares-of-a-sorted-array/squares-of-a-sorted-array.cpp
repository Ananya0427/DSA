class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        int z=nums.size();

        for(int i=0;i<z;i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        
        //all elements are positive
        if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
                pos[i]=(pos[i]*pos[i]);
            }
            return pos;
        }
        
        //all elements are negative
        if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
                neg[i]=(neg[i]*neg[i]);
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }


        //arr contains both positive and negative elements
        int i=0,j=0;
        int idx=0;
        int n=neg.size();
        int m=pos.size();
        vector<int> res(m+n);
        
        for(int i=0;i<n;i++){
            neg[i]=(neg[i]*neg[i]);
        }
        reverse(neg.begin(),neg.end());


        for(int i=0;i<pos.size();i++){
            pos[i]=(pos[i]*pos[i]);
        }
        
        //Now apply the same logic as used in merging two sorted array using two pointer algorithm
        while(i<n && j<m){
            if(neg[i]<=pos[j]){
                res[idx]=neg[i];
                idx++;
                i++;
            }else{
                res[idx]=pos[j];
                idx++;
                j++;
            }
        }
        while(j<m){
            res[idx]=pos[j];
            idx++;
            j++;
        }
        while(i<n){
            res[idx]=neg[i];
            idx++;
            i++;
        }

        return res;
    }
};