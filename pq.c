#include<stdio.h>
#define max 5
int start = -1 ,rear = -1;
int priority[max],queue[max],val,prior;
void add(){
int i;
if(rear==max-1){
    printf("\nThe Queue is Full");
}
printf("Enter the priority and data ");
scanf("%d %d",&prior,&val);

    if(start==-1 && rear==-1){
        start++;
        rear++;
        priority[rear]=prior;
        queue[rear]=val;
    }
    else{
        for(i = rear;i>=start;i--)
			{
            if(prior>priority[i])
				{
                queue[i+1] = queue[i];
                priority[i+1] = priority[i];
				}
				else
					break;
			}
			queue[i+1] = val;
			priority[i+1] = prior;
			rear++;
    }


}

void display(){
int i;
	for(i=start;i<=rear;i++)
	{
		printf("\nElement = %d\tPriority = %d",queue[i],priority[i]);
	}
}

void del(){
if(start==-1 & rear==-1){
    printf("The Queue is empty");
}
else{
    start = start+1;
}

}

int main(){
int choice;
printf("Enter the Choice 1)ADD 2)DELETE 3)DISPLAY 4)END");
scanf("%d",&choice);
while(choice!=4){
    switch(choice){
    case 1:
        add();
        break;
    case 2:
        del();
        break;
    case 3:
        display();
        break;
    default:
        printf("\nInvalid Input");
        break;

    }
printf("Enter the Choice 1)ADD 2)DELETE 3)DISPLAY 4)END");
scanf("%d",&choice);
}


}
