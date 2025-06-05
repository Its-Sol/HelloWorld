/*
### **Advanced Projects**
7. **Tic-Tac-Toe Game**
   - Use a `struct` to store the state of the game (e.g., board, player turn).
   - Use pointers to pass the game state to functions for updating and displaying the board.
   - Add functionality to check for a winner or a draw.

   **Skills Learned:**
   - Struct-based program design.
   - Passing structs as function arguments.
   - Using pointers for efficient state management.

---

8. **Simple File Database**
   - Create a program that stores and retrieves information from a file.
   - Use structs to represent records (e.g., employee details, product details).
   - Use pointers to read/write structs to/from a binary file.

   **Skills Learned:**
   - File I/O with structs.
   - Using pointers to write and read structs to/from files.
   - Persistent storage concepts.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortarray(int sort[], int size){
    for (int i = 0; i < size - 1 ; i++){
        for (int j = 0; j < size - 1; j++){
            if (sort[j] > sort[j+1]){
                int temp = sort[j];
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
            }
        }
    }
}

void printarray(int sort[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", sort[i]);
    }
}

int binary_search(int arr[], int first, int last, int target){
while(first<=last){
    int mid = first + (last - first) / 2;
    printf("Result of mid: %d first: %d and last: %d\n", mid, first, last);

    if(arr[mid] == target){
        return mid;
        printf("Final run: %d", mid);
        break;
    }

    if(arr[mid] < target){
    first = mid + 1;
    }else{
        last = mid - 1;
}}
return -1;
}

void flush_input(){
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(){
    char name[25];
    char string[8];
    char add[8] = "charger";
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    const char *cstr;
    char str[50];
    char *endptr;
    long int num;

    binary_search(arr, 0, size - 1, 7);

    // ARRAYS SECTION

    float array[] = {3.4, 6.1, 2.2, 8.9, 12.0}; 
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
    printf("%f\n", array[i]);
    }

    // 2D ARRAYS, good for grids, tables or matrix
    /*float array2d[2][3] = {{1, 2, 3}, {4, 5, 6}, };
    int rows = sizeof(array2d)/sizeof(array2d[0]);
    int columns = sizeof(array2d[0])/sizeof(array2d[0][0]);
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; i++){
            printf("%d\n", array2d[i]);}
    }*/

   // SORTING ARRAYS
    /*int sort[] = {9,1,2,6,4,7,8,0};
    int size = sizeof(sort)/sizeof(sort[0]);
    sortarray(sort[], size);
    printarray(sort[], size);*/

    // STRING ARRAYS
    char cars[][10] = {"Mustang", "Ford", "Corvette"};
    //snprintf(cars[0], 6, %s, variable)
    snprintf(cars[0], 6, "Tesla");
    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }

    if(strncmp(cars[0], "Tesla", 6) == 0){
        printf("These strings are the same\n");
    }else(printf("These strings are not the same.\n"));


    printf("Enter a number\n");
    fgets(str, 2, stdin);
    snprintf(cstr, 2, "%s", str);
    num = strtol(cstr, &endptr, 2);
    if(endptr == cstr){
        printf("No digits found.\n");
    }else if(*endptr != '\0'){
        printf("Invalid character.\n");
    }else{printf("The strtol number is %ld\n", num);}

    // ENUMS
    enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

    enum Day today = Sat;
    if(today == Sun || today == Sat){
        printf("It's the weekend\n");
    }
    else{
        printf("It's not the weekend\n");
    }

    // STRING FUNCTIONS SECTION
    //strcpy(The variable to paste the copied string, String to copy);
    char source[] = "Hello, world!";
    char destination[50]; // Ensure it's large enough to hold the copied string
    printf("Enter a word:\n");
    fgets(string, 50, stdin); 
    string[strlen(string) - 1] = '\0';
    

    printf("%s\n", strlwr(source)); //converts string to lowercase
    printf("%s\n", strupr(add)); //converts string to upercase
    
    int length = strlen(string);
    printf("The length of the entered word is %d\n", length);

    printf("Hello world\n"
    "1\t2\t3\n4\t5\t6\n7\t8\t9\n"
    "\"The more things change the more they stay the same\"\n"
    "How old are you?\n");

    // scanf("%s", &name) Checks for input, but stops at white spaces.
    printf("What's your name?\n");
    fgets(name, 25, stdin); // Also checks for input, but adds a newline to the end
    name[strlen(name) - 1] = '\0'; // Do this and include string.h to remove the newline
    
    printf("Hello %s\n", name);

    return 0;
}
// this is a comment and the start of your legendary journey in C
/*this
is
a multiline
comment
*/


