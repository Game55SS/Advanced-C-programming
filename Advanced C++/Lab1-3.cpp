#include <iostream>
using namespace std;
int findSun(int arr[], int size){
    if (size <=0)
        return 0;
    else
        return arr[size-1] + findSun(arr, size-1);
}
int main() {
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    cout<< "sum of array elements is: " << findSun(arr,10) << endl;
    return 0;
}