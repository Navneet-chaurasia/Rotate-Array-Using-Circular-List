#include <bits/stdc++.h>
#include"Circular_linked_list.h"

using namespace std;

int main()
{
    //declare object
    Circular_linked_list* obj = new Circular_linked_list();

 //declare array
    int A[10] = {1,2,3,4,5,6,7,8,9,10};

     int *Arr;

     //take rotated array
     Arr = obj->rotateArray(A,5);

  //print the rotated array
    for(int i = 0; i < 10; i++){
        cout<<Arr[i]<<" ";
    }

    return 0;
}
