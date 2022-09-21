#include<stdio.h>
void main()
{
	struct bus
	{
		char name[10],dest[10],source[10];
		int age,fair;
	}s;
	printf("Enter name : ");
	scanf("%s",&s.name);
	printf("Enter destination : ");
	scanf("%s",&s.dest);
	printf("Enter source : ");
	scanf("%s",&s.source);
	printf("Enter Age : ");
	scanf("%d",&s.age);
	printf("Enter fair amount");
	scanf("%s",&s.fair);
	printf("\n The name %s ",s.name);
	printf("\n The Destination is %s ",s.dest);
	printf("\n The source is %s ",s.source);
	printf("\n the fair amount %d ",s.fair);
	printf("\n The age is %d ",s.age);
}







 
