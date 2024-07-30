#include<iostream>
using namespace std;
// in this lecture i studied about parmeters 
int sum(int a, int b){
    return a+b;
}// here we can see that we are returning the sum of two numbers but we can also return the sum of three numbers
int sum(int a, int b, int c){
    return a+b+c;
}
int main(){
    cout<<sum(3,4)<<endl;
    cout<<sum(3,4,5)<<endl;
    return 0;

}