#include <stdio.h>
#include <math.h>

int main()
{
    int z,y,a,b;
    float t;
    printf("z=");
    scanf("%d",&z);
    printf("y=");
    scanf("%d",&y);
    b=z-2*y;
    if(b!=0){
        a=3*(y/b);
        if(a>0){
            t=sqrt(a)-y*z;
            printf("%f",t); 
        }
        else
        {
            printf("Помилка"); 
        }
    }
    else
    {
       printf("Помилка"); 
    }
    return 0;
}

