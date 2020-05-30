#include <stdio.h>

int main(){
	
	int *ptr1, *ptr2;
	int apt1= 12; 
	int apt2 = 15;
	
	ptr1 = &apt1;
	ptr2 = &apt2;
	
	
	printf(" %d \n %d", ptr1, ptr2);
	printf("\n\n %d \n %d", apt1, apt2);
	
*ptr1= 100; 	
*ptr2= 200; 


printf("\n\n %d \n %d", apt1, apt2);	
	return 0;
}
