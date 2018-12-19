/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>
#include "stdio.h"

 void trim(const char* source, char* trimmed_string)
 {
   if (strcmp(source,"")==0) {
    strcpy(trimmed_string,"");
   }
   else{
     strcpy(trimmed_string,source);
     int count=0;
     int max=strlen(source)-1;
     while (source[count]==' ') {
       count++;
     }
     for (int i = 0; i < max; i++) {
       trimmed_string[i]=source[count];
       count++;
     }



     max=strlen(trimmed_string);
     for (int i = 0; i < max; i++) {
       if (trimmed_string[i]==' ') {
         trimmed_string[i]='\0';
       }
     }
   }




 }
