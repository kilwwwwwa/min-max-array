#include <stdio.h>
#include <stdlib.h>

int main()
{
 int min,max,t[10],i,dim;
 printf("entrer les elements de tableau\n");
 for(i=0;i<10;i++){
 scanf("%d",&t[i]);}
 max=t[0];
 min=t[0];
for(i=0;i<10;i++){
 if(t[i]>max)
 {
 max=t[i];}
 if(t[i]<min){
min=t[i];}
 }
printf("le maximum de tableau est : %d",max);
printf("le minimum de tableau est : %d",min);
}
