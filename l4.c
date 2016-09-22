/*
 ============================================================================
 Name        : L4.c
 Author      : Jacob Bracey
 Description : ECE 3220: Lab 4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("In text editor");
	int file_sel;
	char file_name[16];
	printf("In web");
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
