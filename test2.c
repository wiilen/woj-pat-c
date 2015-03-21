#include<stdio.h>
#include<string.h>

int main(){
	int len=20;
　　char source3[20]; 
　　char source2[20]; 
　　char target1[20]; 
　　char target2[10]; 
　　int flag = 0, k = 0;
　　for (int i = 0; i < len; i++) {
　　flag = 0;
　　for (int j = 0; j < len; j++) {
　　if (source3[i] == source2[j]) {
　　flag = 1;
　　break;
　　}
　　}
　　if (flag == 0) {
　　target1[k] = source3[i];
　　k++;
　　}
　　}
}
