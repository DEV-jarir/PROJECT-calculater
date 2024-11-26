#include<stdio.h>
float add(float num,float num1){
	return num + num1;
}
float sub(float num,float num1){
	return num-num1;
}
float multi(float num,float num1){
	return num*num1;
}
float div(float num,float num1){
	return num/num1;
}
float modu(float num,float num1){
	return num/num1;
}
float sum5(float num,float num1){
	return num/num1;
}

main(){
	float a,b;
	int choice;
	printf("\t\t\t\t\t\t\tCALCULATER\n");
	printf("\t\t\t\t\t\t\tPress 1 for +\n\t\t\t\t\t\t\tPress 2 for -\n\t\t\t\t\t\t\tPress 3 for *\n\t\t\t\t\t\t\tPress 4 for/ \n\t\t\t\t\t\t\tPress 5 for %%\n\t\t\t\t\t\t\tPress 0 for the exit\n");
	printf("Select your choice: ");
	scanf("%d",&choice);
	
	if(choice<=5 && choice>0){
	printf("\nEnter First Number: ");
	scanf("%f",&a);
	printf("Enter Second Number: ");
	scanf("%f",&b);
}
	else if (choice==0){
		printf("Exciting..");
	}
	else {
		printf("Invalid Value");
	}

       

	
	switch (choice){
		case 1:printf("Addition of %.2f + %.2f=%.2f ",a,b,add(a,b));
		break;
		
		case 2:	printf("Subtraction of %.2f - %.2f=%.2f ",a,b,sub(a,b));
		break;
		
		case 3:	printf("Multiplication of %.2f * %.2f=%.2f ",a,b,multi(a,b));
		break;
		
		case 4:	printf("Division of %.2f / %.2f=%.2f ",a,b,div(a,b));
		break;
		
		case 5:	printf("Modulo of %.2f %% %.2f=%.2f ",modu(a,b));
		break;
		
	    }
	    printf("\n\n");
	    

}







