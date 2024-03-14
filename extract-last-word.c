#include<stdio.h>
#include<string.h>
int main(){
    char str[25],temp[25];
    int i,j,k,count=0;
    printf("Enter stirngs: ");
    gets(str);
        // **************** to count last words *************
        // for(i=strlen(str)-1;i>=0;i--){
        //     if(str[i]!=' '){
        //         count++;
        //     }
        //     else if(str[i]==' ' && str[i+1]!=' '){
        //         break;
        //     }
            
        // }
        // printf("%d ",count);
    
        for(i=strlen(str)-1;i>=0;i--){
            if(str[i]==' '){
                break;
            }
        }
        for(j=0;j<strlen(str)-1;j++){
            temp[j]=str[i];
            i++;
        }
        printf("%s",temp);

    return 0;
}