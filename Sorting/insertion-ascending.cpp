#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    cin >> arr[i];

    for(int j=1;j<n;j++)
    {
        int key=arr[j];
        int p=j-1;
        while(p>=0 && arr[p]>key){
            arr[p+1]=arr[p];
            p=p-1;
            arr[p+1]=key;
        }
    }
    for(i=0;i<n;i++)
    cout << arr[i] << " ";
    return 0;
}
