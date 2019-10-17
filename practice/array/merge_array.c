#include <stdio.h>
#include <stdlib.h>




	int *arr1, *arr2, *merge;
	int n, m, a;
	int i, j, p, q, k;


void array1()
{
	printf("첫번째 배열의 크기 : ");
	scanf("%d", &n);
	arr1 = (int *)malloc(sizeof(int) *n);
	
	for(i=0; i<n; i++){ 
		scanf("%d", &arr1[i]);
	}

	printf("첫번째 배열확인 : ");
	for(i=0; i<n; i++){ 
		printf("%d", arr1[i]);
	}
	
	
}

void array2()
{
	printf("\n");
	printf("두번째 배열의 크기 : ");
	scanf("%d", &m);
	arr2 = (int *)malloc(sizeof(int) *m);

	for(j=0; j<m; j++){
		scanf("%d", &arr2[j]);
	}

	printf("두번째 배열확인 : ");
	for(j=0; j<m; j++){
		printf("%d", arr2[j]);
	}

	printf("\n");
	
}

void merge_array()
{
	a = m + n;
	
	merge = (int *)malloc(sizeof(int) *a);
	
	for(p=0; p<n+1; p++){
		merge[p]=arr1[p];
	}

	for(q=n,k=0; q<a; q++,k++){
		merge[q]=arr2[k];
	}

	printf("합친 배열 확인 : ");
	
	for(k=0; k<a; k++){
		printf("%d", merge[k]);	
	}
	printf("\n");
	
}

int main(void)
{
	array1();
	array2();
	merge_array();


	free(arr1);
	free(arr2);
}

