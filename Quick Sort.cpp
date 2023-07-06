class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
       if(low >= high) return ;
       int j=partition(arr , low , high);
       quickSort(arr,low,j-1);
       quickSort(arr, j+1, high);
       
    }
   
   public:
   int partition (int a[], int low, int high)
   {
      int pivot=a[low];
      int i=low,j=high;
      while(i<j)
      {
          while(a[i]<=pivot) i++;
          while(a[j]>pivot) j--;
          if(i<j) swap(a[i],a[j]);
      }
       swap(a[j],a[low]);
       return j;       
   }
};
