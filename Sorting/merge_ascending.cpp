#include<bits/stdc++.h>
using namespace std;

//SORTER AND MEREGER FUNCTIONS
void mergeSort(int arr[], int p,int r);
void merge(int arr[],int a, int b, int c);

//MERGING 
void merge(int arr[], int a,int b, int c)
{
    int n1= b-a+1;
    int n2=c-b;
    int left[n1];
    int right[n2];
    //int kk;
    for(int kk=0;kk<n1;kk++)
    {
        left[kk]=arr[a+kk];
    }
    for(int kk=0;kk<n2;kk++)
    {
        right[kk]=arr[b+kk+1];
    }
    int l1=0; // starting index of left array
    int r1=0;  // starting index of right array
    int lr=a; // starting index of new marged array
    while(l1<n1 && r1<n2){
        if(left[l1]<right[r1]){
            arr[lr]=left[l1];
            l1=l1+1;
        }
        else{
            arr[lr]=right[r1];
            r1=r1+1;
        }
        lr=lr+1;
    }
    while(l1<n1){
        arr[lr]=left[l1];
        l1++;
        lr++;
    }
    while(r1<n2){
        arr[lr]=right[r1];
        r1++;
        lr++;
    }

}
// SPLITTING ARRAY
void mergeSort(int arr[],int p,int r)
{
    if(p<r){
        int q=p+(r-p)/2;
        mergeSort(arr, p, q); 
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

//DRIVER MAIN FUNCTION
int main(){
    int n; //Length of array
    cin >> n; 
    int arr[n];
    int i;

    for(i=0;i<n;i++)
    cin >> arr[i];

    mergeSort(arr,0,n-1);
    //PRINTING THE SORTED ARRAY
    for(i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}
