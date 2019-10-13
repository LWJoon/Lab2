#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int main()
{
	
	void *handle;
	int (*add)(int, int), (*sub)(int, int), (*mul)(int, int), (*div)(int, int);
	char *error;

	handle = dlopen ("./exam1/liboper.so", RTLD_LAZY);
	if(!handle){
		fputs (dlerror(), stderr);
		exit(1);	
	}

	add = dlsym(handle, "add");
	if((error = dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);	
	}

	sub = dlsym(handle, "sub");
	if((error = dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);	
	}

	mul = dlsym(handle, "mul");
	if((error = dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);	
	}

	div = dlsym(handle, "div");
	if((error = dlerror()) != NULL){
		fprintf(stderr, "%s", error);
		exit(1);	
	}

    	

	printf("add(12, 6) : %d\n", (*add)(12, 6));
	printf("sub(12, 6) : %d\n", (*sub)(12, 6));
	printf("mul(12, 6) : %d\n", (*mul)(12, 6));
	printf("div(12, 6) : %d\n", (*div)(12, 6));

	dlclose(handle);

}

	
    	
