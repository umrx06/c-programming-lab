#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3,m4,m5,result;
    printf("Please enter the five marks (with comas)\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    result=(m1+m2+m3+m4+m5)/5;


    if(result>=90){
    printf("Grade A\n");}
    else if(result>=75){
    printf("Grade b\n");}
    else if(result>=60){
    printf("Grade C\n");}
    else if(result>=50){
    printf("Grade D\n");}

    else{printf("Grade F\n");}
    return 0;
}
