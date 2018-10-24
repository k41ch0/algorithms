#include <stdio.h> 

void main() {
	int val1, val2, val3, max;
	printf("enter 3 of them, stranger:");
	getchar();
	printf("\nwait");
	printf("\nthe path will open to the one who bring holy integer, not else");
	printf("\nnow come:\n");
	scanf("%d", &val1);
	scanf("%d", &val2);
	scanf("%d", &val3);
	if (val1 > val2&&val1 > val3) {
		max = val1;
	}
	else if(val2>val3){
		max = val2;
	}
	else{
		max = val3;
	}
	
	printf("what thou look for have %d eyes\nthe end is nigh\n",max);

	return(0);
}
