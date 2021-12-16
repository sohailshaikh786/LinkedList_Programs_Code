#include<stdio.h>
#include<stdlib.h>
#define max 10
int arr[max];
int top = -1;
void push()
{
	int val ;

	if(top == max -1)
	{
		printf("\nStack is OverFlow ! \n");
	}
	else

	{
 	 	printf("\nEnter element to push: ");
		scanf("%d",&val);
		top=top+1;
		arr[top]=val;
}

}
void display()
{
	int i;
	if(top == -1)
	{
		printf("\nStack Is Empty\n");
	}
	else{
		printf("\nStack is :\n");

		for(i=top;i>=0;i--)
		{
			printf("\n%d\n",arr[i]);

		}
	}
}
void pop()
{
	if(top == -1)
	{
		printf("\nStact is Empty\n");
	}
	else{
		int ch ;

		ch = arr[top];
		printf("\nElement Poped : %d" ,arr[top]);
		top = top-1;

	}

}

int main()
{
	while(1)
	{
		int choice ;
		printf("\nPress 1 for PUSH in STACK \n ");
		printf("\nPress 2 for POP from STACK \n ");
		printf("\nPress 3 to DISPLAY STACK \n ");
		printf("\nPress 4 to EXIT PROGRAM\n");
		printf("\nPlease Enter Your Choice : ") ;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default :
				printf("\nEnter Valid Choice !!\n");
		}



	}

	return 0;
}
