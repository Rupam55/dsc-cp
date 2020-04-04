#include<stdio.h> 
#include<conio.h> 
void main() {
int arr[10][4],n,temp,awt;
printf("enter the number of process = ");
scanf("%d",&n);
for (int i = 0; i < n; i++){
  printf("enter process batch time for id %d - ",i);
  scanf("%d",&arr[i][1]);
  arr[i][0]=i;
}
for(int i=0;i<n;i++){
  for(int j=0;j<n-i-1;j++){
    if(arr[j][1]>arr[j+1][1]){
      temp=arr[j][1];
      arr[j][1]=arr[j+1][1];
      arr[j+1][1]=temp;
      temp=arr[j][0];
      arr[j][0]=arr[j+1][0];
      arr[j+1][0]=temp;
    }
  }
}
for(int i=0;i<n;i++){
  if(i==0){
    arr[0][2]=arr[0][1];
    arr[0][3]=0;
    awt=0;
  }
  else{
    arr[i][2]=arr[i-1][2]+arr[i][1];
    arr[i][3]=arr[i-1][2];
    awt+=arr[i-1][2];
  }
}
printf("correct order is\n");
printf("p-id\tbatch time\tcompletion time\twaiting time\n");
for (int i = 0; i < n; i++)
{
  printf("%d",arr[i][0]);
  printf("\t");
  printf("%d",arr[i][1]);
  printf("\t\t");
  printf("%d",arr[i][2]);
  printf("\t\t");
  printf("%d",arr[i][3]);
  printf("\n");
}
printf("average waiting time is = %d",awt/n);
}