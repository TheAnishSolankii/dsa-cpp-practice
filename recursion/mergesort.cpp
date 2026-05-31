#include<iostream>
#include<cstring>
using namespace std;
void merge(int *a,int *b,int*c,int s ,int e){
    int mid = (s+e)/2;
    int i =s; int j=mid +1 ; int k=s;
    while (i<=mid && j <=e){
        if(b[i]<c[j]){
            a[k++]=b[i++];
        }
        else{
            a[k++]=c[j++];
            
        }
    }
    while (i<=mid){
        a[k++]=b[i++];

    }
    while(j <=e){
        a[k++] = c[j++];
    }

}
void mergeSort(int*a,int s,int e){
    if(s>=e){
        return;
    }
    int mid= (s+e)/2;
    int b [1000],c[1000];

    //divide
    for(int i =s ; i <=mid ; i++){
        b[i]=a[i];

    }
    for(int i=mid+1; i <=e ; i++){
        c[i]=a[i];
    }
    //sort
    mergeSort(b,s,mid);
    mergeSort(c,mid + 1,e);

    //merge
    merge(a,b,c,s,e);
}
int stringToInteger(string a , int n ){


}



int main(){
    int a[]={5,6,4,3,1,2};
    int n = sizeof(a)/sizeof(int);
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
    }
cout << endl;


    return 0;
}