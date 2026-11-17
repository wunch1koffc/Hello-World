#include <stdio.h>
#include <assert.h>

void printf_char(char *str){
	for(int i = 0;str[i] != '\0';i++){
		putchar(str[i]);
	}
	putchar('\n');
}
int main(int argc, char *argv[]){
	assert(argc > 1);
	printf_char(argv[1]);
	
	return 0;
}
