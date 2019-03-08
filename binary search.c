#include<stdio.h>
main()
{
int arr[20],n,first,last,mid,i,search;
printf("enter the number of element");
scanf("%d",&n);
printf("enter the array element");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter search element");
scanf("%d",&search);
first=0;
last=n-1;
mid=(first+last)/2;
while(first<=last)
{
if(arr[mid]<search)
{
first=mid+1;

}
else
    if(arr[mid]==search)
{
    printf("%d found at location %d/n",search,mid+1);
    break;
}
else
    last=mid-1;
    mid=(first+last)/2;
}
if(first>last)
{
    printf("not found %d is not present in list/n",search);
    return 0;
}
}
