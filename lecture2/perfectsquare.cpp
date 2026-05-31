 #include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    float inc = 1;
    float i = 0;

    int cp = 1;
    while(cp <=3) {
    while ( i * i <= n){ // i*i mai space dena hota hai 

        i = i + inc;
    }
    i = i -inc;
    inc = inc / 10;
    cp = cp + 1;
    }
    cout << fixed << setprecision(2) << i << endl;
    printf("%.2f", i);
   

    return 0;
}
    