#include <stdio.h>

int main(){
	int i = 0;
	while (i < 5) {
  	printf("%d\n", i," a");
  	i++;
	}
	int a = 0;
	do {
  	printf("%d\n", a," b");
  	a++;
	}
	while (i < 5);
	int j;

	for (j = 0; j< 5; j++) {
  	printf("%d\n", j," c");
	}
}
