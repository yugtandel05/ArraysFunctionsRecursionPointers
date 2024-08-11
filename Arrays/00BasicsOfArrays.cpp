#include<iostream>
#include<string>
using namespace std;
/*
What is an Array?
--> A group or collection of similar kinds of elements or data items that are stored together in contiguous memory spaces. 
--> All the memory locations are adjacent to each other, and the number of elements in an array is the size of the array.
--> Indexing of arrays starts from 0. Therefore, first element is arr[0].........last element is arr[n-1]{here, n is no. of elements in arr}
*/
int main(){
    // Array Decleration + Initialization
    int arr[7] = {3,6,7,4,3,1,0};    //here array length is 7
    int arr2[] = {2,1,5,6};          //here arrary length will be set automatically accourding to the no. of elements in set.

    // Decleration
    int x[5];

    // Initialization
    x[0] = 4;
    x[1] = 2;
    x[2] = 6;
    x[3] = 5;
    x[4] = 0;

    for(int i=0; i<=4; i++){
        cout<<x[i]<<" ";
    }
    
    return 0;
}