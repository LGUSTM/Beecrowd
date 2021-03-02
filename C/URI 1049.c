#include <stdio.h>
#include <string.h>

int main()
{   
    char input1[20], input2[20], input3[12];
    
    scanf("%s", input1);
    scanf("%s", input2);
    scanf("%s", input3);
    
    if(input1[0] == 'v'){
        if(input2[0] == 'a'){
            if(input3[0] == 'c'){
                printf("aguia\n");
            }
            else printf("pomba\n");
        }
        else{
            if(input3[0] == 'o'){
                printf("homem\n");
            }
            else printf("vaca\n");
        }
    }
    else{
        if(input2[0] == 'i'){
            if(input3[2] == 'm'){
                printf("pulga\n");
            }
            else printf("lagarta\n");
        }
        else{
            if(input3[2] == 'm'){
                printf("sanguessuga\n");
            }
            else printf("minhoca\n");
        }
    }
    
    return 0;
}
