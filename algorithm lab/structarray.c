//
//  zarrays.c
//  portfolio
//
//  Created by Palacharla, Ashika on 10/9/19.
//  Copyright © 2019 Palacharla, Ashika. All rights reserved.
//

#include "structarray.h"
int structarray(void)
{
    typedef struct language
    {
        char name[50];
        char date[50];
        char creator[50];
        char owner[50];
        char reason[50];
        int usagerank[10];
        /*char ide[100];
        char frameworks[100];*/
        char keycompanies[50];
        char salary[30];
    }LANGUAGE;
    
    int main()
    {
        int i;
        LANGUAGE langArray[10]={
            
            {"Python","1989","Guido van Rossum, CWI","Open Source","Data Science, Stats, Analytics, AI","2","Youtube, Instagram, Pinterest, Mozilla, Spotify","$116,000.00"},
            
            {"JavaScript","1995","Brendan Eich, Netscape","Oracle","Websites, Front and Back End","1","Google(Gmail), Facebook, Youtube","$110,000.00"},
            
            {"Java","Early 1990s","James Gosling, Sun Micro","Oracle","Platform Port(WORA), 3 Billion Devices","3","Amazon, Twitter, Google","$100,000.00"},
            
            {"Swift","2014","Apple","Open Source","Friendly to us Apple iOS development","14","Apple","$115,000.00"},
            
            {"Objective C","Early 1980s","Brad Cox, Stepstone","Open Source","Mac OSX, App code that needs to be ported to and from Apple","13","Apple","$113,000.00"},
            
            {"C++","1979","Bjarne Stoustrup, Bell Labs","Free Software Foundation, LLVM, Microsoft, Intel, Oracle, IBM","Add OOP to C and used in a lot of the same places as C","4","Microsoft, Oracle, Amazon, Adobe","$116,000.00"},
            
            {"C","1972","Dennis Ritchie, Bell Labs","Free Software Foundation, LLVM, Microsoft, Intel, Oracle, IBM","Operating Systems, IDEs, Frameworks","5","Microsoft, Linux Companies, Qualcomm","$105,000.00"},
            
            {"C#","2000","Anders Hejlsberg, Microsoft","Microsoft","Websites, Cool tool for gaming using Unity framework","7","Microsoft","$110,000.00"},
            
            {"Ruby","Midd 1990s","Yukihiro Matsumoto","Open Source, Ruby License","Websites and Apps","11","Airbnb, GitHub","$123,000.00"}
        }
/*
        //Python language
        strcpy(langArray[0].name, "Python");
        strcpy(langArray[0].date, "1989");
        
        for(i=0; i<10; i++)
        {
            printf("%20s%20s\n", "Language", "Birth Date");
            printf("%20s%20s", langArray[i].name, langArray[i].date);
        }
    
        return 0;
    }
    
}
     struct language langArray[0];
     langArray[0]= struct language()
     {
         char *name="Python";
         char *date="1989";
         char creator="Guido van Rossum, CWI";
         char owner= "Open Source";
         char reason="Data Science, Stats, Analytics, AI";
         int usagerank="2"
         char IDE="PyCharm, Eclipse, Visual Studio";
         char frameworks="Django, Pyramid, Tubo Gear";
         char keycompanies="Youtube, Instagram, Pinterest, Mozilla, Spotify";
         char salary="$116,000.00";
     }
     question questArray[10];
     questArray[0]=question(){
     int num=1;
     char question="What is 1+1";
     char choiceA="2";
     char choiceB="4";
     }

}
*/
