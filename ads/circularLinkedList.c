#include<stdio.h>
struct Node{
    int data;
    struct Node* next;
}
;
struct Node* head=NULL;
struct Node* tail=NULL;
void insert();
void delete();
void display();
void insertBeg(int num);
void insertEnd(int num);
void insertPos(int num);
void main(){

}