#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int i,j,n,count=0,x=0,y=0;
	char a[100],w[20];
	//gets(a);
	printf("Enter the the scentence in the array : ");
	scanf("%[^\n]s",&a);
	//printf("%s",a);
	printf("Enter the word : ");
	scanf("%s",&w);
	n=strlen(w);
	i=0;
	j=0;
	while(a[i]!='\0'){
		count=0;
		for(j=0;j<n;j++){
			if(w[j]<='Z'&& w[j]>='A'){
				y=32;
			}
			else if(w[j]<='z'&& w[j]>='a'){
				y=-32;
			}
			if(a[i]==w[j]||a[i]==w[j]+y){
				i++;
				//j++;
				count++;
				if(count==n){
					for(y=i-n;y<=i;y++){
						if(a[y]<='z'&&a[y]>='a'){
							a[y]=a[y]-32;
						}
					}
					break;
				}
			}
			else{
				i++;
				break;
			}
		}
		if(count==n){
			x++;
		}
	}
	printf("%d\n",count);
	printf("the given word repeats %d times\n",x);
	puts(a);
}
