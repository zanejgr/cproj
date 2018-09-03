#include<stdio.h>
#include<string.h>
int main(int argc, char **argv){
	//check arguments
	if(argc != 4){
		printf("ERROR: invalid number of arguments");
		return(1);
	}
	if(argv[1][2]!='\0'||argv[2][2]!='\0'){
		printf("ERROR: At least one argument is invalid");
		return(1);
	}	

	

}
