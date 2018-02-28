#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[6][6]={0};
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
        {
            if (i==0)
            {
                arr[i][j]=1;
            }
            else if (i==5)
            {
                arr[i][j]=1;

            }
            else if (i==j)
            {
                arr[i][j]=1;
            }
            else if ((i+j)==5)
            {
                arr[i][j]=1;
            }
            else
                arr[i][j]=-1;
        }
    }
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
        {
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
    system("pause");
}
