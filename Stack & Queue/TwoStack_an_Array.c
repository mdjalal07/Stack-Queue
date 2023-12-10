#include<stdio.h>
#define size 10
int arrstack[size];
int top1=-1,top2=size;

//check stack is full or not
int isFull(){
    if(top1+1==top2){

       return 1;
    }
    else{
        return 0;
    }

}




//to push in stack-1
int push1(int val1){
    if(isFull()){
        printf("can't push stack is full\nvalue1 is %d\n",val1);
    }
    else{
        top1++;
        arrstack[top1]=val1;

    }
}

//to push in stack-2

int push2(int val2){
    if(isFull()){
        printf("can't push stack is full\n value2 is %d\n",val2);
    }
    else{
        top2--;
        arrstack[top2]=val2;

    }
}

//to pop from stack 1
int pop1(){
    if(top1==-1){
        printf("stack 1 is Empty can't pop \n");
    }
    else{
        top1--;
    }
}


int pop2(){
    if(top2==size){
        printf("stack 1 is Empty can't pop \n");
    }
    else{
        top2++;
    }
}

//to display peaks of both stack
void peak(){
    printf("peak of stack 1 -> %d \npeak of stack 2 -> %d \n",arrstack[top1],arrstack[top2]);
}


//display both stack 
void display(){
    int i,j;
    printf("stack 1 : ");
    for( i=0;i<=top1;i++){
        printf("%d  ",arrstack[i]);
    }
    printf("\nstack 2 : ");
    for(j=size-1;j>=top2;j--){
        printf("%d  ",arrstack[j]);
    }
}

int main(){


    push1(20);
    push2(660);
    push2(27);
    push1(90);
    push1(20);
    push1(20);
    push2(6460);
    push1(20);
    push2(24);
    push1(20);
    push1(50);
    push1(90);
    push1(25);
    pop1();
    pop1();
  
    pop1();
    pop2();
    peak();
    display();


    return 0;
}
