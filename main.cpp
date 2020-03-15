#include <iostream>
#define SIZE 10
using namespace std;




class STACK{


private:
    int top;

public:
    int num[SIZE];
    STACK();   //default constructor
    int push(int);
    int pop();
    int isEmpty();
    int inBetween();
    int isFull();
    void displayItems();




};

STACK::STACK(){
top=-1;
}

int STACK::isEmpty(){
if (top==-1)
    return 1;
else
    return 0;
}

int STACK::isFull(){
if (top==(SIZE-1))
    return 1;
else
return 0;
}


int STACK::push(int n){
//check is full or not
if(isFull()){
    return 0;
}
++top;
num[top]=n;
return n;
}

int STACK::pop(){
//to store and print which number
//is deleted
int temp;
//check for empty
if(isEmpty())
    return 0;
temp=num[top];
--top;
return temp;

}


/*void STACK::inBetween{
int temp;

if (inBetween())
    return 0;
temp=num[top-1];
--top;
return temp;


}*/


void STACK::displayItems(){

int i; //loop
cout <<"STACK is ";
if(isEmpty()){
    cout << "Empty";
}
for(i=(top);i>=0;i--)

    cout << num[i]<<" ";
}

int main()
{
 //declare object
 STACK stk;
int choice,n,temp;

do
{
    cout << endl;
    cout <<"0- Exit "<< endl;
    cout <<"1- push item "<< endl;
    cout <<"2- Pop item"<< endl;
    cout <<"3- Display item (PRINT STACKS)"<< endl;
    cout <<"4- Pop in Between"<<endl;
    cout <<"Enter choice :" ;
    cin >>choice;

    switch(choice){

    case 0:break;
    case 1:
        cout <<"Enter item to insert :";
        cin >> n;
        temp=stk.push(n);
        if(temp==0)
            cout <<"Stack is full "<< endl;
        else
            cout << temp << " Inserted"<< endl;
        break;
    case 2:
        temp=stk.pop();

        if (temp==0)

            cout << "STACK IS EMPTY!!\n";
            else
                cout << temp << " is removed popped";
            break;
    case 3:
        stk.displayItems();
        break;
   case 4: //gawa gawa langs


            cout << "Enter number to pop in Between : " ;
        cin >> n;
        temp=stk.pop();
        if(temp==temp-temp)

            cout << temp <<" Pop IN BETWEEN\n";
        break;
        }

    }
while (temp!=0);



    return 0;
}
