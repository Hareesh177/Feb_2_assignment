#include<stdio.h>

typedef struct student
{
	char name[15],branch[10];
	float cgpa;
}std;

int student_count(int n)
{
	printf("Enter the number of student details\n");
	scanf("%d",&n);
	return n;
}

void input_data(std data[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter Student name\n");
		scanf("%s",data[i].name);
		printf("Enter branch \n");
		scanf("%s",data[i].branch);
		printf("Enter Cgpa\n");
		scanf("%f",&data[i].cgpa);
	}	
	return ;
}
void print(std data[],int n)
{
	int i;
	printf("Student Details\n\n");
	for(int i=0;i<n;i++)
	{
		printf("Name : %s\t",data[i].name);
		printf("Branch :%s\t",data[i].branch);
		printf("cgpa :%f\n",data[i].cgpa);
	}
	return ;
}
int main()
{
	int n;
	n=student_count(n);
	std data[n];
	input_data(data,n);
	print(data,n);
	return 0;
}
