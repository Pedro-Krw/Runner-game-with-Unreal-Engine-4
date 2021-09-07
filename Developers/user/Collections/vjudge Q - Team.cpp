#include<stdio.h>
// soal Vjudge Team

int main(){
	("input.txt","r",stdin);
	int arr[1000][3];
	int i,x,y,z;
	int line, count=0;
	scanf("%d", &line); // input test case
	for(i=0;i<line;i++){
		scanf("%d %d %d", &x,&y,&z); // input 0 dan 1 sebagai adanya penanda adanya orang atau tidak
		// mengecek apabila ada dari inputan 1 dan 9 itu bisa dibuat team
		if(x+y+z>=2){
			count++;
		}
	}
	printf("%d", count);
}
