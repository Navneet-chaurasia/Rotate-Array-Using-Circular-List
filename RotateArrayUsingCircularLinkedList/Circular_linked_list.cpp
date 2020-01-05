#include "Circular_linked_list.h"
using namespace std;
Circular_linked_list::Circular_linked_list()
{
    //initiate length = 0;
    //and head pointing to null;
    this->head = NULL;
    this->length = 0;
}

Circular_linked_list::~Circular_linked_list()
{
    //dtor
}

//implement function for rotate array
int *Circular_linked_list::rotateArray(int A[], int point){

    //copy this array into circular list
    //would take O(n) time
      copyIntoList(A);

    //rotate the array by point
    //O(1) time
      rotateList(point);

      //copy back list into array
      //Would take O(n) time;



      return copyIntoArray(A);



}


//implement copy into list method
void Circular_linked_list :: copyIntoList(int A[]){

node* temp = this->head;

for(int i = 0; i <10; i++){

        this->length++;
        node* newnode = new node();
        newnode->data = A[i];

    if(this->head == NULL){

        this->head = newnode;
        newnode->next = this->head;
        temp = this->head;

    }else{



       temp->next = newnode;
       newnode->next = this->head;
       temp = temp->next;

    }

}



}

void Circular_linked_list :: list_(){

   node* temp;

   temp = this->head;
   while(temp->next != this->head){


       cout<<temp->data<<" ";
       temp = temp->next;

   }
   cout<<temp->data<<" \n";


}


//implement actual rotating
void Circular_linked_list :: rotateList(int point){


  node *temp;

    temp = this->head;
if(point > 0 ){
    while(point > 1){

        temp = temp->next;

        point--;
    }


    this->head = temp->next;





}



}


//copy rotated list back into array
//and return it
int * Circular_linked_list :: copyIntoArray(int A[]){
    node* temp;
    temp = this->head;
    int i = 0;

 while(temp->next != this->head){

     A[i] = temp->data;
     temp = temp->next;
     i++;

 }
 A[i] = temp->data;

 return A;


}
