#include<stdio.h>
int main()
{
    int m=5;
    scanf("%d",&m);
    int x=0;
    
    while(x<m)
    {
        
            int c=0;
            while(c<m)
            {
            int k=x;
            printf("%d ",k);
            c++;
            while(k>=1)
            {
                k--;
                printf("%d ",k);
                c++;
                
            }
            
            
            while(c<m)
            {
                k++;
                printf("%d ",k);
                c++;
            }
            printf("\n");

            }
        x++;


        
    }
    return 0;
}