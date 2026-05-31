#include<iostream>
#include<cstring>
using namespace std;
bool Checkpallindrome(char *a){

    int j = strlen(a)-1;
    int i = 0;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
            i++;
            j--;

        }
        return true;

        
    }
    
        
    

    


int main () {
    char a[]="racecar";

    if (Checkpallindrome(a)){
        cout << "palindrome \n";

    }
    else{
        cout << "not pallindrome \n";

    }

    
   
   
    return 0;
}