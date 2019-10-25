//
//  zarrays.c
//  portfolio
//
//  Created by Palacharla, Ashika on 10/9/19.
//  Copyright © 2019 Palacharla, Ashika. All rights reserved.
//
#include "structarray.h"
#include <stdio.h>
#include <string.h>

#define SIZE 10

typedef struct language
{
    char name[100];
    char date[100];
    char creator[100];
    char owner[100];
    char reason[100];
    char usagerank[10];
    /*char ide[100];
     char frameworks[100];*/
    char keycompanies[100];
    char salary[30];
}LANGUAGE;

LANGUAGE langArray[SIZE]=
{
    {"Python","1989","Guido van Rossum, CWI","Open Source","Data Science, Stats, Analytics, AI","2","Youtube, Instagram, Pinterest, Mozilla, Spotify","$116,000.00"},
        
    {"JavaScript","1995","Brendan Eich, Netscape","Oracle","Websites, Front and Back End","1","Google(Gmail), Facebook, Youtube","$110,000.00"},
        
    {"Java","Early 1990s","James Gosling, Sun Micro","Oracle","Platform Port(WORA), 3 Billion Devices","3","Amazon, Twitter, Google","$100,000.00"},
        
    {"Swift","2014","Apple","Open Source","Friendly to us Apple iOS development","14","Apple","$115,000.00"},
        
    {"Objective C","Early 1980s","Brad Cox, Stepstone","Open Source","Mac OSX, App code that needs to be ported to and from Apple","13","Apple","$113,000.00"},
        
    {"C++","1979","Bjarne Stoustrup, Bell Labs","Free Software Foundation, LLVM, Microsoft, Intel, Oracle, IBM","Add OOP to C and used in a lot of the same places as C","4","Microsoft, Oracle, Amazon, Adobe","$116,000.00"},
        
    {"C","1972","Dennis Ritchie, Bell Labs","Free Software Foundation, LLVM, Microsoft, Intel, Oracle, IBM","Operating Systems, IDEs, Frameworks","5","Microsoft, Linux Companies, Qualcomm","$105,000.00"},
        
    {"C#","2000","Anders Hejlsberg, Microsoft","Microsoft","Websites, Cool tool for gaming using Unity framework","7","Microsoft","$110,000.00"},
        
    {"Ruby","Midd 1990s","Yukihiro Matsumoto","Open Source, Ruby License","Websites and Apps","11","Airbnb, GitHub","$123,000.00"}
};

int searcharray(void){
    
    char name[80];
    printf("Enter Language Name: %s\n", name);
    scanf("%s", name);
    for (int i = 0; i<SIZE; i++){
        if(strcmp(langArray[i].name, name)!=0){
            printf("%20s%20s%20s\n", langArray[i].name, langArray[i].date, langArray[i].creator);
        }
    }
    
    return 0;
    
}

int structarray(void)
{
   
    char input;
    int endOrNo, validInput;
    endOrNo = 0;
    char message[80];
    
    while (endOrNo == 0) {
        validInput = 0;
        printf("------------------------------------------\n");
        printf("             ~ Menu Selection ~           \n");
        printf("------------------------------------------\n");
        
        printf("Options:\n");
        printf("A. Language\n");
        printf("B. Creator\n");
        printf("C. Owner\n");
        printf("D. Reasons for Demand\n");
        printf("E. IDE\n");
        printf("F. Frameworks\n");
        printf("G. Key Companies\n");
        printf("------------------------------------------\n");
        printf("Select Option: ");
        while (validInput == 0) {
            scanf("%c", &input);
            switch(input) {
                case 'a':
                case 'A':
                    validInput = 1;
                    searcharray();
                    
                    
                    
                    
                    
                    break;
                    
                case 'b':
                case 'B':
                    validInput = 2;
                   
                    break;
                    
                case 'c':
                case 'C':
                    validInput = 3;
                    
                    break;
                    
                case 'd':
                case 'D':
                    validInput = 4;
                    
                    break;
                    
                case 'e':
                case 'E':
                    validInput = 5;
                    
                    break;
                    
                case 'f':
                case 'F':
                    validInput = 6;
                    
                    break;
                    
                case 'g':
                case 'G':
                    validInput = 7;
                    
                    break;
                    
                case 0:
                    validInput = 99;
                    endOrNo = 1;
                    break;
                    
                default:
                    printf("invalid input, try again\n");
                    break;
                    
            }
            
        printf("%20s%20s\n", "Language", "Birth Date");
           int i;
           for(i=0; i<10; i++)
           {
               printf("%20s%20s%20s\n", langArray[i].name, langArray[i].date, langArray[i].creator);
           }
           
        }
    }

    /*
    printf("");
    scanf("");
        while (( = getchar()) != '\n');
        = getchar();
        switch (answer1) {
            case 'python':
            case 'Python':
                printf ("");
                break;
            case 'javascript':
            case 'JavaScript':
                printf ("");
                break;
            case 'Java':
            case 'java':
                printf ("");
                break;
            case 'Swift':
            case 'swift':
                printf ("");
                break;
            case 'ObjectiveC':
            case 'Objective C':
            case 'objectivec':
                printf ("");
                break;
            case 'C++':
            case 'c++':
                printf ("");
                break;
            case 'C':
            case 'c':
                printf ("");
                break;
            case 'C#':
            case 'c#':
                printf ("");
                break;
            case 'Ruby':
            case 'ruby':
                printf ("");
                break;
        }
    */
    return 0;
}
