#include <stdio.h>
int num[100005], result[100005];

void merge(int *num, int start, int end, int *result){
	int left_length = (end - start + 1) / 2 + 1;
	int left_index = start;
	int right_index = start + left_length;
	int result_index = start;
	while(left_index < start + left_length && right_index < end + 1){
		if(num[left_index] > num[right_index])	result[result_index++] = num[right_index++];
		else	result[result_index++] = num[left_index++];
	}
	while(left_index < start + left_length)	result[result_index++] = num[left_index++];
	while(right_index < end + 1)	result[result_index++] = num[right_index++];
}

void merge_sort(int *num, int start, int end, int *result){
	if(end - start == 1){
		int tmp = num[start];
		num[start] = num[end];
		num[end] = tmp;
		return;
	}else if(end == start)	return;
	else{
		merge_sort(num, start, (end - start + 1) / 2, result);
		merge_sort(num, start + (end - start + 1) / 2 + 1, end, result);
		merge(num, start, end, result);
		for(int i = start; i <= end; i++)	num[i] = result[i];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)	scanf("%d", &num[i]);
	merge_sort(num, 0, n-1, result);
	for(int i = 0; i < n; i++){
		if(i != 0)	printf(" ");
		printf("%d", num[i]);
	}
	return 0;
}
