#include<stdio.h>
int main()
{
int stack[10],top = -1,num,i,ch;
printf("enter choice");
scanf("%d",&ch);
while(ch! = 0)
switch(ch)
{
case1 = push();
break;
case2 = pop();
break;
case3 = display();
break;
default printf("enter choice between 1 to 3");
}
}
void push()
{
if(top = 4,size-1)
{
printf("stack overflow");
}
else
{
printf("enter elements to push into stack");
scanf("%d",&num);
top++;
stack[top] = num;
}
}
void pop()
{
if(top == -1)
{
printf("stack underflow");
}
num = stack[top];
top--;
}
void display()
{if(top == -1)
{
printf("no element to display");
}
for(i=top;i<4;i++)
{
printf("elements of stack are %d" stack);
}
num = top;
top--;
}
output:
Element at top of the stack: 15
Elements:
15
12
1 
9 
5 
3 
Stack full: false
Stack empty: true

