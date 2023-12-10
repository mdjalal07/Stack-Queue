#include<stdio.h>
#define size 10
int Queue[size];
int front=-1,rear=-1;

//to check Queue is full or not
int isFull(){
    if(rear==size){
        return 1;
    }
    return 0;
}



//to check empty or not
int isEmpty(){
    if((rear==-1&&front==-1)||(rear<size-1 && front==rear+1 )){
        return 1;
    }
    return 0;
}



//insert in Queue / Enqueue
int enqueue(int value){
    if(isFull()){
        printf("Queue is full\n");
    }
    if(rear==-1){
        rear++;
        Queue[rear]=value;
        front++;
    }
    else{
        rear++;
        Queue[rear]=value;
    }
}



//delete from Queue / Dequeue
int dequeue(){
    if(isEmpty()){
        printf("Queue is Empty can't dequeue\n");
    }
    else{
        front++;

    }
}


//display value of head and tail of queue
void frontrear(){
    printf("front -> %d\nrear -> %d\n ",Queue[front],Queue[rear]);
}


//display the total element present in queue
void display(){
    if(isEmpty()){
        printf("can't display queue is empty");
        
    }
    else{
        int i;
        for(i=front;i<=rear;i++){
            printf("%d  ",Queue[i]);
        }
    }
}


int main(){
    enqueue(46);
    enqueue(6);
    enqueue(36);
    enqueue(42);
    enqueue(50);
    enqueue(20);
    enqueue(80);
    enqueue(50);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    frontrear();
    display();
    return 0;
}