#include <stdio.h>
#include <stdlib.h>


int main(){
	int n = 5;
	int s = 1;
	for (int i = 1; i <= n; i++){
		s = s*i;
	}
	printf("%d", s);
	system("pause");
	return 0;
}