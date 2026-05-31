#include <cstring>
#include<iostream>
using namespace std;
void reverseString(char *a){
    int i=0;
    int j= strlen(a)-1;
    while(i<=j){
        swap(a[j],a[i]);

        
    
    i++;
    j--;
    }
}
int main () {
    char a[]="Hello";
    reverseString(a);
    cout <<a <<endl;

   
  
      return 0;
}
