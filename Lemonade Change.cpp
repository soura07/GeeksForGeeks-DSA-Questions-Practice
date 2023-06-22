class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &b) {
       int five=0,ten=0;
       for(int i=0;i<n;i++){
           if(b[i]==5)five++;
           else if(b[i]==10){
               ten++;
               if(five>0)five--;
               else return false;
           }
           else{
               // b[i]=20
               
               if(ten>0&&five>0){// first we should try to give 5$ + 10$ as change for $15 
               // if it is not possible then only we should go for three 5$  coins 
                   ten--;
                   five--;
                   continue;
               }
               if(five>=3){
                   five-=3;
                   continue;
               }
               return false;
           }
       }
       return true;
    }
};
