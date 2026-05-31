#include<iostream>
using namespace std;

int main () {
   char a[100];
   int i=0;
   int count=0;
   cin.getline(a,1000);
   while(a[i] !='\0'){
         count ++;
         i++;
}
    
   
        cout << strlen(a) << endl;
    
   
   
    return 0;
}