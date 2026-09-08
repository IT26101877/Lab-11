#include<stdio.h>
typedef struct{
	char name[50];
	int ratings[5];
}movie_t;

void average_rating(movie_t m);//calculating the average

int main(){
	movie_t m;
        //Get the name of the movie
	printf("Enter the name of the movie: ");
	scanf(" %49[^\n]",m.name);
	for(int i = 0;i<5;i++){   //get the ratings
		printf("Rating %d: ",i+1);
		scanf(" %d",&m.ratings[i]);//even thougth ratings is an array, m[i].ratings is anindividual character
	}
	average_rating(m); //pass the struct to the function
	return 0;
}

void average_rating(movie_t m){
	int sum = 0;
	for(int i = 0;i<5;i++){
		sum+=m.ratings[i];  //get the total
	}
	float avg = sum/5.0; //get the average
	printf("The average rating is %f\n",avg);
}
