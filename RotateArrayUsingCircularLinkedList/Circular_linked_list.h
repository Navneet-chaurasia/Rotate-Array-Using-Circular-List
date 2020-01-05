#include<bits/stdc++.h>

#ifndef CIRCULAR_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_H

//structure for defining node of circular linked list

struct node{
 int data;
 node*next;

 //constructor
 node(){

   next  = NULL;
 }

};


class Circular_linked_list
{
  node*head;
  int length;

    public:
        Circular_linked_list();
        virtual ~Circular_linked_list();

        //rotate array
        //this function will take array and position by which array to be rotated;
        int *rotateArray(int A[], int point);


        //helper function for copying data into circular list
        void copyIntoList(int A[]);

        //helper function for copying back list into array
        int* copyIntoArray(int A[]);

        //helper function for rotation
        void rotateList(int point);

        //helping
        void list_();

    protected:

    private:
};

#endif // CIRCULAR_LINKED_LIST_H
