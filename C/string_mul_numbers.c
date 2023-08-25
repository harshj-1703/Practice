#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[50];
    gets(string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (isdigit(string[i])) {
            char temp[50];
            int index = 0;
            
            for (int j = i; (string[j] != '\0' && isdigit(string[j])); j++) {
                temp[index] = string[j];
                index++;
            }
            temp[index] = '\0';  // Add null terminator to the temp string
            
            int repeatCount = atoi(temp);  // Convert temp to an integer
            
            for (int k = 0; k < repeatCount; k++) {
                printf("%s", string);
            }
        }
    }

    return 0;
}
