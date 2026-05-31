#include<iostream>
using namespace std;
void toh(int n ,char src,char helper ,char des){
    if(n==0){
        return;
    }
    //base case
    
    //recursive case
    toh(n-1,src,des,helper);   
    cout << "Take disk " << n << " " << "From" << " " <<  src << " " << "to " << des << endl;
    toh(n-1,helper,src,des);
}
int main () {

int n;
cin>> n;
toh(n,'A','B','C');
    return 0;
}