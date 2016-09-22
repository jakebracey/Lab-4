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
	int file_sel;
	printf("Which file would you like to open:\n");
	scanf("%d",&file_sel);
	if(file_sel<1||file_sel>11){
		while(file_sel<1||file_sel>11){
			printf("Available files are files 1-11\nPlease enter a valid file number:\n");
			scanf("%d, &file_sel");
		}
	}

	}