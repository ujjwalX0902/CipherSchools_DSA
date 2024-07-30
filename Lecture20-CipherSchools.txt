#include<iostream>
using namespace std;

int main(){
    long long int a;
    int b;
    float c;
    char d;
    cout<<"The size of int is : "<<sizeof(b)<< "  The size of long long int is: "<<sizeof(a)<<endl;
    cout<<"Size of float is: "<<sizeof(c)<<endl;
    cout<<"Size of char is: "<<sizeof(d)<<endl;
    cout<<"The address of a is "<<&a<<"  The address of b is "<<&b<<endl;
    cout<<"The address of c is "<<&c<<"  The address of d is "<<&d<<endl;
}
