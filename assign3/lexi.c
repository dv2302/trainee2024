//Write a program to sort an array of strings in lexicographic (dictionary) order,


#include <stdio.h>
#include<string.h>

int main()
{
    char str[5][50],temp[50];
    printf("enter 5 words:");
    for(int i=0;i<5;i++){
        fgets(str[i],sizeof(str[i]),stdin);
    }for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
printf("\n The lexicographical order is \n");
for(int i=0;i<5;i++){
    fputs(str[i],stdout);
}
    return 0;
}


