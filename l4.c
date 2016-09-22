/*
 ============================================================================
 Name        : L4.c
 Author      : Jacob Bracey
 Description : ECE 3220: Lab 4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int *load_array(char* file,int* length);


double mean(int[]);

int main(void) {
	int file_sel;
	char file_name[16];
	printf("Which file would you like to open(ex. 1, 10, etc.:\n");
	scanf("%d",&file_sel);
	if(file_sel<1||file_sel>11){
		while(file_sel<1||file_sel>11){
			printf("Available files are files 01-11\nPlease enter a valid file number:\n");
			scanf("%d, &file_sel");
		}
	}
	if(file_sel<10){
	sprintf(file_name,"Raw_data_0%d",file_sel);
	}
	else{
	sprintf(file_name,"Raw_data_%d",file_sel);	
	}


}

<<<<<<< HEAD
int *load_array(char* file,int* length){
	FILE* fp=fopen(file,"r");
	//opens the given input file for reading
	
	if(fp==NULL){//making sure the input file opens correctly
		printf("Error opening input file");
		return 0;
		//terminates program
		}
	
	fscanf(fp, "%d %d",);
}
=======
double mean(int* array, length);
{
	int i=0;
	int add=0;
	double mean=0;
	for(i=0, i<length, i++)
	{
		add+=array[i];
	}
	mean=(double)add / length;
	return mean;
}


>>>>>>> b6efc6ab953315610a0d7f01c81a267afa53ad2f
