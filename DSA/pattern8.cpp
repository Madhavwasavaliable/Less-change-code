#include<iostream>

using namespace std;

int main() 
{
    int n;

    cin>>n;

    int row=1;
    // while (row <= n){
    //     int column = 1;
    //     int value = row;
    //     while (column <= row){
    //         cout<<value;
    //         value++;
    //         column++;
    //     }
    //     cout<<"\n";
    //    row++;         
    // }

    while(row<=n){
        int col = 1;
        while(col <= row){
            cout<<row + col -1;
            col++;
        }
        cout<<endl;
        row++;
    }

}