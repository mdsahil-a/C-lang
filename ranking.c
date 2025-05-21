
#include<stdio.h>
#include<string.h>
void sort(float *percentage,char names[][10])
{
	char temp[10];
	for(int i=0;i<5-1;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(percentage[i]<percentage[j])
			{
				
				int tem=percentage[i];
				percentage[i]=percentage[j];
				percentage[j]=tem;
				
							
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
			
		}
		
	}
	
}
void total(int nums[][5],float *arr){
float total=0;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			total+=(float)nums[i][j];
		}
		arr[i]=(total/5);
		
	}
	
}


void display(char names[][10],float *marks)
{
	
	for(int i=0;i<5;i++)
	{
printf("%d. %s with %.2f%%\n",i+1,names[i],marks[i]);
		
	}
}
int main()
{
	
	char names[5][10]={"Sahil","Saurav","Raju","Jay","Nags"};
	float percentage[5];
	int marks[5][5]={
	{5,6,7,8,9},
	{1,5,6,6,7},
	{6,7,8,9,2},
	{2,5,6,7,8},
	{3,4,5,6,7}			
	};
	
	total(marks,percentage);
	sort(percentage,names);
	display(names,percentage);
	

			
			
			
	return 0;
}