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
    struct language
    {
        char name[50];
        char date[50];
        char creator[50];
        char owner[50];
        char reason[50];
        int usagerank[10];
        char ide[100];
        char frameworks[100];
        char keycompanies[50];
        char salary[30];
    }
    
    language langArray[1];
    langArray[0]= struct language()
    {
        char name="Python";
        char date="1989";
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
     */
    return 0;
}
