#include<stdio.h>
#include<string.h>
typedef struct{
	char name[35];
	char author[35];
	int nop;
	
}Book_t;
Book_t b;

void printing_outputs(Book_t c);
int main(){
	printf("Enter the name of the book: ");
	fgets(b.name, sizeof(b.name) , stdin);
	b.name[strcspn(b.name,"\n")] = '\0';

	printf("Enter the name of the author: ");
	fgets(b.author,sizeof(b.author),stdin);
	b.author[strcspn(b.author, "\n")]='\0';

	printf("Enter the number of pages: ");
	scanf("%d",&b.nop);
	
	printing_outputs(b);
	return 0;
}

void printing_outputs(Book_t c){
	printf(" Name of the book: %s\n",c.name);
	printf(" Name of the book: %s\n",c.author);
	printf(" Number of pages: %d\n",c.nop);
	} 
