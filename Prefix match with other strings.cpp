class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        string match = str.substr(0,k);
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i].size()>=k && arr[i].substr(0,k)==match){
                count++;
            }
        }
        return count;
    }
};
