//asssesmet

#include<stdio.h>
#include<string.h>

void assesment();
main()
{
	assesment();
}
void assesment()
{
	
	int choice,y;
	do{
	
	printf("Main Menu");
	printf("\n\t1.Equality");
	printf("\n\t2.String Copy");
	printf("\n\t3.Concate");
	printf("\n\t4.show");
	printf("\n\t5.Reverse");
	printf("\n\t6.paliidrome");
	printf("\n\t7.Sub String");
	printf("\n\t8.Exit");
	
		
		printf("\n\nplease Enter your choice=");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
			{
				char E[20], w[20];
				printf("\n\nplease Enter your string=");
				scanf("%s",&w);
				printf("\nEnter the string to compare=");
				scanf("%s",E);
			
				if(strcmp(E,w)==0)
					printf("\n%s and %s is Equal",E,w);
				else
					printf("\n%s and %s is Not Equal",E,w);
					break;
			}
			case 2:
			{
				char E[20], w[20];
				printf("\n\nplease Enter your string=");
				scanf("%s",&w);
				strcpy(E,w);
				printf("\nstring 2 After copy=%s",E);
				break;		
			}
			case 3:
			{
				char E[20],w[20];
				printf("\n\nplease Enter your string=");
				scanf("%s",&w);
				printf("\nEnter the string to =");
				scanf("%s",E);
			
				printf("\nConcate string=%s",strcat(w,E));
				break;
			}	
			case 4: 
			{
				char w[20];
				printf("\n\nplease Enter your string=");
				scanf("%s",&w);
				printf("\n Your string is=%s",w);
				break;
			}
			case 5:
			{
				int i,j;
				char w[20];
				printf("\n\nplease Enter your string=");
				scanf("%s",&w);
				j=strlen(w);
				
				printf("\n Reversed String=");
				for(i=j;i>=0;i--)
				{
					printf("%c",w[i]);
				}
			break;		
			}
			case 6:
			{
				char a[20],b[20];
				char w[20];
				int i,z,j;
				printf("\n\nplease Enter your string=");
				scanf("%s",&w);
				strcpy(a,w);
				z=strlen(w);
				for(i=0,j=z-1;w[i]!='\0';i++,j--)
				{
					b[j]=w[i];			
				}
				b[z]='\0';
				if(strcmp(b,w)==0)
					printf("\n %s is palidrome",w);
				else
					printf("\n %s is Not palidrome",w);		
			break;			
			}
			case 7:
			{
				int p,l,i;
				char w[20];
				printf("\n\nplease Enter your string=");
				scanf("%s",&w);
				printf("Enter the start pos=");
				scanf("%d",&p);
				
				printf("Enter length of sub string=");
				scanf("%d",&l);
				printf("\n\nSub String=");
				for(i=p-1;i<=p+l;i++)
				{
					printf("%c",w[i]);		
				}
			
			break;		
			}	
			case 8:
			{
				exit(0);	
				break;
			}
			default:
			{
				printf("\n It's wrong number please Enter Another Number");
				break;				
			}

		}	
		printf("\nDo yo want to Continue(press 1 to continue)=");
		scanf("%d",&y);
	}while(y==1);
	
	
}
