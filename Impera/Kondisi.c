#include <stdio.h>

int main(){
	int waktu = 22;
	if (waktu < 10) {
  		printf("Good morning.");
	} else if (waktu < 20) {
  		printf("Good day.");
	} else {
  		printf("Good evening.");
	}
	int time = 20;
	(time < 18) ? printf("\n Good day.") : printf("\n Good evening.");
}

