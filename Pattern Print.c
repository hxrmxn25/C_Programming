#include <stdio.h>

int main()
{
    int choice;

    do {
        printf("\n============================================\n");
        printf("         C PATTERN GENERATOR MENU          \n");
        printf("============================================\n");
        printf(" 1. Rectangle\n");
        printf(" 2. Odd Numbered Square\n");
        printf(" 3. Square\n");
        printf(" 4. Number Square Type 1\n");
        printf(" 5. Number Square Type 2\n");
        printf(" 6. Alphabetical Square Type 1\n");
        printf(" 7. Alphabetical Square Type 2\n");
        printf(" 8. Star Triangle Type 1\n");
        printf(" 9. Numbered Triangle Type 1\n");
        printf("10. Numbered Triangle Type 2\n");
        printf("11. Alphabet Triangle Type 1\n");
        printf("12. Alphabet Triangle Type 2\n");
        printf("13. Alphabet + Numbered Triangle\n");
        printf("14. Ulta (Flip Vertical Upward) Star Triangle\n");
        printf("15. Ulta Numbered Triangle Type 1\n");
        printf("16. Ulta Numbered Triangle Type 2\n");
        printf("17. Ulta Alphabet Triangle Type 1\n");
        printf("18. Ulta Alphabet Triangle Type 2\n");
        printf("19. Odd Numbered Triangle\n");
        printf("20. Floyd's Triangle\n");
        printf("21. Floyd's Square\n");
        printf("22. 0 and 1s Triangle\n");
        printf("23. Star Plus Symbol\n");
        printf("24. Star Cross Symbol\n");
        printf("25. Hollow Rectangle\n");
        printf("26. Star Triangle Inverted M1\n");
        printf("27. Star Triangle Inverted M2\n");
        printf("28. Numbered Inverted Triangle\n");
        printf("29. Rhombus\n");
        printf("30. Pyramid M1\n");
        printf("31. Pyramid M2 (Variable Tracking)\n");
        printf("32. Number Pyramid Palindrome\n");
        printf("33. Alphabet Pyramid Palindrome\n");
        printf("34. Star Diamond M1\n");
        printf("35. Star Diamond M2 (Conditionals)\n");
        printf("36. Star Bridge\n");
        printf("37. Numbered Bridge Type 1\n");
        printf("38. Numbered Bridge Type 2\n");
        printf("39. Alphabetical Bridge\n");
        printf("40. Basic Number Loop Type 1\n");
        printf("41. Number Loop Type 2\n");
        printf("42. Inverted Classic Zoom (1 at Border)\n");
        printf("43. The Classic Zoom\n");
        printf(" 0. Exit Program\n");
        printf("============================================\n");
        printf("Enter your choice (0-43): ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: {
                // rectangle
                int m;
                printf("enter number of rows :");
                scanf("%d",&m);
                int n;
                printf("enter number of columns :");
                scanf("%d",&n);
                // NESTED LOOPS 
                for (int i=1;i<=m;i++){
                    for (int j=1;j<=n;j++){
                        printf("* ");
                    }
                    printf("\n");
                }
                break;
            }

            case 2: {
                //odd numbered square 
                int n;
                printf("enter side of odd numbered square:");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    int a = 1;      // Put a=2 to get even numbered square
                    for (int j=1;j<=n;j++){  
                    printf("%d ",a);
                    a=a+2;
                    }
                    printf("\n");
                } 
                break;
            }

            case 3: {
                // square
                int n;
                printf("enter side of square :");
                scanf("%d",&n);

                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n;j++){
                        printf("* ");
                    }
                    printf("\n");
                }
                break;
            }

            case 4: {
                // Number square type 1
                int n;
                printf("enter side of numbered square :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n;j++){
                        printf("%d ",j);
                    }
                    printf("\n");
                }
                break;
            }

            case 5: {
                // Number square type 2
                int n;
                printf("enter side of numbered square :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n;j++){
                        printf("%d ",j);
                    }
                    printf("\n");
                }
                break;
            }

            case 6: {
                // alphabetical square type 1
                int n;
                printf("enter side of alphabetical square :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n;j++){
                        printf("%c ",j+64); // implicit type casting
                    }
                    printf("\n");
                }
                break;
            }

            case 7: {
                // alphabetical square type 2
                int n;
                printf("enter side of alphabetical square :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n;j++){
                        printf("%c ",i+64);
                    }
                    printf("\n");
                }
                break;
            }

            case 8: {
                // Star Triangle type 1
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=i;j++){
                        printf("* ");
                    }
                    printf("\n");
                }
                break;
            }

            case 9: {
                // numbered Triangle type 1
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=i;j++){
                        printf("%d ",i);
                    }
                    printf("\n");
                }
                break;
            }

            case 10: {
                // numbered Triangle type 2
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=i;j++){
                        printf("%d ",j);
                    }
                    printf("\n");
                }
                break;
            }

            case 11: {
                // alphabet Triangle type 1
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=i;j++){
                        printf("%c ",j+64); 
                    }
                    printf("\n");
                }
                break;
            }

            case 12: {
                // alphabet Triangle type 2
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=i;j++){
                        printf("%c ",i+64);
                    }
                    printf("\n");
                }
                break;
            }

            case 13: {
                // alphabet + numbered Triangle 
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    if (i%2==0){
                        for (int j=1;j<=i;j++){
                        printf("%c ",j+64);}
                    }
                    
                    else{
                        for (int j=1;j<=i;j++){
                        printf("%d ",j);}
                    } 
                    printf("\n");
                }
                break;
            }

            case 14: {
                // Ulta(flip vertical updward) star Triangle
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n+1-i;j++){
                        printf("* ");
                    }
                    printf("\n");
                }
                break;
            }

            case 15: {
                // Ulta(flip vertical updward) numbered Triangle type 1
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n+1-i;j++){
                        printf("%d ",j);
                    }
                    printf("\n");
                }
                break;
            }

            case 16: {
                // Ulta(flip vertical updward) numbered Triangle type 2
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n+1-i;j++){
                        printf("%d ",i);
                    }
                    printf("\n");
                }
                break;
            }

            case 17: {
                // Ulta(flip vertical updward) alphabet Triangle type 1
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n+1-i;j++){
                        printf("%c ",j+64);
                    }
                    printf("\n");
                }
                break;
            }

            case 18: {
                // Ulta(flip vertical updward) alphabet Triangle type 2
                int n;
                printf("enter value :");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    for (int j=1;j<=n+1-i;j++){
                        printf("%c ",i+64);
                    }
                    printf("\n");
                }
                break;
            }

            case 19: {
                // odd numbered triangle
                int n;
                printf("enter side of odd numbered triangle:");
                scanf("%d",&n);
                for (int i=1;i<=n;i++){
                    int a = 1;      // Put a=2 to get even numbered triangle
                    for (int j=1;j<=i;j++){      // put j<=n+1-i to get ulta of this
                    printf("%d ",a);
                    a=a+2;
                    }
                    printf("\n");
                } 
                break;
            }

            case 20: {
                //floyd's triangle
                int n;
                printf("enter side of floyd triangle:");
                scanf("%d",&n);
                int a = 1;  //declared outside nested loops

                for (int i=1;i<=n;i++){      
                    for (int j=1;j<=i;j++){    // j<=n+1-i for ulta floyd triangle & chnage %d to %3d to give every number 3 spaces of width, to enhance readability          a++; 
                    printf("%d ",a);
                    a++; 
                    }
                      
                    printf("\n");
                } 
                break;
            }

            case 21: {
                //floyd's square
                int n; 
                printf("Enter side of floyd square: "); 
                scanf("%d", &n); 
                
                int a = 1; //declared outside nested loops 
                for (int i=1;i<=n;i++){ 
                    for (int j=1;j<=n;j++){ 
                        printf("%3d ", a); // Changed to %3d to give every number 3 spaces of width, to enhance readability of floyd square
                        a++; 
                    } 
                    printf("\n"); 
                }
                break;
            }

            case 22: {
                // 0 and 1s triangle
                int n;
                printf("enter value :");
                scanf("%d",&n);

                for (int i=1;i<=n;i++){
                    for (int j=1;j<=i;j++){
                        if ((i+j)%2==0) printf("%d ",1);
                        else printf("%d ",0);
                        
                    }
                    printf("\n");
                }
                break;
            }

            case 23: {
                // star plus symbol
                int n;
                printf("enter value here (use an odd number): ");
                scanf("%d", &n);
                
                int midrow = n / 2 + 1;
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n; j++) {
                        if (i == midrow || j == midrow) printf("# ");
                         else 
                            printf("  ");
                    }
                    printf("\n");
                }
                break;
            }

            case 24: {
                //star cross symbol
                int n;
                printf("enter value here (use an odd number): ");
                scanf("%d", &n);
                
                int midrow = n / 2 + 1;
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n; j++) {
                        if (i == j || i+j==n+1) printf("* ");
                         else 
                            printf("  ");
                    }
                    printf("\n");
                }
                break;
            }

            case 25: {
                //hollow rectangle
                int n;
                printf("enter number of rows : ");
                scanf("%d", &n);
                int m;
                printf("enter number of columns : ");
                scanf("%d", &m);
                
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= m; j++) {
                        if (i == 1 || i==n || j==1 || j==m) printf("* ");
                         else 
                            printf("  ");
                    }
                    printf("\n");
                }
                break;
            }

            case 26: {
                //star triangle inverted M1
                int n;
                printf("enter value : ");
                scanf("%d", &n);
                
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n; j++) {
                        // Logic: Print star if sum of row and col is >= n + 1
                        if ((i + j) >= n + 1) {
                            printf("* ");
                        } else {
                            printf("  "); 
                        }
                    }
                    printf("\n");
                }
                break;
            }

            case 27: {
                //star triangle inverted M2
                int n;
                printf("enter value : ");
                scanf("%d", &n);

                for (int i = 1; i <= n; i++) {  // outer loop

                    for (int j = 1; j <= n-i; j++) {  // spaces
                        printf("  ");  
                    }
                    for (int j = 1; j <= i; j++) { // stars
                        printf("* ");  
                    }
                    printf("\n");
                }
                break;
            }

            case 28: {
                //  numbered inverted triangle
                int n;
                printf("enter value : ");
                scanf("%d", &n);

                for (int i = 1; i <= n; i++) {  

                    for (int j = 1; j <= n-i; j++) {  
                        printf("  ");  
                    }
                    for (int j = 1; j <= i; j++) { 
                        printf("%d ",j);   
                        /* 1. put %d, i to get another numbered patter
                           2. put %c, j+64 to get alphabet pattern
                           3. put %c, i+64 to get another alphabet pattern
                           */
                    }
                    printf("\n");
                }
                break;
            }

            case 29: {
                //rhombus
                int n;
                printf("enter value : ");
                scanf("%d", &n);

                for (int i = 1; i <= n; i++) {  // outer loop

                    for (int j = 1; j <= n-i; j++) {  // loop for triangle spaces
                        printf("  ");  
                    }
                    for (int j = 1; j <= n; j++) { // loop for square
                        printf("* ");  
                    }
                    printf("\n");
                }
                break;
            }

            case 30: {
                // pyramid m1
                int n;
                printf("enter value : ");
                scanf("%d", &n);

                for (int i = 1; i <= n; i++) {  // outer loop

                    for (int j = 1; j <= n-i; j++) {  // loop for triangle spaces
                        printf("  ");  
                    }
                    for (int j = 1; j <= 2*i-1; j++) { // loop for another type of special triangle = scalene triangle
                        printf("* ");  
                    }
                    printf("\n");
                }
                break;
            }

            case 31: {
                // pyramid m2 using variable tracking method
                int n;
                printf("enter value : ");
                scanf("%d", &n);

                int nsp =n-1;   // nsp =  no. of spaces
                int nst  =1;   // nst =  no. of stars

                for (int i = 1; i <= n; i++) {  // outer loop

                    for (int j = 1; j <= nsp; j++) { 
                        printf("  ");  
                    }
                    for (int j = 1; j <= nst; j++) { 
                        printf("* ");  
                    }
                    nsp--;  
                    nst = nst+2;
                    printf("\n");
                }
                break;
            }

            case 32: {
                // number pyramid palindrome
                int n;
                printf("enter value : ");
                scanf("%d", &n);

                for (int i = 1; i <= n; i++) {  // outer loop

                    for (int j = 1; j <= n-i; j++) {  // loop for triangle spaces
                        printf(" ");  
                    }
                    for (int j = 1; j <= i; j++) { // loop for  simple numbered triangle 
                        printf("%d",j);  
                    }
                    int a = i-1;
                    for (int k=1;k<=i-1;k++){
                        printf("%d",a);
                        a--;
                    }
                    printf("\n");
                }
                break;
            }

            case 33: {
                // alphabet pyramid palindrome
                int n;
                printf("enter value : ");
                scanf("%d", &n);

                for (int i = 1; i <= n; i++) {  // outer loop

                    for (int j = 1; j <= n-i; j++) {  // loop for triangle spaces
                        printf(" ");  
                    }
                    for (int j = 1; j <= i; j++){ 
                        char ch = (char)j+64;   // loop for  simple alphabet triangle 
                        printf("%c",ch);  
                    }
                    int a = i-1;
                    for (int k=1;k<=i-1;k++){
                        char ch = (char)a+64;
                        printf("%c",ch);
                        a--;
                    }
                    printf("\n");
                }
                break;
            }

            case 34: {
                // star diamond M1....middle row mein stars 2*n -1 honge 
                int n;
                printf("enter value : ");
                scanf("%d", &n);

                int nsp =n-1;   // nsp =  no. of spaces
                int nst  =1;   // nst =  no. of stars

                // upper half = Spaces decrease by 1, Stars increase by 2 per iteration.
                for (int i = 1; i <= n; i++) {  // outer loop

                    for (int j = 1; j <= nsp; j++) { 
                        printf("  ");  
                    }
                    for (int j = 1; j <= nst; j++) { 
                        printf("* ");  
                    }
                    nsp--;  
                    nst = nst+2;
                    printf("\n");
                }

                // lower half = Spaces increase by 1, Stars decrease by 2 per iteration.
                nsp =1;     //Re-assign without 'int'
                nst = 2*n-3;

                for (int i = 1; i <= n-1; i++) {  // upper half se 1 kam row tak loop chalega lower mein

                    for (int j = 1; j <= nsp; j++) { 
                        printf("  ");  
                    }
                    for (int j = 1; j <= nst; j++) { 
                        printf("* ");  
                    }
                    nsp++;  
                    nst = nst- 2;
                    printf("\n");
                }
                break;
            }

            case 35: {
                // STAR DIAMOND M2 USING CONDITIONALS
                int n;
                printf("enter value : ");
                scanf("%d", &n);
                int nsp =n-1;   
                int nst  =1;  

                for (int i = 1; i <= 2*n-1; i++) {  // n =4 hai toh 7  tak loop chalega so that's why 2n-1

                    for (int j = 1; j <= nsp; j++) { 
                        printf("  ");  
                    }
                    for (int j = 1; j <= nst; j++) { 
                        printf("* ");  
                    }
                    if (i<n){
                        nsp--;
                        nst = nst +2;
                    }
                    else {
                        nsp++;
                        nst = nst -2;
                    }
                    printf("\n");
                }
                break;
            }

            case 36: {
                // STAR BRIDGE
                int n;
                printf("Enter value: ");
                scanf("%d", &n);

                int nsp = 1;
                int nst = n;
                for (int i=1;i<=2*n+1;i++){  // loop for top most row 
                    printf("*");
                }
                printf("\n");
                for (int i = 1; i <= n; i++) { 
                    
                    // Left side stars
                    for (int j = 1; j <= nst; j++) {
                        printf("*"); 
                    }
                    
                    // Middle spaces
                    for (int k = 1; k <= nsp; k++) {
                        printf(" "); 
                    }
                    
                    // Right side stars
                    for (int j = 1; j <= nst; j++) {
                        printf("*"); 
                    }
                    
                    nst--;
                    nsp = nsp + 2;
                    printf("\n");
                }
                break;
            }

            case 37: {
                // NUMBERED BRIDGE type 1
                int n;
                printf("Enter value: ");
                scanf("%d", &n);

                for (int i = 1; i <= 2 * n - 1; i++) { 
                    printf("%d", i);
                }
                printf("\n");

                int nst = n-1 ; // Left/Right number count starts at n-1
                int nsp = 1;     // Middle space count starts at 1

                for (int i = 1; i <= n ; i++) { 
                    int a = 1;

                    // Left side numbers
                    for (int j = 1; j <= nst; j++) {
                        printf("%d", a); 
                        a++;
                    }
                    // Middle spaces
                    for (int k = 1; k <= nsp; k++) {
                        printf(" "); 
                        a++;   
                    }
                    // Right side numbers
                    for (int j = 1; j <= nst; j++) {
                        printf("%d", a); 
                        a++;
                    } 
                    nst--;
                    nsp += 2;
                    printf("\n");
                }
                break;
            }

            case 38: {
                // NUMBERED BRIDGE : type 2
                int n = 4; // Example input for total height

                // STEP 1: PRINT THE TOP FULL PALINDROME ROW
                // Left half (1 to n)
                for (int i = 1; i <= n; i++) {
                    printf("%d", i);
                }
                // Right half (n-1 down to 1)
                for (int i = n - 1; i >= 1; i--) {
                    printf("%d", i);
                }
                printf("\n");

                // STEP 2: INITIALIZE BRIDGE VARIABLES
                int nst = n - 1; // Number of digits on each side (starts at 3 for n=4)
                int nsp = 1;     // Number of middle spaces (starts at 1)

                // STEP 3: MAIN LOOP FOR REMAINING (n - 1) ROWS
                for (int i = 1; i <= n - 1; i++) { 
                    
                    // --- 1. Left Side (Counts UP from 1 to nst) ---
                    for (int j = 1; j <= nst; j++) {
                        printf("%d", j);
                    }

                    // --- 2. Middle Gap (Prints nsp spaces) ---
                    for (int k = 1; k <= nsp; k++) {
                        printf(" ");
                    }

                    // --- 3. Right Side (Counts DOWN from nst to 1) ---
                    for (int j = nst; j >= 1; j--) {
                        printf("%d", j);
                    }

                    // --- Update parameters for the next line ---
                    nst--;   // Side walls get 1 digit narrower
                    nsp += 2; // Middle space gap gets 2 spaces wider
                    printf("\n");
                }
                break;
            }

            case 39: {
                // ALPHABETICAL BRIDGE 
                int n;
                printf("Enter value: ");
                scanf("%d", &n);

                for (int i = 1; i <= 2 * n - 1; i++) { 
                    printf("%c", (char)i+64);
                }
                printf("\n");

                int nst = n-1 ; // Left/Right number count starts at n-1
                int nsp = 1;     // Middle space count starts at 1

                for (int i = 1; i <= n ; i++) { 
                    int a = 1;

                    // Left side numbers
                    for (int j = 1; j <= nst; j++) {
                        printf("%c", (char)a+64); 
                        a++;
                    }
                    // Middle spaces
                    for (int k = 1; k <= nsp; k++) {
                        printf(" "); 
                        a++;   
                    }
                    // Right side numbers
                    for (int j = 1; j <= nst; j++) {
                        printf("%c", (char)a+64); 
                        a++;
                    } 
                    nst--;
                    nsp += 2;
                    printf("\n");
                }
                break;
            }

            case 40: {
                // BASIC NUMBER LOOP  TYPE 1
                int n;
                printf("Enter value: ");
                scanf("%d", &n);
                int min = 0;

                for (int i = 1; i <= n; i++) { 
                    for (int j = 1;j<=n;j++){
                        if(i<j) min = i;
                        else min = j;
                        printf("%d",min);
                    } 
                    printf("\n");
                }
                break;
            }

            case 41: {
                //  NUMBER LOOP TYPE 2
                int n;
                printf("Enter value: ");
                scanf("%d", &n);
                int min = 0;

                for (int i = 1; i <= 2*n-1; i++) { 
                    for (int j = 1;j<=2*n-1;j++){
                        if(i<j) min = i;
                        else min = j;
                        printf("%d",min);
                    } 
                    printf("\n");
                }
                break;
            }

            case 42: {
                // INVERTED CLASSIC ZOOM (1 AT BORDER)
                int n;
                printf("Enter value: ");
                scanf("%d", &n);
                int min = 0;

                for (int i = 1; i <= 2*n-1; i++) { 
                    for (int j = 1;j<=2*n-1;j++){

                        int a = i;
                        if (i>n) a = 2*n-i;

                        int b = j;
                        if (b>n) b =2*n-j;

                        if(a<b) min = a;
                        else min = b;
                        printf("%d",min);
                    } 
                    printf("\n");
                }
                break;
            }

            case 43: {
                // THE CLASSIC ZOOM
                int n;
                printf("Enter value: ");
                scanf("%d", &n);
                int min = 0;

                for (int i = 1; i <= 2*n-1; i++) { 
                    for (int j = 1;j<=2*n-1;j++){

                        int a = i;
                        if (i>n) a = 2*n-i;

                        int b = j;
                        if (b>n) b =2*n-j;
                        
                        if(a<b) min = a;
                        else min = b;
                        printf("%d",n+1-min);
                    } 
                    printf("\n");
                }
                break;
            }

            case 0:
                printf("Exiting program... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid number between 0 and 43.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}
