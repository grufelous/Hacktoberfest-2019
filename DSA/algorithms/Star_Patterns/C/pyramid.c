/*
	author: sameer saini
	static 5-layer-base-9 pyramid

*/

#include<stdio.h>
int main(){
	int a,b,c;
	for(a=0;a<=4;++a){
		for(c=3;c>=a;--c)
			printf(" ");
		for(b=0;b<=(a*2);++b)
			printf("*");
		printf(" \n");
    }
	return 0;
}
