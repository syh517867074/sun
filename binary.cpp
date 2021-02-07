#include <iostream>
#include <cmath>
#include <cassert>
#include <ctime>

using namespace std;
//二分查找法
template<typename T>
int binarySerach(T arr[], int n, T target){
    int l = 0, r = n - 1 ; //在[l...r]的范围里寻找target
    while( l <= r ){//当l==r时区间成立
        int mid = (l+r)/2;
        if(arr[mid] == target)
            return mid;
        if(target > arr[mid])
            l = mid + 1; //target下[mid+1...r]中
        if(target < arr[mid])
            r = mid -1; //target在[l...mid-1]中
    } 
    return -1;
}
int *generateOrderedArray(int n){
    assert(n>0);
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        arr[i]=i;
    return arr;
}
int main() {
    int n = 1000000;
    int* data = generateOrderedArray(n);

    clock_t startTime = clock();
    for( int i = 0; i< n ; i++ )
        assert(i == binarySerach(data, n, i));
    clock_t endTime = clock();
    cout<<"binarySearch test complete."<<endl;
    cout<<"Time cost: "<<double(endTime-startTime)/CLOCKS_PER_SEC<<" s "<<endl;
}