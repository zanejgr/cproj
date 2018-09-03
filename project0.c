#include<stdio.h>
#include<string.h>
int main(int argc, char **argv){
	//check arguments
	if(argc > 4){
		printf("ERROR: invalid number of arguments");
		return(1);
	}
	if(strlen(argv[1])!=strlen(argv[2])&&strlen(argv[2])!=1){
		printf("ERROR: At least one argument is invalid");
		printf("%s",strcat(argv[1],strcat(argv[2],argv[3])));
		return(1);
	}	

	//array holds counts of ascii table values
	int counts[255];
	for(int i = 0; i < 255; i++)
		counts[i]=0;

	//iterate over argv to count elems
	for(int i = 0;i<strlen(argv[3]);i++){
		counts[(int)(argv[3][i])]++;
	}	

	for(int i = 0; i < 255; i++)
		printf("%c, %i \n",(char)(i),counts[i]);

}
