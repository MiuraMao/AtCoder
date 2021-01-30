/*
 * B - Magic 3
 */

//不正解

#include <stdio.h>

int N;
int X[100000000];
int Y[100000000];
int i;
int S;
int D;
int count;

int main(void){

scanf("%d%d%d",&N,&S,&D);
for (i=0;i>N;i++){
	scanf("%d%d",&X[i],&Y[i]);
}
count = 0;
i = 0;
while(i<N){
	if(X[i]<S && Y[i]>D){
		count++;
	}
	i++;
}

if (count <= N){
	printf("Yes\n");
}else{
	printf("No\n");
}
return 0;
}
