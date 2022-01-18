//program of assigenment
#include<stdio.h>
main()
{
    char ismorning,ismom,isasleep;
    printf("enter boolean variables");
    scanf("%s %s %s",&ismorning,&ismom,&isasleep);
    if(isasleep)
    printf("false");
    if(ismorning&&ismom || !ismorning )
    printf("true");
    else
    printf("false");
    return 0;
    
    
    
    
}
