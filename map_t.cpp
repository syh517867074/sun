#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,int> myMap;
    if(myMap.find(42) == myMap.end())
        cout<<"Element 42 is not in map"<<endl;
    else
    {
         cout<<"Element 42 is  in map"<<endl;   
    }
    cout<<myMap[42]<<endl;
    if(myMap.find(42) == myMap.end())
        cout<<"Element 42 is not in map"<<endl;
    else
    {
         cout<<"Element 42 is  in map"<<endl;   
    }
    myMap[42]++;
    cout<<myMap[42]<<endl;

    myMap.erase(42);
    if(myMap.find(42) == myMap.end())
        cout<<"Element 42 is not in map"<<endl;
    else
    {
         cout<<"Element 42 is  in map"<<endl;   
    }
}