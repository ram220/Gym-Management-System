#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void show_all();
void add_mem();
void edit_mem();
void delete_mem();
void search_mem();
void displaySlots();
void package();
struct Gym
{
	int mId;
	char mName[20];
	char mAddress[20];
	long int  mContact;
	int mAge,mWeight;
}G[50];
int mCount=0;
void show_all()
{
	int i;
	printf("\n Id	Name	Address		Contact		Age		Weight ");
	printf("\n===================================================================");
	for(i=0;i<mCount;i++)
	{
		printf("\n\n%d",G[i].mId);
		printf("\t%-10s",G[i].mName);
		printf("%-10s",G[i].mAddress);
		printf("\t%-10ld",G[i].mContact);
		printf("\t%-10d",G[i].mAge);
		printf("\t%-10d",G[i].mWeight);
		
		
	}
}
void add_mem()
{
	printf("\nenter member data:");
	G[mCount].mId=rand() % 10;
	printf("\n Id: %d",G[mCount].mId);
	printf("\nenter Name: ");
	scanf("%s",&G[mCount].mName);
	printf("\nenter Address: ");
	scanf("%s",&G[mCount].mAddress);
	printf("\nenter Contact_no: ");
	scanf("%ld",&G[mCount].mContact);
	printf("\nenter Age: ");
	scanf("%d",&G[mCount].mAge);
	printf("\nenter Weight: ");
	scanf("%d",&G[mCount].mWeight);
	printf("\npackages\n");
	package();
	printf("\nAvailable slots: \n");
    displaySlots();
    fflush(stdin);
	mCount++;
	printf("\ndata submited");
}
void edit_mem()
{
	int Id,i;
	printf("\nenter member Id: ");
	scanf("%d",&Id);
	for(i=0;i<mCount;i++)
	{
		if(Id==G[i].mId)
		{
			printf("\nId: %d",G[i].mId);
			printf("\nName: %s",G[i].mName);
			printf("\nAddress: %s",G[i].mAddress);
			printf("\nContact: %ld",G[i].mContact);
			printf("\nAge: %d",G[i].mAge);
			printf("\nWeight: %d",G[i].mWeight);
			 
			printf("\nenter updated data: ");
			printf("\nenter Name: ");
			scanf("%s",G[i].mName);
			printf("\nenter Address: ");
			scanf("%s",G[i].mAddress);
			printf("\nenter Contact_no: ");
			scanf("%ld",&G[i].mContact);
			printf("\nenter Age: ");
			scanf("%d",&G[i].mAge);
			printf("\nenter Weight: ");
			scanf("%d",&G[i].mWeight);
			fflush(stdin);
			printf("\nData updated");	
		}
	}
}

void delete_mem()
{
	int Id,i,slot;
	printf("\nenter member Id to delete: ");
	scanf("%d",&Id);
	for(i=0;i<mCount;i++)
	{
		if(Id==G[i].mId)
		{
		printf("\nId: %d",G[i].mId);
		printf("\nName: %s",G[i].mName);
		printf("\nAddrss: %s",G[i].mAddress);
		printf("\nContact: %ld",G[i].mContact);
		printf("\nAge: %d",G[i].mAge);
		printf("\nWeight %d",G[i].mWeight);
		mCount--;
		while(i<mCount)
		{
			G[i].mId=G[i+1].mId;
			strcpy(G[i].mName, G[i+1].mName);
			strcpy(G[i].mAddress, G[i+1].mAddress);
			G[i].mContact=G[i+1].mContact;
			G[i].mAge=G[i+1].mAge;
			G[i].mWeight=G[i+1].mWeight;
			i++;
		}
		printf("\nData deleted");
		break;
		}
	}
}

void search_mem()
{
	int Id,i;
	printf("\nenter member Id to search: ");
	scanf("%d",&Id);
	for(i=0;i<mCount;i++)
	{
		if(Id==G[i].mId)
		{
			printf("\nId: %d",G[i].mId);
			printf("\nName: %s",G[i].mName);
			printf("\nAdress: %s",G[i].mAddress);
			printf("\nContact: %ld",G[i].mContact);
			printf("\nAge: %d",G[i].mAge);
			printf("\nWeight: %d",G[i].mWeight);
		}
	}
}
void displaySlots() 
{
	int ch;
	printf("1. 9:00 AM - 10:00 AM\n");
	printf("2. 10:00 AM - 11:00 AM\n");
	printf("3. 11:00 AM - 12:00 PM\n");
	printf("4. 12:00 PM - 1:00 PM\n");
	printf("5. 1:00 PM - 2:00 PM\n");
	printf("6. 2:00 PM - 3:00 PM\n");
	printf("7. 3:00 PM - 4:00 PM\n");
	printf("8. 4:00 PM - 5:00 PM\n");
	printf("enter your choice from 1-8:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("1. 9:00 AM - 10:00 AM\n");
		break;
	case 2:
		printf("2. 10:00 AM - 11:00 AM\n");
		break;
	case 3:
		printf("3. 11:00 AM - 12:00 PM\n");
		break;
	case 4:
		printf("4. 12:00 PM - 1:00 PM\n");
		break;
	case 5:
		printf("5. 1:00 PM - 2:00 PM\n");
		break;
	case 6:
		printf("6. 2:00 PM - 3:00 PM\n");
		break;
	case 7:
		printf("7. 3:00 PM - 4:00 PM\n");
		break;
	case 8:
		printf("8. 4:00 PM - 5:00 PM\n");
		break;
	}
}
void package()
{
	int ch;
	
	printf("\n1.for one mont-$300\n2.for two months-$500\n3.for three months-$750\n4.for five months-$1000\n");
	printf("enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("your package is for 1 month is 300 rupees");
			break;
		case 2:
			printf("your package is for 2 months is 500 rupees");
			break;
		case 3:
			printf("your package is for 3 months is 750 rupees");
			break;
		case 4:
			printf("your package for 5 months is 1000 rupees");
			break;
	}
}
void main()
{
	int choice;
	do
	{
	printf("\n1: display all\n");
	printf("2: add member\n");
	printf("3: Edit member\n");
	printf("4: Delete member\n");
	printf("5: Search member\n");
	printf("6: Exit");
	
	printf("\nenter your choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	switch(choice)
	{
	case 1:
		show_all();
		break;
	case 2:
		add_mem();
		break;
	case 3:
		edit_mem();
		break;
	case 4:
		delete_mem();
		break;
	case 5:
		search_mem();
		break;
	case 6:
		printf("\nThank you... Visit again");
		getch();
		exit(1);
		break;
	defaut:
		printf("\n Invalid choice");
		break;
	}
		getch();
	}while(1);
	
}
