#include<stdio.h>
int main(void){
	int choice,op1,op2,res;
	do{
		printf("0.Exist \n 1.Add \n 2.Sub \n 3.Mul \n 4.Div\n");
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		
		if(choice!=0)
		{
		
		printf("\n Enter two numbers:");
		scanf("%d %d",&op1,&op2);
    	}
		switch(choice)
		{  
			case 1:
				res=op1+op2;
				break;
			case 2:
				res=op1-op2;
				break;
			case 3:
				res=op1*op2;
				break;
			case 4:
				if(op2!=0)
				{
					res=op1/op2;
					break;
				}
				else{
					printf("Divide by zero error\n");
					continue;
				}
		}
	
		if(choice!=0)
		{
		
	    printf("Result=%d \n",res);
	
	}
			
	}while(choice!=0);
	
	return 0;
}
