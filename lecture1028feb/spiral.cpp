#include<iostream>
using namespace std;

void spiralPrint(int a[][100], int n, int m){
    int sr = 0, er = n - 1;
    int sc = 0, ec = m - 1;

    while(sr <= er && sc <= ec){

        // Top Row
        for(int col = sc; col <= ec; col++){
            cout << a[sr][col] << " ";
        }
        sr++;

        // Right Column
        for(int row = sr; row <= er; row++){
            cout << a[row][ec] << " ";
        }
        ec--;

        // Bottom Row
        if(sr <= er){
            for(int col = ec; col >= sc; col--){
                cout << a[er][col] << " ";
            }
            er--;
        }

        // Left Column
        if(sc <= ec){
            for(int row = er; row >= sr; row--){
                cout << a[row][sc] << " ";
            }
            sc++;
        }
    }
}

void print2d(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int a[100][100];
    int n, m;

    cin >> n >> m;

    int number = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = number++;
        }
    }

   
    print2d(a, n, m);

    
    spiralPrint(a, n, m);

    return 0;
}