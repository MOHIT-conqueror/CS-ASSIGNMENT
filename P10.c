//copy of string

#include <stdio.h>

void copyString( char strg1, char strg2,ctr) {
   
    strg2[ctr] = strg1[ctr];

   
    if (strg1[ctr] != '\0') {
        copyString(str1,strg2,ctr+1);
    }
}

int main() {
    char strg1[100], strg2[100],result[300];

    printf("Enter a string: ");
    scanf("%s", strg1);

 
   result= copyString(strg1, strg2, 0, 0);

    
    printf("Copied string: %s\n", result);

    return 0;
}

  
