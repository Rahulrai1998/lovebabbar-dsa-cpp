#include<bits/stdc++.h>
using namespace std;

int &fun(){
    int a = 5;
    int &b = a;
    return b;
}



int main() {
    //2-D ARRAY CREATION
    int n, m;
    cin >> n >> m;
    int **newArray = new int *[n] // 2-D ARRAY DECLARATION

    //2-D ARRAY CREATION 
    for(int i=0 ; i<=n ; i++){
        newArray[i] = new int[m];
    }

//this function is the fastest bacause it executes at compile time and is really fast , 
//but dont use it for like a big function  
inline int cube(int s)
{
    return s*s*s;
}
int main()
{
    cout << "The cube of 3 is: " << cube(3) << "\n";
    return 0;
} //Output: The cube of 3 is: 27

    //GRABAGE COLLECTION or MEMORY RELEASING OF 2D-ARRAY

 
    //RELEASING MULTIPLE 1D ARRAYS
    for(int i=0; i<row;i++){
        delete []arr[i];
    }
    //RELEASING THE SINGLE ARRAY OF POINTERS
    delete []arr;












    // int num = 42;
    // void *ptr = &num; // Storing the memory address of num

    // // Typcasting the void pointer back to int pointer to access the value
    // int *intPtr = (int *)ptr;

    // // Dereferencing the int pointer to access the value
    // printf("The value of num is: %d\n", *intPtr);

    return 0;
}
