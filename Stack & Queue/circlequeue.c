#include<stdio.h>
#define size 6
int circleQueue[size];
int front =-1,rear=-1;


//check queue is empty or not
int isEmpty(){
    if(rear==-1 && front==-1){
        return 1;
    }
    else{
        return 0;
    }
}


//check queue is full or not
int isFull(){
    if((rear+1)%size==front){
        return 1;
    }
    else{
        return 0;
    }
}


//enqueue the element
int enQueue(int val){
    if(isFull()){
        printf("cant insert/enqueue the element queue is full\n");
    }
    if(rear==-1){
        rear++;
        circleQueue[rear]=val;
        front++;
    }
    else{
        rear=(rear+1)%size;
        circleQueue[rear]=val;
        
    }
}


//dequeue the element
int deQueue(){
    if(isEmpty()){
        printf("can't dequeue element stack is empty\n");
    }
    else{
        front=(front+1)%size;
    }
}



int main(){
    enQueue(10);
    enQueue(10);
    enQueue(10);
    enQueue(10);
    enQueue(10);
    enQueue(10);

    return 0;
}