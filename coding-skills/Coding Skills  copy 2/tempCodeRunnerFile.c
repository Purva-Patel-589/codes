#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
 
int main() {   
    char str[100];    
    int freq[256] = {0};    
    int i, oddCount = 0; 
 
    printf("Enter the string: ");    
     fgets(str, sizeof(str), stdin);     
     str[strcspn(str, "\n")] = '\0';     
      for(i = 0; str[i] != '\0'; i++) {         
        if (!isspace(str[i])) {            
             freq[(int)str[i]]++; 
        } 
    } 
 
 
    for(i = 0; i < 256; i++) {       
          if(freq[i] % 2 != 0)          
             oddCount++; 
    } 
 
    if(oddCount <= 1)         
    printf("The string CAN be rearranged into a palindrome.\n");  
       else        
        printf("The string CANNOT be rearranged into a palindrome.\n"); 
    int minRemovals = (oddCount > 0) ? oddCount - 1 : 0;    
     printf("Minimum character removals needed: %d\n", minRemovals); 
 
    return 0; 
} 
