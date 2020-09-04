#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4};
    int* p = a;
    int* q = &a[0];
    cout << a[2]<<endl;
    cout << p[2]<<endl;
    cout << q[2]<<endl;
    cout <<*p<<endl;
    cout <<a<<endl;
    return 0;
}
