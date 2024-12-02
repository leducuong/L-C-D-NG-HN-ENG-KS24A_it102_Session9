#include <stdio.h>
int main(){
	int arr[100]={1,2,4,5,6};
	int index; //vi tri muon cho them
	printf("nhap so tu can them ");
	scanf ("%d",&index);
	for(int i=5; i>2; i--){
		arr[i]=arr[i-1];
	}
	arr[2] =3;
  for(int i=0;i<5;i++){
 	printf("%d\n",arr[i]);	
  }
}
