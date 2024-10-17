/*AUTHOR:ANTONY GICHOHI MUCHANGI 
DATE : 13/10/2024
REG NO :CT101/G/21609/24*/
//PREPARING MARKS IN 2D ARRAYS
#include <stdio.h> // processor directives scanf(), printf()
int main(){
	int i ,j;
	int marks[2][3] = {{50, 90, 60}, {40, 70, 40}};
	
	for(i=0; i<2;i++) {
		for(j=0; j<3; j++) {
			printf("marks[%d][%d] = %d\n", i, j,marks[i][j]);
		}
	}
	
	return 0;
}