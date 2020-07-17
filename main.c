
//Listing 18.7 Comparing parts of strings with strncmp() function; page 466

#include <stdio.h>
#include <string.h>

char str1[] = "The first string";
char str2[] = "The second string";

char dest1[25];
char dest2[25];


int main(void)
{
    size_t n, x;

    printf("\n\n");
    puts(str1);
    puts(str2);

    while(1)
    {
        puts("\nEnter number of characters to compare, 0 to exit.");
        scanf("%zd", &n);

        if(n<=0)
        {
            break;
        }

        x = strncmp(str1, str2, n);

        //reset both string arrays to blanks - ie \0 is the null char
        memset(dest1, '\0', sizeof dest1);
        memset(dest2, '\0', sizeof dest2);

        strncpy(dest1, str1, n);
        strncpy(dest2, str2, n);

        printf("\nComparing %zu characters, strncmp() returns %zu.", n, x );

        if(x == 0) {
            printf("\n*** The strings segments (for a length of %zu) are equivalent ***\n", n);
            printf("\t\t*** str1 segment = \"%s\" and str2 segment = \"%s\"\n", dest1, dest2);
        } else {
            printf("\n*** The strings segments (for a length of %zu) are NOT equal ***\n", n);
            printf("\t\t*** str2 segment = \"%s\" \tand\t str2 segment = \"%s\"\n", dest1, dest2);
        }
    }
    return 0;
}

// REF: https://www.techiedelight.com/implement-substring-function-c/
//#include <stdio.h>
//
//// Function to implement substring function in C
//char* substring(char *destination, const char *source, int beg, int n)
//{
//    // extracts n characters from source string starting from beg index
//    // and copy them into the destination string
//    while (n > 0)
//    {
//        *destination = *(source + beg);
//
//        destination++;
//        source++;
//        n--;
//    }
//
//    // null terminate destination string
//    *destination = '\0';
//
//    // return the destination string
//    return destination;
//}
//
//// Implement substring function in C
//int main()
//{
//    char source[] = "Techie Delight - Coding made easy";
//    char destination[25];
//
//    int start = 7;
//    int len = 7;
//
//    substring(destination, source, start, len);
//
//    printf("%s\n", destination);
//
//    return 0;
//}
//
////another way using strncpy
//#include <stdio.h>
//#include <string.h>
//
//// Function to implement substring function in C
//char* substring(char *destination, const char *source, int beg, int n)
//{
//    // copy n characters from source string starting from
//    // beg index into destination
//    strncpy(destination, (source + beg), n);
//
//    // return the destination string
//    return destination;
//}
//
//// Implement substring function in C
//int main()
//{
//    char source[] = "Techie Delight - Coding made easy";
//    char destination[25];
//
//    int start = 7;
//    int len = 7;
//
//    substring(destination, source, start, len);
//
//    printf("%s\n", destination);
//
//    return 0;
//}
//
