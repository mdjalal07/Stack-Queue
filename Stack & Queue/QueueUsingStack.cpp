#include<iostream>
#define size 10
using namespace std;


//Queue 
class Queue{
    public:
    int s1[size];
    int s2[size];
    int top1=-1;
    int top2=-2;
    void enqueue(int);
    void dequeue();
    void push1(int);
    void push2(int);
    int pop1();
    int pop2();
    int isfull();
    void display();
    
};

void Queue::enqueue(int value){
    if(!isfull()){
        push1(value);
    }
    else{
        cout<<"queue is full"<<endl;
    }

}
void Queue::dequeue(){
    int a1,a2;
    if(top1!=-1){
        for(int i=top1;i>=0;i--){
            if(top1==0){
                
                cout<<"dequeued element is "<<s1[top1]<<endl;
                pop1();
            }
            else{
                a1=pop1();
                push2(a1);
            }
            
        }
        for(int j=top2;j>=0;j--){
            a2=pop2();
            push1(a2);

        }
    }
    else{
        cout<<"Queue is already empty can't dequeue"<<endl;
    }
}
int Queue::isfull(){
    if(top1==size){
        return 1;
    } 
    else {
        return 0;
    }
}

void Queue::push1(int element){
    if(!isfull()){
        top1++;
        s1[top1]=element;
    }
}
void Queue::push2(int value){
    top2++;
    s2[top2]=value;

}
int Queue::pop1(){
    int a=s1[top1];
    top1--;
    return a;
}
int Queue::pop2(){
    int a=s2[top2];
    top2--;
    return a;
}
void Queue::display(){
    for(int i=0;i<=top1;i++){
        cout<<s1[i]<<" ";
    }
}
int main(){
    Queue q1;
    q1.enqueue(34);
   
    q1.enqueue(56);
  
    q1.enqueue(67);
    q1.enqueue(20);
    q1.enqueue(700);
    
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(65);
    q1.enqueue(500);
    q1.enqueue(89);

  
    q1.dequeue();
    q1.display();

    

    return 0;
}