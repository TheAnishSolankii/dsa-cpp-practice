#include<iostream>
using namespace std;
int main () {
       int *a;
       int x;
       int *b; // it has garbage adress in it 
   cout << a<<endl;
   cout << *b<<endl;
   cout << b<<endl; //derefering a  garbage edress will give garbage value only..

   int *c=NULL; // always initialize your pointer with NULL (0x0)----> zero adress
   cout << *c<< endl; // NULL adress ko access krna is not allowed
       return 0;
}