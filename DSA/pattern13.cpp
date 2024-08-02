#include<iostream>
using namespace std;

int main(){
    int n;
    int row=1;
    cin>>n;

    while(row<=n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + col + row - 2; // row + col - 1 = 1   //add 'A'-1 on both side => 'A' + col + row - 2;  
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}