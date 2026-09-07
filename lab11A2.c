#include<stdio.h>
typedef struct{  //defining the structs
	float width;
	float length;
	}rectangle_t;

void print_update(rectangle_t *r);  //function prototype

int main(){
	rectangle_t r;
	printf("Enter the width: ");  //get the inputs
	scanf(" %f",&r.width);

	printf("Enter the length: ");
	scanf(" %f",&r.length);

	print_update(&r); //call the function
	return 0;
}
void print_update(rectangle_t *r){  //the function using a pointer to the struct
	printf("Updated Rectangle - Width: %f, Height: %f\n",r->width,r->length);

}

	
