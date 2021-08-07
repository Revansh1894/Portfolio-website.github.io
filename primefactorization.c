#include<stdio.h>
#include<math.h>
int main()
{
   /* int n,i,j,p,k,a;
    printf("enter a number : ");
    scanf("%d",&n);
    k=n;
 	for (i=2;i<n;i++){
 	//	n=k;
 		a=pow(i,0.5)
 		for(j=2;j<a;j++){
 			if(i%j==0){
 			printf("");	
			 }
		 }
		 if(j>i){
		 	p=i;
		 }
		 //while(n%p==0){
		 	printf("%d ",p);
		 //	n=n/p;
		 }
	 }   
//}*/
	 int i,j,n,p,k;
	 float a;
	 printf("enter a number : ");
	 scanf("%d",&n);
	 k=n;
	 for(i=2;i<=k;i++){
	 	n=k;
		a=pow(i,0.5);
	 	for(j=2;j<=a;j++){
	 		if(i%j==0)
	 		{
	 			//printf("");
	 			break;
			}
		 }
		 if(j>a){
		 	p=i;
		 //	printf("%d ",p);
		  while(n%p==0){
		 	printf("%d ",p);
		 	n=n/p;
		 }
		 }
		
	 }
	 return 0;
}
