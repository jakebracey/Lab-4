/*
 ============================================================================
 Name        : L4.c
 Author      : Jacob Bracey
 Description : ECE 3220: Lab 4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
int *load_array(char* file,int* length);
double getmean(int[], int);
int getmax(int[], int);

int main(void) {
	int file_sel;
	char stat_file[20]
=======
int *load_array(char* file,int* length, int* max_val);


double mean(int[]);

int main(void) {
	int file_sel;
	int* length=malloc(sizeof(int));
	int* max_val=malloc(sizeof(int));
>>>>>>> d76de57169d9e026ff4346e1f234e9d054cebb82
	char file_name[16];
	printf("Which file would you like to open:\n");
	scanf("%d",&file_sel);
	if(file_sel<1||file_sel>11){
		while(file_sel<1||file_sel>11){
			printf("Available files are files 1-11\nPlease enter a valid file number:\n");
			scanf("%d", &file_sel);
		}
	}
	if(file_sel<10){
<<<<<<< HEAD
	sprintf(file_name,"Raw_data_0%d",file_sel);
	sprintf(stat_file,"Statistics_data_0%d", file_sel);
	}
	else{
	sprintf(file_name,"Raw_data_%d",file_sel);	
	sprintf(file_name, "Raw_data_%d", file_sel);
=======
	sprintf(file_name,"Raw_data_0%d.txt",file_sel);
	}
	else{
	sprintf(file_name,"Raw_data_%d.txt",file_sel);	
>>>>>>> d76de57169d9e026ff4346e1f234e9d054cebb82
	}
printf("%s",file_name);

}
<<<<<<< HEAD

int *load_array(char* file,int* length){
=======
int *load_array(char* file,int* length, int* max_val){
>>>>>>> d76de57169d9e026ff4346e1f234e9d054cebb82
	FILE* fp=fopen(file,"r");
	//opens the given input file for reading
	
	if(fp==NULL){//making sure the input file opens correctly
		printf("Error opening input file");
		return 0;
		//terminates program
		}
	
<<<<<<< HEAD
	fscanf(fp, "%d %d",);

}

double getmean(int array[], int length);
=======
	fscanf(fp, "%d %d",length, max_val);
	
	int* array=malloc(sizeof(int)**length);
	//mallocs space for the array
	
	int i=0;
	for(i=0;i<*length;i++){
	//for loop to put the values into the array
		fscanf(fp, "%d", (array+i));
}
}
double getmean(int* array,int *length)
>>>>>>> d76de57169d9e026ff4346e1f234e9d054cebb82
{
	int i=0;
	int add=0;
	double mean=0;
	for(i=0;i<*length;i++)
	{
		add+=array[i];
	}
	mean=(double)add / *length;
	return mean;
}

<<<<<<< HEAD
int getmax(int array[], int length)
{
	int i=0;
	int max=0;
	for(i=0; i<l; i++)
	{
		if(array[i]>max)
			max=array[i];
	}
	return max;
}

int write_stats(double mean, int max, )
{
	FILE* fp=fopen(file,"w");
		//opens the given input file for reading

		if(fp==NULL){//making sure the input file opens correctly
			printf("Error opening input file");
			return 0;
			//terminates program
			}


}
=======
>>>>>>> d76de57169d9e026ff4346e1f234e9d054cebb82
