// #       #       #       #       
// *       #       #       #       
// *       *       #       #      
// *       *       *       #       
     


#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol){
        printf("No of Row and Col should be same\n");
        return;
    }

    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i<=j){
                printf("#\t");
            }
            else{
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main(){
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter No of Rows : \n");
    scanf("%d",&ivalue1);

    printf("Enter No of Columns : \n");
    scanf("%d",&ivalue2);

    Display(ivalue1,ivalue2);

    return 0;
}