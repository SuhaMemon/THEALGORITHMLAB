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
        
    //Figure out what's missing! (Hint: check the spreadsheet on Excel)
        
    {"C","1972","Dennis Ritchie, Bell Labs","Free Software Foundation, LLVM, Microsoft, Intel, Oracle, IBM","Operating Systems, IDEs, Frameworks","5","Microsoft, Linux Companies, Qualcomm","$105,000.00"},
        
    {"C#","2000","Anders Hejlsberg, Microsoft","Microsoft","Websites, Cool tool for gaming using Unity framework","7","Microsoft","$110,000.00"},
        
    {"Ruby","Midd 1990s","Yukihiro Matsumoto","Open Source, Ruby License","Websites and Apps","11","Airbnb, GitHub","$123,000.00"}
};

int mainarray (void){
//Figure out how to print the entire table (Hint: run the other searcharray functions and find how it is able to print structs that match the user input)
        return 0;
    }

int searcharrayname(void){
    char name[80];
    printf("Enter Language Name: %s", name);
    scanf("%s", name);
    for (int i = 0; i<SIZE; i++){
        if(strstr(langArray[i].name, name)!=0){
          printf("%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n", "Language: ", langArray[i].name, "Birth Date: ", langArray[i].date, "Creator: ",langArray[i].creator, "Owner: ",langArray[i].owner, "Reason for Demand: ", langArray[i].reason, "GitHub Usage Ranking: ",langArray[i].usagerank, "Key Companies: ",langArray[i].keycompanies, "Average Salary: ", langArray[i].salary);
            printf("\n");
        }
    }
    return 0;
}

int searcharraycreator(void){
    char name[80];
    printf("Enter Creator Name: %s", name);
    scanf("%s", name);
    for (int i = 0; i<SIZE; i++){
        if(strstr(langArray[i].creator, name)!=0){
            //find out how to print the Structs that match the user input (Hint: do this after you figure out the mainarray function)
        }
    }
    return 0;
}

int searcharrayowner(void){
    //Figure out how to search for the Owner Name (Hint: Check the previous searcharray functions and the variables)
    return 0;
}

int searcharrayreasons(void){
    char name[80];
    printf("Enter Reasons for Demand: %s", name);
    scanf("%s", name);
    for (int i = 0; i<SIZE; i++){
        if(strstr(langArray[i].reason, name)!=0){
            printf("%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n", "Language: ", langArray[i].name, "Birth Date: ", langArray[i].date, "Creator: ",langArray[i].creator, "Owner: ",langArray[i].owner, "Reason for Demand: ", langArray[i].reason, "GitHub Usage Ranking: ",langArray[i].usagerank, "Key Companies: ",langArray[i].keycompanies, "Average Salary: ", langArray[i].salary);
              printf("\n");
        }
    }
    return 0;
}

int searcharraycompanies(void){
    char name[80];
    printf("Enter Key Companies' Names: %s", name);
    scanf("%s", name);
    for (int i = 0; i<SIZE; i++){
        if(strstr(langArray[i].keycompanies, name)!=0){
            printf("%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n%30s%-50s\n", "Language: ", langArray[i].name, "Birth Date: ", langArray[i].date, "Creator: ",langArray[i].creator, "Owner: ",langArray[i].owner, "Reason for Demand: ", langArray[i].reason, "GitHub Usage Ranking: ",langArray[i].usagerank, "Key Companies: ",langArray[i].keycompanies, "Average Salary: ", langArray[i].salary);
              printf("\n");
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
        printf("--------------------------------------------\n");
        printf("             ~ Menu Selection ~             \n");
        printf("--------------------------------------------\n");
        printf("Options:\n");
        printf("A. Language\n");
        printf("B. Creator\n");
        printf("C. Owner\n");
        printf("D. Reasons for Demand\n");
        printf("E. Key Companies\n");
        printf("F. Print Entire Table\n");
        printf("--------------------------------------------\n");
        printf("Select Option: ");
        while (validInput == 0) {
            scanf("%c", &input);
            switch(input) {
                case 'a':
                case 'A':
                    validInput = 1;
                    searcharrayname();
                    break;
                    
                case 'b':
                case 'B':
                    validInput = 2;
                    searcharraycreator();
                    break;
                    
                case 'c':
                case 'C':
                    validInput = 3;
                    searcharrayowner();
                    break;
                    
                case 'd':
                case 'D':
                    validInput = 4;
                    searcharrayreasons();
                    break;
                    
                case 'e':
                case 'E':
                    validInput = 7;
                    searcharraycompanies();
                    break;
                    
                case 'f':
                case 'F':
                    validInput=8;
                    mainarray();
                    break;
                    
                case 0:
                    validInput = 99;
                    endOrNo = 1;
                    break;
                    
            }
        }
    }
    return 0;
}
