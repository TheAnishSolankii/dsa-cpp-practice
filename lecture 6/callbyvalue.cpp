#include<iostream>
using namespace std;
void update(int &x){
    x++;

}
int main () {
    int  a = 1;
    cout << "before update:" << a << endl;
    update(a);
    cout << "after update : "<< a << endl;
    
  

    return 0;
}