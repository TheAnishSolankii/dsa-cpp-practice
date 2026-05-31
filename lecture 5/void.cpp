#include<iostream>
using namespace std;
void printtable(int initValue,int finalValue,int step) {
     int f,c ;
    
    f = initValue;    
    while (f <= finalValue) {
        c = (5.0/9) * (f - 32);
        cout << f << ": \t" << c << endl;
        f = f + step;
    }
   
}
int main () {
    int init, fval,step;
    cin >> init>>fval>>step;
    printtable(init,fval,step);
   
    return 0;
}
