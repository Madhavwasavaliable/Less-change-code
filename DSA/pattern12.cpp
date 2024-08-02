#include<iostream>
using namespace std;

int main(){
    int n;
    int row=1;
    cin>>n;
    char count = 'A';
    while(row<=n){
        int col = 1;
        while(col <= n){
            cout<<count<<" ";
            col++;
            count = count + 1;
        }
        cout<<endl;
        row++;
    }
}