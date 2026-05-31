#include <iostream>
using namespace std;

int findLength(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

bool arePermutations(char s1[], char s2[]) {

    int n1 = findLength(s1);
    int n2 = findLength(s2);

    if (n1 != n2)
        return false;

    int freq1[256];
    int freq2[256];

    for (int i = 0; i < 256; i++) {
        freq1[i] = 0;
        freq2[i] = 0;
    }

    for (int i = 0; i < n1; i++) {
        freq1[(int)s1[i]]++;
    }

    for (int i = 0; i < n2; i++) {
        freq2[(int)s2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i])
            return false;
    }

    return true;
}

// int main() {

//     char s1[1000]="silent", s2[1000]="tensil";

//     // cin >> s1 >> s2;

//     if (arePermutations(s1, s2))
//         cout << "YES\n";
//     else
//         cout << "NO\n";

//     return 0;
// }

//////2222


int main() {
    char s1[1000]="silent", s2[1000]="tensil";

    // cin >> s1 >> s2;

    if (arePermutations(s1, s2))
        cout << "YES Permutation" << endl;
    else
        cout << "NO\n";

    cout << "/////////////////" << endl;
    
    char s[1000]="silent";
    // cin >> s;

    int n = findLength(s);

    for (int start = 0; start < n; start++) {

        for (int end = start; end < n; end++) {
         
            for (int k = start; k <= end; k++) {
                cout << s[k];
            }

            cout << endl;
        }
    }

    return 0;
}