#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
char S[10][10];
int F[10][10];
void init(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			F[i][j] = 1; 
		}
	} 
}
int bound(int i, int j){
	if(i < 0 || i >= 8 || j  < 0 || j >= 8)	return 0;
	if(S[i][j] == 'B' || S[i][j] == 'R')	return 0;
	return 1;
}
int main(){
	int a, b;
	init();
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cin >> S[i][j]; 
		}
	} 
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			if(S[i][j] == 'R'){
				F[i][j] = 0;
				for(a = j-1; bound(i,a) == 1; a--){
					S[i][a] = 'X';
					F[i][a] = 0;
				}
				for(b = j+1; bound(i,b) == 1; b++){
					S[i][b] = 'X';
					F[i][b] = 0;
				}
				for(a = i-1; bound(a, j) == 1; a--){
					S[a][j] = 'X';
					F[a][j] = 0;
				} 
				for(b = i+1; bound(b, j) == 1; b++){
					S[b][j] = 'X';
					F[b][j] = 0;
				} 
			} 
			if(S[i][j] == 'B'){
				F[i][j] = 0;
				for(a = i-1, b = j-1; bound(a,b) == 1; a--,b--){
					S[a][b] = 'X';
					F[a][b] = 0;
				}
				for(a = i-1, b = j+1; bound(a,b) == 1; a--,b++){
					S[a][b] = 'X';
					F[a][b] = 0;
				}
				for(a = i+1, b = j-1; bound(a,b) == 1; a++,b--){
					S[a][b] = 'X';
					F[a][b] = 0;
				}
				for(a = i+1, b = j+1; bound(a,b) == 1; a++,b++){
					S[a][b] = 'X';
					F[a][b] = 0;
				}
			} 
		}
	} 
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			printf("%d", F[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
