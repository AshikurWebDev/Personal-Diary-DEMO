#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<direct.h>

#define SIZE 25      //Maximum Length of name of folder

void main() {
    int check;
    char *dirname;
    dirname=malloc(SIZE*sizeof(char));
    printf("Enter the folder name: ");
    gets(dirname);
    check = mkdir(dirname);

    if (!check)
        printf("Directory created\n");

    else
    {
        printf("Unable to create directory\n");
        exit(1);  
    } 
    getch();
    system("dir/p");
    getch();
    }