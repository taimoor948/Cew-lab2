#include <stdio.h>
#include <string.h>

// QUESTION # 01
// ( USING FOR LOOP)

// int main()
// {
//     int n, sum = 0;
//     printf("Enter how many numbers you want:");
//     scanf("\n%d", &n);
//     for (int i = 1; i <= n; i += 2)
//     {
//         sum += i;
//         printf("The odd natural numbers is:%d\n", i);
//     }
//     printf("Sum of odd numbers is:%d\n", sum);
//     return 0;
// }

// (USING WHILE LOOP)
// int main(){
// int sum=0, i = 1;
// int n;
// printf("Enter how many numbers you want:");
// scanf("\n%d", &n);
// while (i<=n)
// {
//     printf("The odd natural numbers is:%d\n", i);
//     sum+=i;
//     i+=2;
    
// }
    

//     printf("The sum of odd natural number is:%d\n", sum);
//     return 0;

// }

// (USING DO-WHILE LOOP)

// int main(){
//     int sum=0,i=1;
//     int n=15;

//     do
//     {   printf("The odd natural numbers is:%d\n", i);
//         i+=2;
//         sum+=i;

//     } while (i<n);
//         printf("The sum of odd natural number is:%d\n", sum);
    
//     return 0;

// }

// QUESTION # 02

// int main() {
//     int i , j , k;
//     for(i=1;i<=5;i++)//rows
//     {

//         for(j=5;j>i;j--)//left side space
//         {
//             printf(" ");
//         }
//         for(k=1;k<=i;k++)//*, middle and right space
//         {
//             printf("*  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// QUESTOIN 03


// int compareStrings(const char str1[], const char str2[]) {
//     int len1 = strlen(str1);
//     int len2 = strlen(str2);

//     if (len1 != len2) {
//         return 0; // The strings have different lengths, so they are not equal.
//     }

//     for (int i = 0; i < len1; i++) {
//         if (str1[i] != str2[i]) {
//             return 0; // The strings are not equal.
//         }
//     }
//     return 1; // The strings are equal.
// }
// int main() {
//     char str1[] = "Hello0";
//     char str2[] = "Hello";

//     if (compareStrings(str1, str2)) {
//         printf("The two strings are equal.\n");
//     } else {
//         printf("The two strings are not equal.\n");
//     }

//     return 0;
// }

//QUESTION 04
// int main() {
//     char sentence[1000];
//     int i;

//     printf("Enter a sentence: ");
//     gets(sentence);

//     for (i = 0; sentence[i] != '\0'; i++) {
//         if (sentence[i] >= 'a' && sentence[i] <= 'z') {
//             // Convert lowercase to uppercase
//             sentence[i] = sentence[i] - 32; // ASCII value difference between lowercase and uppercase
//         } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
//             // Convert uppercase to lowercase
//             sentence[i] = sentence[i] + 32; // ASCII value difference between uppercase and lowercase
//         }
//     }

//     printf("Converted sentence: %s\n", sentence);

//     return 0;
// }

// QUESTION 05


//     int main() {
//     char inputArray[] = "Hello, World!";  // Change this array to your input

//     int characters[256] = {0};  // Assuming ASCII characters

//     printf("Unique characters in the array: ");

//     for (int i = 0; inputArray[i] != '\0'; i++) {
//         int charValue = (int)inputArray[i];
//         if (characters[charValue] == 0) {
//             characters[charValue] = 1;
//             printf("%c ", inputArray[i]);
//         }
//     }

//     printf("\n");

//     return 0;
// }



// Define a structure to represent a distance in inch-feet system
// struct Distance {
//     int feet;
//     int inches;
// };

// // Function to add two distances
// struct Distance addDistances(struct Distance d1, struct Distance d2) {
//     struct Distance sum;

//     sum.inches = d1.inches + d2.inches;
//     sum.feet = d1.feet + d2.feet;

//     // If the sum of inches exceeds 12, convert it to feet
//     if (sum.inches >= 12) {
//         sum.inches -= 12;
//         sum.feet++;
//     }

//     return sum;
// }

// int main() {
//     struct Distance distance1, distance2, result;

//     printf("Enter the first distance (feet inches): ");
//     scanf("%d %d", &distance1.feet, &distance1.inches);

//     printf("Enter the second distance (feet inches): ");
//     scanf("%d %d", &distance2.feet, &distance2.inches);
//   result = addDistances(distance1, distance2);

//     printf("Sum of distances: %d feet %d inches\n", result.feet, result.inches);

//     return 0;
// }