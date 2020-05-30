#include <stdio.h>

int main(){
	
	int *ptr1, *ptr2;
	int apt1 = 12, apt2 = 15;
	
	ptr1 = &apt1;
	ptr2 = &apt2;
	
	printf(" %d \n %d", ptr1, ptr2);  //imprime numero da memoria
	printf("\n\n %d \n %d", apt1, apt2); // imprime numero armazenado no ponteiro
	
	return 0;
}
