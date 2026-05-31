#include<iostream>
using namespace std;
void MergeSortedArrays(int a[],int m,int b[],int n   ){
    int i = m-1,j=n-1 ,k=m+n-1;
    while (i >= 0 && j >= 0){
        if (a[i]>b[j]){
            a[k]=a[i];
            k--;
            i--;
        }
        else{
            a[k]=b[j];
            k--;
            j--;
        
        }
    }
    while (j>=0){
        a[k]=b[j];
        k--;
        j--;

    }
}
    void printArray(int a[],int n){
 for (int i=0;i<n;i++){
        cout<<a[i]<<' ';

    }
    cout<<endl;

}
int main () {
    int a[7]= {3,6,8};
    int b[]={1,2,5,7};
    int n =4;int m =3;
    MergeSortedArrays(a,m,b,n);

    printArray(a,m+n);

    return 0;
}