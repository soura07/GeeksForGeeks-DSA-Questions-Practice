class Solution{
    long long limit = (long long)(1e9);
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 

            int i = 0, j = 0, resi = 0;
            while(i < n and j < m){
                if((arr1[i] % limit) <= (arr2[j] % limit)){
                    if(resi < n){
                        arr1[resi] = (arr1[resi]) + ((arr1[i] % limit) * limit);
                    }else{
                        arr2[resi - n] = (arr2[resi - n]) + ((arr1[i] % limit) * limit);
                    }
                    i++;
                    resi++;
                }else{
                    if(resi < n){
                        arr1[resi] = (arr1[resi]) + ((arr2[j] % limit) * limit);
                    }else{
                        arr2[resi - n] = (arr2[resi - n]) + ((arr2[j] % limit) * limit);
                    }
                    
                    resi++;
                    j++;
                }
            }
            
            while(i < n){
                if(resi < n){
                    arr1[resi] = (arr1[resi]) + ((arr1[i] % limit) * limit);
                }else{
                    arr2[resi - n] = (arr2[resi - n]) + ((arr1[i] % limit) * limit);
                }
                i++;
                resi++;
            }
            
            while(j < m){
                if(resi < n){
                    arr1[resi] = (arr1[resi]) + ((arr2[j] % limit) * limit);
                }else{
                    arr2[resi - n] = (arr2[resi - n]) + ((arr2[j] % limit) * limit);
                }
                resi++;
                j++;
            }
            
            for(int i = 0; i < n; i++){
                arr1[i] = arr1[i] / limit;
            }
            for(int i = 0; i < m; i++){
                arr2[i] = arr2[i] / limit;
            }
        } 
};
