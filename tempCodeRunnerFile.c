#include<stdio.h>
int avlrollno(int rno);
struct student
{
	int Roll;
	char Name[40];
	float Marks;
}stud;
int insert()
{
	FILE *fp;
	fp=fopen("record","a");
	printf("Enter the roll number:");
	scanf("%d",&stud.Roll);
	printf("Enter the Name:");
	scanf("%s",&stud.Name);
	printf("Enter the Marks:");
	scanf("%f",&stud.Marks);
	fwrite(&stud, sizeof(stud), 1, fp);
	fclose(fp);
	return 0;
}
int disp()
{
	FILE *fp1;
	fp1=fopen("record","r");
	printf("\nRoll Number\t Name\t Marks\n\n");
	while(fread(&stud,sizeof(stud),1,fp1))
	{
	printf(" %d\t\t %s \t %.2f\n",stud.Roll,stud.Name,stud.Marks);
	}
	fclose(fp1);
	return 0;
}
int empty()
{
	int c=0;
    FILE *fp;
    fp=fopen("record","r");
    while(fread(&stud,sizeof(stud),1,fp))
    c=1;
    fclose(fp);
    return c;
}
int search()
{
	FILE *fp2;
	int r,s,avl;
	printf("\n enter the roll number you want to search:");
	scanf("%d",&r);
	avl=avlrollno(r);
	if(avl==0)
	{
		printf("Roll number %d is not available in this file",r);
	}
	else
	{
		fp2=fopen("record","r");
		while(fread(&stud,sizeof(stud),1,fp2))
		{
			s=stud.Roll;
			if(s==r)
			{
				printf("Roll number =%d\n ",stud.Roll);
				printf("Name =%s\n",stud.Name);
				printf("Marks = %f\n",stud.Marks);
			}
		}
		fclose(fp2);
	}
	return 0;
}
int avlrollno(int rno)
{
	FILE *fp;
	int c=0;
	fp=fopen("record","r");
	while(!feof(fp))
	{
		fread(&stud,sizeof(stud),1,fp);
		if(rno==stud.Roll)
		{
			fclose(fp);
			return  1;
		}
	}
	fclose(fp);
	return 0;
}
int deletefile()
{
	FILE *fpo;
	FILE *fpt;
	int r,s;
	printf("enter the roll no you want to delete:");
	scanf("%d",&r);
	if(avlrollno(r)==0)
	{
		printf("roll no %d is not available in the file",r);
	}
	else
	{
		fpo=fopen("record","r");
		fpt=fopen("tempfile","w");
		while(fread(&stud,sizeof(stud),1,fpo))
		{
			s=stud.Roll;
			if(s!=r)
			{
				fwrite(&stud,sizeof(stud),1,fpt);
			}
		}
		fclose(fpo);
		fclose(fpt);
		fpo=fopen("record","w");
		fpt=fopen("tempfile","r");
		while(fread(&stud,sizeof(stud),1,fpt))
		{
			fwrite(&stud,sizeof(stud),1,fpo);
		}
		printf("\n RECORD DELETED.......");
		fclose(fpo);
		fclose(fpt);
	}
	return 0;
}
int update()
{
	int avl;
	FILE *fpt;
	FILE *fpo;
	int s,r,ch;
	printf("Enter roll no to update:");
	scanf("%d",&r);
	avl=avlrollno(r);
	if(avl==0)
	{
		printf("\n%d is not available in the file",r);
	}
	else
	{
		fpo=fopen("record","r");
		fpt=fopen("tempfile","w");
		while(fread(&stud,sizeof(stud),1,fpo))
		{
			s=stud.Roll;
			if(s!=r)
			{
				fwrite(&stud,sizeof(stud),1,fpt);
			}
			else
			{
				printf("\n\t 1. Update Name of Roll No %d",r);
				printf("\n\t 2. Update Mark of Roll No %d",r);
				printf("\n\t 3. Update both name and mark of roll no %d ",r);
				printf("\n\t 4. Exit");
				printf("\n enter your choice:");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						   printf("enter name:");
						   scanf("%s",&stud.Name);
						   break;
					case 2:
						   printf("enter marks:");
						   scanf("%f",&stud.Marks);
						   break;
					case 3:
						   printf("enter name:");
						   scanf("%s",&stud.Name);
						   printf("\nenter marks:");
						   scanf("%f",&stud.Marks);
						   break;
					case 4:
						   return 0;
					default:
						    printf("invalid selection");
					        break;  	  		   
				}
				fwrite(&stud,sizeof(stud),1,fpt);
			}
		}
		fclose(fpo);
		fclose(fpt);
		fpo=fopen("record","w");
		fpt=fopen("tempfile","r");
		while(fread(&stud,sizeof(stud),1,fpt))
		{
			fwrite(&stud,sizeof(stud),1,fpo);
		}
		fclose(fpo);
		fclose(fpt);
		printf("Record updated........................");
	}
	return 0;
}
int sort()
{
	int a[20],count=0,i,j,t,c;
	FILE *fpo;
	fpo=fopen("record","r");
	while(fread(&stud,sizeof(stud),1,fpo))
	{
		a[count]=stud.Roll;
		count++;
	}
	c=count;
	for(i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("Roll No \t Name \t Marks \n\n");
	count=c;
	for(i=0;i<count;i++)
	{
		rewind(fpo);
		while(fread(&stud,sizeof(stud),1,fpo))
		{
			if(a[i]==stud.Roll)
			{
				printf("\n %d\t\t %s \t\t %.2f",stud.Roll,stud.Name,stud.Marks);
			}
		}
	}
	return 0;	
}
int main()
{
	int c,emp;
	do
	{
		printf("\n\tMAIN MENU\n");
		printf("\n\t1.Insert\n\t2.Display\n\t3.Search");
		printf("\n\t4.Delete\n\t5.Update\n\t6.Sort");
		printf("\n\t7.Exit");
		printf("\n\n-------------------------------\n");
		printf("\n Enter Your Choice:");
		scanf("%d",&c);
		printf("\n");
		switch(c)
		{
			case 1:
				  insert();
				  break;
			case 2:
			       emp=empty();
				   if(emp==0)
				   {
				   	printf("\nThe file is empty\n");
				   }
				   else
				   {
				   	disp();
				   	break;
				   }
			case 3:	
				   search();
				   break;
			case 4:
					deletefile();
					break;
			case 5:
					update();		
					break;
			case 6:
				   	emp=empty();
				   	if(emp==0)
				   	{
				   		printf("\n The file isempty");
					}
					else
					{
						sort();
						break;
					}
				   
			case 7:
					printf("\n\t Exiting\n\n\n");
					break;
			default:
			   		printf("your choice is wrong");		
			
		}
		
	}while(c!=7);
	return 0;
}
