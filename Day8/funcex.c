//Function overlap checker complete code

#include<stdio.h>
int isoverlap(int start1,int end1,int start2,int end2){
    if(start1<=end2 && start2<=end1)
    return 1;
    else
    return 0;
}

int main(){
    int s1,e1,s2,e2;
    printf("Enter interval 1(start end):");
    scanf("%d%d",&s1,&e1);
    printf("Enter interval 2(start end):");
    scanf("%d%d",&s2,&e2);

    if (isoverlap(s1,e1,s2,e2))
    printf("Overlap\n");
    else
    printf("No overlap\n");
    return 0;
}