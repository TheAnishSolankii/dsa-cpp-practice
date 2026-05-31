#include<iostream>
using namespace std;
class node{
    public: 
    char ch;*> h;
    bool isEnd;
    node(char c){
        ch = c;
        isEnd = false;
    
    }
};
class Tries{
    public:
    node* root;
    Tries(){
        root = new node('\0');

    }
    void addword (string s){
        node* temp = root;
        for(int i = 0; i < s.size(); ++i)
        {
            char ch = s[i];
            if(temp->h.count(ch) == 0){
                node* n = new node(ch);
                temp-> h[ch]=n;
                
            }
        }
    }
}