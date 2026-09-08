#include<stdio.h>
typedef struct{
	char name[50];
	int id;
	int score;
}student_t;

int main(){
	student_t s[2];  //the array of structs
	//Get the inputs
	for(int i = 0;i < 2;i++){   
		printf("Student's name: ");
		scanf(" %49[^\n]",s[i].name);  //If we used scanf to get this we don't need & because name is already the character array

		printf("Student ID: ");
		scanf("%d", &s[i].id);   //Need & because id and score aren't arrays

		printf("Student score: ");
		scanf("%d", &s[i].score);
	}
	//print the inputs
	for(int k = 0;k < 2;k++){
		printf("%s(%d), Score: %d\n",s[k].name,s[k].id,s[k].score);
	}
	return 0;
}
