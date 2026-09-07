#include<stdio.h>

typedef struct{  //define the prototype
	char name[50];
	int id;
	float salary;
}employee_t;

void highest_salary(employee_t e[],int size);

int main(){
	employee_t e[5];
	for(int i=0;i<5;i++){  //get the inputs
		printf("Employee no %d\n",i+1);
		
		printf("Enter the name: ");
		scanf("%49s",e[i].name);

		printf("Enter the ID: ");
		scanf("%d",&e[i].id);

		printf("Enter the salary: ");
		scanf("%f",&e[i].salary);
	}
	highest_salary(e,5);//call the function
	return 0;
}
	
void highest_salary(employee_t e[],int size){  //get the highest salary and the employee who gets it
	int highest = 0;
	for(int i = 1;i<5;i++){
		if (e[i].salary > e[highest].salary) {
    		highest = i;
       		 }
	}
	//print the details
	printf("Highest salary: %s, ID: %d,Salary: %.2f\n",e[highest].name,e[highest].id,e[highest].salary);
}
