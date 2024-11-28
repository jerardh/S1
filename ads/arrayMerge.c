#include<stdio.h>
void main(){
    int a1[20],a2[20],a3[40],size1,size2,size3;
    //reading array sizes and elements
    printf("\nEnter the size of first array:");
    scanf("%d",&size1);
    printf("\nEnter the elements of first array\n");
    for(int i=0;i<size1;i++){
        scanf("%d",&a1[i]);
    }
    printf("\nEnter the size of second array:");
    scanf("%d",&size2);
    printf("\nEnter the elements of second array\n");
    for(int i=0;i<size2;i++){
        scanf("%d",&a2[i]);
    }
    for(int i=0;i<size1+size2;i++)
    {
        if(i<size1){
            //copying elements of first array
            a3[i]=a1[i];
        }
        else{
            //copying elements of second array
            a3[i]=a2[i-size1];
        }
        
    }
    printf("\nArray after merging\n");
    for(int i=0;i<size1+size2;i++){
        printf("%d\t",a3[i]);
    }


}