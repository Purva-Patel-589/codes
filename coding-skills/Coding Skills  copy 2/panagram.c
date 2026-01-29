 #include <stdio.h> 
#include <ctype.h>  
int main() {    
     char str[200];     
     int freq[26] = {0}, i; 
  
    printf("Enter the string: ");   
      scanf(" %[^\n]", str); 
  
    // Count each alphabet 
    for(i = 0; str[i] != '\0'; i++) {  
            	if(isalpha(str[i])) {         
                     int index = tolower(str[i]) - 'a';       
                        freq[index] = 1; 
	     	} 
    } 
  
    // Check if all letters are present  
       for(i = 0; i < 26; i++) {      
        	if(freq[i] == 0) {        
                  printf("Not a Pangram\n");       
                     return 0; 
	     	} 
    } 
    printf("The string is a Pangram\n");   
      return 0; 
} 
