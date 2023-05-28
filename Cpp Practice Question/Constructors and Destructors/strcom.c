
#include <stdio.h>
#include <string.h>
  
int main()
{
    
    // declaring two same string
    char first_str[] = "anshu";
    char second_str[] = "dhakre";
  
    // printing the strings
    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);
  
    // printing the return value of the strcmp()
    printf("Return value of strcmp(): %d",
           strcmp(first_str, second_str));
  
    return 0;
}