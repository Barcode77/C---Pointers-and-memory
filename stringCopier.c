#include<stdio.h>

void copy(char* dst, char* src) {
    // Empty while loop for traversing the string
    while (*src != '\0') {
        // Copy the character from src to dst
        *dst = *src;
        
        // Move to the next character in src
        src++;
        
        // Move to the next available space in dst
        dst++;
    }
    
    // Terminate the copied string
    *dst = '\0';
}

int main() {
    char srcString[] = "Hello, world!";
    
    // Determine the length of the source string
    int srcLength = 0;
    while (srcString[srcLength] != '\0') {
        srcLength++;
    }
    
    // Create a destination string with the same length as srcString
    char dstString[srcLength + 1]; // +1 for the null terminator
    
    // Copy the source string to the destination string
    copy(dstString, srcString);
    
    // Print the destination string
    printf("Copied string: %s\n", dstString);
    
    return 0;
}
