#include<stdio.h>
#define size 10
int top=-1;
int stack[size];


//to check stack is full or not
int isFull(){
    if(top==size-1){
        return 1;
    }
    else {
        return 0;
    }
}

//to check stack is empty or not

int isEmpty(){
    if(top==-1){
        return 1;
    }
    return 0;
}


//to push 

int push(int val){
    
    if(isFull()){
        printf("your stack is full can't push \n");
    }
    else{
        top++;
        stack[top]=val;
    }
}

//to pop
int pop(){
    if(isEmpty()){
        printf("can't pop ,stack is empty");
    }
    else{
        top--;
    }
} 


//check top element
void peak(){
    printf("peak -  %d\n",stack[top]);
} 

//to display total element of stack
void display(){
    int i;
    for(i=0;i<=top;i++){
        printf("%d  ",stack[i]);
    }
}


int main(){
   push(10);
   push(40);
   push(50);
   push(30);
   push(60);
   push(70);
   pop();
   peak();
   display();

    

    return 0;
}