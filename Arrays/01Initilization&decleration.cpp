#include<iostream>
#include<string>
using namespace std;

// Right VS Wrong ways of initilization array
int main(){
    int size = 5;
//  int a[];        // wrong
//  int a(size);    // wrong 
    int a[size];    // right


//  int b[length], length = 10;     // wrong
    int length = 10, b[length];     // right 


//  int c = {1,35,2,5};           // wrong
    int c[] = {1,35,2,5};         // right
    int d[6] = {1,2,3,4,5,6};     // right 
    int e1[3] = {9};            //right [If we don't provide values, than it will take 0 for the remaining indexes]
//  int e2[3] = {1,2,3,4,5,6};  //wrong

cout<<e1[1]<<endl;
cout<<e1[2]<<endl;
    

    return 0;
}