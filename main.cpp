#include<iostream>
#include<cmath>
#include <ctime>
#include <string>
#include <algorithm>
#include <assert.h>
using namespace std;
namespace myspace{
    void  reverse(string &s){
        int n=s.size();
        for(int i=0;i<n/2;i++)
            swap(s[i],s[n-i-1]);
    }
}

string intToString(int num){
	string s="";
	while(num){
		s+='0'+num%10;
		num/=10;
	}
	reverse(s.begin(),s.end());
	return s;
}

int *generateRandomArray(int n,int rangeL,int rangeR){
    assert(n>0 && rangeL<=rangeR);
    int *arr = new int[n];
    srand(time(NULL));
    for(int i=0;i<n;i++){
        arr[i]=rand()%(rangeR-rangeL+1)+rangeL;
    }
    return arr;
}

int *generateOrderedArray(int n){
    assert(n>0);
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        arr[i]=i;
    return arr;
}

int main(){
    for (int x = 1;x<=9;x++){

        float n=pow(float(10),x);
        clock_t startTime = clock();

        int sum = 0;
        for (int i =0;i<n;i++)
            sum+=i;
        clock_t endTime = clock();
        cout<<"10^"<<x<<":"<<double(endTime-startTime)/CLOCKS_PER_SEC<<" s"<<endl;
        
    }
    string a="abcdef";
    reverse(a.begin(),a.end());
    cout<<a<<endl;
    cout<<intToString(21233)<<endl;
    int *v=generateOrderedArray(100);
    for(int i=0;i<100;i++)
        cout<<v[i]<<" "<<endl;
    system("pause");
}
