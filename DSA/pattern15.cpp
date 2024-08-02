#include<iostream>

using namespace std;

int main()
{
    // int n;
    // cin>>n;

    // int row = 1;

    // while (row <=n)
    // {
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout<<" ";
    //         space--;
    //     }

    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout<<"*";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
        
    // }
    int n;
    cin>>n;

    int row = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                cout<<" ";
            } else {
                cout<<"*";
            }
        }
        cout<<endl;
}
}