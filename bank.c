#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
 int main()
{
	char x[20];
	int y,z,a,b,c,d,f,l,k,t=0,i,m;
	printf("Enter the Account Number");
	scanf("%[^\n]",&x);
	y=strlen(x);
	if(16>=y>=12 && isdigit('x'))
	{
	printf("Enter the Account balance");
	scanf("%d",&f);
     }
else
{
	printf("Your Account number is incorrect");
	}
printf("Enter the Total No. of employee you want to give salary, (Max 100)");
scanf("%d",&z);

if(0<z<=100)
{
	printf("Salary of Manager is 50000 \nSalary of Developer is 40000 \nSalary of worker is 25000 ");
}
	else
	{
		printf("you are out of limit");

   }
	printf("Enter number of Manager");
	scanf("%d",&a);
	printf("Enter number of Developer");
	scanf("%d",&b);
	printf("Enter number of worker");
	scanf("%d",&c);
	if(a+b+c<=100)
	{
		t=(50000*a)+(40000*b)+(25000*c);
		printf("Total amount you have given is Rs. %d",t);
	}
	else
	{
		printf("You are out of limit");

	}

	if(t>f)
	{
		printf("You don't have sufficient balance in your account ");
		d=t-f;
    printf("You have Rs. %d ",d,"less in your account");
	}
	else
		{
        l=f-t;
        printf("You have Rs. %d ",l,"left in your account");
        printf("Salary will be credited to employees account");
    }

return 0;
}
