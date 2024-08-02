#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == key)  return mid;

        if (key > arr[mid])  start = mid + 1;

        else  end = mid - 1;

        mid = (start + end) / 2;
    }
    return -1;
}

int binarySearchOptimised(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    //when size of array is large then normal sum might go out of int's size
    //so we can prevent this by doing this
    int mid = start + ((end - start) / 2);
    //here it is same as (start + end)/2 but in different form   

    while (start <= end) {
        if (arr[mid] == key)  return mid;

        if (key > arr[mid])  start = mid + 1;

        else  end = mid - 1;
        
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main() {
    int even[] = {4, 14, 15, 26, 40, 70};
    int odd[] = {2, 4, 7, 9, 10, 16, 20};

    cout<<"index of 26 is " << binarySearch(even, 6, 26) << endl; 
    cout<<"index of 7 is " << binarySearch(odd, 7, 7) << endl; 

    cout<<"(opt) index of 26 is " << binarySearchOptimised(even, 6, 26) << endl; 
    cout<<"(opt)index of 7 is " << binarySearchOptimised(odd, 7, 7) << endl; 
}