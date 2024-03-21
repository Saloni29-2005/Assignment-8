#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenateStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    char* result = (char*)malloc(len1 + len2 + 1); // +1 for null terminator
    
    strcpy(result, str1);
    strcat(result, str2);
    
    return result;
}

int main() {
    int len1, len2;
    printf("Enter the length of first string: ");
    scanf("%d", &len1);
    
    char* str1 = (char*)malloc(len1 + 1); // +1 for null terminator
    
    printf("Enter the string: ");
    scanf("%s", str1);
    
    printf("Enter the length of second string: ");
    scanf("%d", &len2);
    
    char* str2 = (char*)malloc(len2 + 1); // +1 for null terminator
    
    
    printf("Enter the string: ");
    scanf("%s", str2);
    
    char* result = concatenateStrings(str1, str2);
    printf("%s\n", result);
    
    
    free(str1);
    free(str2);
    free(result);
    
    return 0;
}