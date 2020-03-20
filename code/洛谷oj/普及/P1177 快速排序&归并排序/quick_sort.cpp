#include <bits/stdc++.h>
using namespace std;

int read(){  //¿ì¶Á 
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-'){
            f=-1;
        }
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x*10)+(ch-48);
        ch=getchar();
    }
    return x*f;
}

int partition(int num[], int low, int high){
	int flag = num[low];
	int i = low, j = high;
	while(i < j){
		while(i < j && num[j] >= flag)	j--;
		if(i < j)	num[i++] = num[j];
		while(i < j && num[i] <= flag)	i++;
		if(i < j)	num[j--] = num[i];
	}
	num[i] = flag;
	return i;
} 

int Random_Partition(int num[], int p, int q){
	int i = rand()%(q-p) + p;
	int tmp = num[i];
	num[i] = num[p];
	num[p] = tmp;
	return partition(num, p, q);
}

void quicksort(int num[], int low, int high){
	if(low >= high)	return;
	else{
		int mid = Random_Partition(num, low, high);
		quicksort(num, low, mid-1);
		quicksort(num, mid+1, high);
	}
	return;
}

int main(){
	int n, num[100005];
	n = read();
//	scanf("%d", &n);
	for(int i = 0; i < n; i++)	num[i] = read();    //scanf("%d", &num[i]);
	quicksort(num, 0, n-1);
	for(int i = 0; i < n; i++){
		if(i != 0)	printf(" ");
		printf("%d", num[i]);
	}
	return 0;
}
