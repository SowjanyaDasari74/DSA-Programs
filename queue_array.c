i#nclude<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
void insert();
void delete();
void display();
int front = -1, rear = -1;
int queue[MAXSIZE];
void main()
{
int choice;
while(choice != 4)
{
printf("\n main menu\n");
printf("\n1 insert an elements\n2 delete an element\n3 display the queue ");
printf("\n enter your choice?");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("\n enter valid chioce??\n");
}
}
}
void insert()
{
int item;
printf("\n enter the elements\n");
scanf("\n%d",&item);
if(rear == MAXSIZE-1)
{
printf("\n overflow\n");
return;
}
if(front ==-1&& rear ==-1)
{
front =0;
rear =0;
}
else
{
rear = rear+1;
}
queue[rear] = item;
printf("\n value inserted");
}
void delete()
{ 
int item;
if(front ==-1 || front == rear)
{
printf("\n underflow\n");
return;
}
else
{
item = queue[front];
if(front == rear)
{
front =-1;
rear =-1;
}
else
{
front = front+1;
}
printf("\n value deleted\n");
}
}
void display()
{
int i;
if(rear ==-1)
{
printf("\n empty queue\n");
}
else
{
printf("\n printing values\n");
for(i=front;i<=rear;i++)
{
printf("\n%d\n",queue[i]);
}
}
}
output:Main Menu
1.insert an element
2.Delete an element
3.Display the queue
4.Exit
Enter your choice ?1
Enter the element
123
Value insereted
Main Menu
1.insert an element
2.Delete an element
3.Display the queue
4.Exit
Enter your choice ?1
Enter the element
90
Value inserted 
Main Menu
1.insert an element
2.Delete an element
3.Display the queue
4.Exit
Enter your choice ?2
value deleted 
Main Menu
1.insert an element
2.Delete an element
3.Display the queue
4.Exit
Enter your choice ?3
printing values 
90
Main Menu
1.insert an element
2.Delete an element
3.Display the queue
4.Exit
Enter your choice ?4

