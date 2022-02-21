#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int* my_range(int param_1, int param_2) {
    
    int *arr;
    int cnt = 0;
    arr=(int*)malloc((param_2 - param_1)*sizeof(int));
    

	for (int i = param_1; i < param_2; i++) {
		arr[cnt] = i;
		cnt++;
	}

	return arr;
}


int main() {

	int a = 7;
	int b = 10;	
	
	my_range(a, b);
	return 0;

}