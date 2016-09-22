/*
 ============================================================================
 Name        : L4.c
 Author      : Jacob Bracey
 Description : ECE 3220: Lab 4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int *load_array(char* file,int* length, int* max_val);
double getmean(int[], int*);
int getmax(int[], int*);
void write_stats(char[], int[], int*);

int main(void) {
	int file_sel;
	int* length=malloc(sizeof(int));
	int* max_val=malloc(sizeof(int));
	char file_name[16];
	char stat_file[23];
	char offset_file[19];
	char scaled_file[19];
	int* array;
	int off_or_scale;
	
	//gets file choice from user
	printf("Which file would you like to open:\n");
	scanf("%d",&file_sel);
	if(file_sel<1||file_sel>11){
		while(file_sel<1||file_sel>11){
			printf("Available files are files 1-11\nPlease enter a valid file number:\n");
			scanf("%d", &file_sel);
		}
	}
	
	//actually creates the file names to be used
	if(file_sel<10){
	sprintf(file_name,"Raw_data_0%d.txt",file_sel);
	sprintf(stat_file,"Statistics_data_0%d.txt", file_sel);
	sprintf(offset_file,"Offset_data_0%d.txt", file_sel);
	sprintf(scaled_file,"Scaled_data_0%d.txt", file_sel);
	}
	else{
	sprintf(file_name,"Raw_data_%d.txt",file_sel);
	sprintf(stat_file,"Statistics_data_%d.txt", file_sel);
	sprintf(offset_file,"Offset_data_%d.txt", file_sel);
	sprintf(scaled_file,"Scaled_data_%d.txt", file_sel);
	}
	
	//loads the array from the input file
	array=load_array(file_name, length, max_val);
	
	//part of code to either offset or scale
	printf("Would you like to\n1:offset the original signal\n2:Scale the original signal\n");
	scanf("%d",&off_or_scale);
	if(off_or_scale<1||off_or_scale>11){
		while(off_or_scale<1||off_or_scale>11){
			printf("Invalid choice\nWould you like to\n1:offset the original signal\n2:Scale the original signal\n");
			scanf("%d", &off_or_scale);
		}
	}
	
	
	write_stats(stat_file, array, length); //writes stats to file
}//end of main


int *load_array(char* file,int* length, int* max_val){
	FILE* fp=fopen(file,"r");
	//opens the given input file for reading
	
	if(fp==NULL){//making sure the input file opens correctly
		printf("Error opening input file");
		return 0;
		//terminates program
		}
	
	fscanf(fp, "%d %d",length, max_val);
	
	int* array=malloc(sizeof(int)**length);
	//mallocs space for the array
	
	int i=0;
	for(i=0;i<*length;i++){
	//for loop to put the values into the array
		fscanf(fp, "%d", (array+i));
	}
	return array;
}

double getmean(int array[],int *length)
{
	int i=0;
	int add=0;
	double mean=0;
	for(i=0;i<*length;i++) //adds the values in array
	{
		add+=array[i];
	}
	mean=(double)add / *length; //devides by # of values added
	return mean; //returns average
}

int getmax(int array[], int *length)
{
	int i=0;
	int max=0;
	for(i=0; i<*length; i++) //finds max value in array
	{
		if(array[i]>max)
			max=array[i];
	}
	return max;
}


void write_stats(char* file, int array[], int* length)
{
	FILE* fp=fopen(file,"w");
		//opens the given input file for reading

		if(fp==NULL)//making sure the input file exists
		{
			freopen(file, "w", fp);
		}




	fprintf(fp, "%d %d", getmean(array, length), getmax(array, length)); //writes to file
	return 0;
}
