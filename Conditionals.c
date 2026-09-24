#include <stdio.h>

int main()
{
    int choice;

    do {
        printf("\n============================================\n");
        printf("       C CONDITIONALS & SWITCH MENU         \n");
        printf("============================================\n");
        printf("--- 1. SINGLE IF STATEMENTS ---\n");
        printf(" 1. Positive / Negative / Zero Check\n");
        printf(" 2. Divisibility Check (by 5)\n");
        printf(" 3. Greatest of Three Distinct Numbers\n");

        printf("\n--- 2. BASIC IF-ELSE STATEMENTS ---\n");
        printf(" 4. Odd / Even Check\n");
        printf(" 5. Area vs Perimeter\n");
        printf(" 6. Absolute Value - Method 1\n");
        printf(" 7. Absolute Value - Method 2\n");
        printf(" 8. Int Input to Float Half (Typecasting)\n");
        printf(" 9. Check Float is Integer - Method 1\n");
        printf("10. Check Float is Integer - Method 2\n");
        printf("11. 3-Digit Number Check\n");
        printf("12. Divisible by 5 AND 3\n");
        printf("13. Divisible by 5 OR 3\n");
        printf("14. Triangle Validity Check\n");
        printf("15. Leap Year Check\n");
        printf("16. Divisible by 5 or 3 BUT NOT 15\n");

        printf("\n--- 3. NESTED IF-ELSE STATEMENTS ---\n");
        printf("17. Divisible by 5 AND 3 (Nested)\n");
        printf("18. Divisible by 5 OR 3 BUT NOT 15 (Nested)\n");
        printf("19. Greatest of Three Distinct Numbers (Nested)\n");
        printf("20. Youngest of Three Ages (Nested)\n");

        printf("\n--- 4. ELSE-IF LADDERS ---\n");
        printf("21. Cost Price & Selling Price (Profit/Loss)\n");
        printf("22. Marks Grading - Method 1 (Multiple IFs)\n");
        printf("23. Marks Grading - Method 2 (Nested IF-ELSE)\n");
        printf("24. Marks Grading - Method 3 (ELSE-IF Ladder)\n");
        printf("25. Greatest of Three Numbers (Can Be Equal)\n");
        printf("26. Positive / Negative / Zero (Else-If Ladder)\n");
        printf("27. Divisibility by 5 and/or 8\n");

        printf("\n--- 5. NESTED IF-ELSE VARIATIONS ---\n");
        printf("28. Less than 100 -> Even/Odd Check\n");
        
        printf("\n--- 6. SWITCH CASE EXAMPLES ---\n");
        printf("29. Vowel vs Consonant Check\n");
        printf("30. Print Day of the Week\n");
        printf("31. Basic Calculator\n");
        printf("\n--- 7. ADVANCED GEOMETRY & LOGIC ---\n");
        printf("32. Largest of 4 Numbers\n");
        printf("33. Triangle Side Check (Strict Inequality)\n");
        printf("34. Collinear Points Check (Cross-Multiplication)\n");
        printf("35. Point Location (Axis / Origin / Quadrant)\n");
        printf(" 0. Exit Program\n");
        printf("============================================\n");
        printf("Enter your choice (0-35): ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: {
                // POSITIVE / NEGATIVE / ZERO CHECK
                int x;
                printf("Enter a number: ");
                scanf("%d", &x);
                if (x > 0) printf("Positive number\n\n");
                if (x < 0) printf("Negative number\n\n");
                if (x == 0) printf("Zero\n\n");
                break;
            }

            case 2: {
                // DIVISIBILITY CHECK (MODULO OPERATOR %)
                int z;
                printf("Enter positive number: ");
                scanf("%d", &z);
                if (z % 5 == 0) printf("Divisible by 5\n\n");
                if (z % 5 != 0) printf("Not divisible by 5\n\n");
                break;
            }

            case 3: {
                // GREATEST OF THREE DISTINCT NUMBERS
                int a, b, c;
                printf("Enter 3 distinct integers: ");
                scanf("%d %d %d", &a, &b, &c);
                if (a > b && a > c) printf("%d is largest\n\n", a);
                if (b > a && b > c) printf("%d is largest\n\n", b);
                if (c > a && c > b) printf("%d is largest\n\n", c);
                break;
            }

            case 4: {
                // ODD / EVEN CHECK
                int y;
                printf("Enter a number: ");
                scanf("%d", &y);
                if (y % 2 == 0) {
                    printf("Number is even\n");
                    printf("Successful\n\n");
                } else {
                    printf("Number is odd\n\n");
                }
                break;
            }

            case 5: {
                // AREA VS PERIMETER
                int l,b;
                printf("Enter length and breadth: ");
                scanf("%d %d", &l, &b);
                int area = l * b;
                int perimeter = 2 * (l + b);
                if (area > perimeter) {
                    printf("Area is greater than perimeter\n\n");
                } else {
                    printf("Area is not greater than perimeter\n\n");
                }
                break;
            }

            case 6: {
                // ABSOLUTE VALUE - METHOD 1 (Two separate if checks)
                int a;
                printf("Enter a number: ");
                scanf("%d", &a);
                if (a >= 0) {
                    printf("Absolute value (Method 1): %d\n\n", a);
                }
                if (a < 0) {
                    printf("Absolute value (Method 1): %d\n\n", a * (-1));
                }
                break;
            }

            case 7: {
                // ABSOLUTE VALUE - METHOD 2 (In-place modification)
                int a;
                printf("Enter a number: ");
                scanf("%d", &a);
                int temp = a;
                if (temp < 0) {
                    temp = temp * (-1);
                }
                printf("Absolute value (Method 2): %d\n\n", temp);
                break;
            }

            case 8: {
                // INT INPUT TO FLOAT HALF (TYPECASTING)
                int c;
                printf("Enter an integer: ");
                scanf("%d", &c);
                float half = (float)c / 2;
                printf("Half of number is: %f\n\n", half);
                break;
            }

            case 9: {
                // CHECK FLOAT IS INTEGER - METHOD 1 (Direct typecast check)
                float f;
                printf("Enter float number: ");
                scanf("%f", &f);
                int truncated = (int)f;
                if (f == truncated) printf("Number is an integer\n\n");
                if (f != truncated) printf("Number is NOT an integer\n\n");
                break;
            }

            case 10: {
                // CHECK FLOAT IS INTEGER - METHOD 2 (Datatype conversion subtraction)
                float f;
                printf("Enter float number: ");
                scanf("%f", &f);
                int x1 = (int)f;
                float y1 = (float)x1;
                if (f - y1 == 0) printf("Number is an integer\n\n");
                if (f - y1 > 0) printf("Number is NOT an integer\n\n");
                break;
            }

            case 11: {
                // LOGICAL AND (&&) - THREE DIGIT CHECK
                int x;
                printf("Enter positive integer: ");
                scanf("%d", &x);
                if (x >= 100 && x <= 999) printf("%d is a 3-digit number\n\n", x);
                else printf("%d is NOT a 3-digit number\n\n", x);
                break;
            }

            case 12: {
                // LOGICAL AND (&&) - DIVISIBLE BY 5 AND 3
                int z;
                printf("Enter an integer: ");
                scanf("%d", &z);
                if (z % 5 == 0 && z % 3 == 0) printf("Divisible by 5 and 3\n\n");
                else printf("Not divisible by 5 and 3\n\n");
                break;
            }

            case 13: {
                // LOGICAL OR (||) - DIVISIBLE BY 5 OR 3
                int z;
                printf("Enter an integer: ");
                scanf("%d", &z);
                if (z % 5 == 0 || z % 3 == 0) printf("Divisible by 5 or 3\n\n");
                else printf("Not divisible by 5 or 3\n\n");
                break;
            }

            case 14: {
                // TRIANGLE VALIDITY CHECK
                int a, b, c;
                printf("Enter 3 sides: ");
                scanf("%d %d %d", &a, &b, &c);
                if (a + b >= c && b + c >= a && a + c >= b) printf("Valid triangle\n\n");
                else printf("Invalid triangle\n\n");
                break;
            }

            case 15: {
                // LEAP YEAR CHECK
                int l;
                printf("Enter a year: ");
                scanf("%d", &l);
                if (l % 400 == 0 || (l % 4 == 0 && l % 100 != 0)) printf("Leap year\n\n");
                else printf("Not a leap year\n\n");
                break;
            }

            case 16: {
                // DIVISIBLE BY 5 OR 3 BUT NOT 15
                int a;
                printf("Enter an integer: ");
                scanf("%d", &a);
                if ((a % 5 == 0 || a % 3 == 0) && a % 15 != 0) printf("Success\n\n");
                else printf("Failure\n\n");
                break;
            }

            case 17: {
                // DIVISIBLE BY 5 AND 3 (NESTED)
                int z;
                printf("Enter a number: ");
                scanf("%d", &z);
                if (z % 5 == 0) {
                    if (z % 3 == 0) printf("Divisible by 5 and 3\n\n");
                    else printf("Not Divisible by 5 and 3\n\n");
                } else {
                    printf("Not Divisible by 5 and 3\n\n");
                }
                break;
            }

            case 18: {
                // DIVISIBLE BY 5 OR 3 BUT NOT 15 (NESTED)
                int z;
                printf("Enter a number: ");
                scanf("%d", &z);
                if (z % 15 != 0) {
                    if (z % 3 != 0) {
                        if (z % 5 == 0) printf("Condition valid\n\n");
                        else printf("Condition invalid\n\n");
                    } else {
                        printf("Condition valid\n\n");
                    }
                } else {
                    printf("Condition invalid\n\n");
                }
                break;
            }

            case 19: {
                // GREATEST OF THREE DISTINCT NUMBERS (NESTED)
                int a, b, c;
                printf("Enter 3 integers: ");
                scanf("%d %d %d", &a, &b, &c);
                if (a > b) {
                    if (a > c) printf("%d is largest\n\n", a);
                    else printf("%d is largest\n\n", c);
                } else {
                    if (b > c) printf("%d is largest\n\n", b);
                    else printf("%d is largest\n\n", c);
                }
                break;
            }

            case 20: {
                // YOUNGEST OF THREE AGES (NESTED)
                int r, s, a;
                printf("Enter ages of Ram, Shyam, Ajay: ");
                scanf("%d %d %d", &r, &s, &a);
                if (r < s) {
                    if (r < a) printf("Ram is youngest (%d)\n\n", r);
                    else printf("Ajay is youngest (%d)\n\n", a);
                } else {
                    if (s < a) printf("Shyam is youngest (%d)\n\n", s);
                    else printf("Ajay is youngest (%d)\n\n", a);
                }
                break;
            }

            case 21: {
                // COST PRICE & SELLING PRICE
                int cp, sp;
                printf("Enter cost price and selling price: ");
                scanf("%d %d", &cp, &sp);
                if (cp > sp) {
                    printf("LOSS of %d\n", cp - sp);
                    printf("LOSS percentage: %.2f\n\n", ((float)(cp - sp) / cp) * 100);
                } else if (sp > cp) {
                    printf("PROFIT of %d\n", sp - cp);
                    printf("PROFIT percentage: %.2f\n\n", ((float)(sp - cp) / cp) * 100);
                } else {
                    printf("NO PROFIT NO LOSS\n\n");
                }
                break;
            }

            case 22: {
                // MARKS GRADING - METHOD 1 (Multiple IFs)
                int x;
                printf("Enter percentage: ");
                scanf("%d", &x);
                if (x >= 61 && x <= 80) printf("Good\n\n");
                if (x >= 41 && x <= 60) printf("Average\n\n");
                if (x <= 40) printf("Fail\n\n");
                break;
            }

            case 23: {
                // MARKS GRADING - METHOD 2 (Nested IF-ELSE)
                int x;
                printf("Enter percentage: ");
                scanf("%d", &x);
                if (x >= 81) printf("Very Good\n\n");
                else {
                    if (x >= 61) printf("Good\n\n");
                    else {
                        if (x >= 41) printf("Average\n\n");
                        else printf("Fail\n\n");
                    }
                }
                break;
            }

            case 24: {
                // MARKS GRADING - METHOD 3 (ELSE-IF Ladder)
                int x;
                printf("Enter percentage: ");
                scanf("%d", &x);
                if (x >= 81) printf("Very Good\n\n");
                else if (x >= 61) printf("Good\n\n");
                else if (x >= 41) printf("Average\n\n");
                else printf("Fail\n\n");
                break;
            }

            case 25: {
                // GREATEST OF THREE NUMBERS (CAN BE EQUAL)
                int a, b, c;
                printf("Enter 3 numbers: ");
                scanf("%d %d %d", &a, &b, &c);
                if (a >= b && a >= c) printf("%d is largest\n", a);
                else if (b >= a && b >= c) printf("%d is largest\n", b);
                else printf("%d is largest\n", c);
                break;
            }

            case 26: {
                // 1. ELSE-IF LADDER (POSITIVE / NEGATIVE / ZERO)
                int z;
                printf(" Enter number: ");
                scanf("%d", &z);
                if (z > 0) printf("%d is positive\n\n", z);
                else if (z < 0) printf("%d is negative\n\n", z);
                else printf("%d is zero\n\n", z);
                break;
            }

            case 27: {
                // 2. LOGICAL OPERATORS (DIVISIBILITY BY 5 AND/OR 8)
                int z;
                printf("Enter number: ");
                scanf("%d", &z);
                if (z % 5 == 0 && z % 8 == 0) printf("Divisible by both 5 and 8\n\n");
                else if (z % 5 == 0) printf("Divisible by 5 only\n\n");
                else if (z % 8 == 0) printf("Divisible by 8 only\n\n");
                else printf("Not divisible by 5 or 8\n\n");
                break;
            }

            case 28: {
                // (LESS THAN 100 -> EVEN/ODD)
                int z;
                printf("Enter number: ");
                scanf("%d", &z);
                if (z < 100) {
                    printf("%d is less than 100\n", z);
                    if (z % 2 == 0) printf("It is an EVEN number\n\n");
                    else printf("It is an ODD number\n\n");
                } else {
                    printf("%d is NOT less than 100\n\n", z);
                }
                break;
            }

            case 29: {
                // VOWEL VS CONSONANT CHECK
                char alphabet;
                printf("Enter alphabet here: ");
                scanf(" %c", &alphabet);
                switch (alphabet) {
                    case 'a':
                    case 'A':
                        printf("a is a vowel\n\n");
                        break;
                    case 'e':
                    case 'E':
                        printf("e is a vowel\n\n");
                        break;
                    case 'i':
                    case 'I':
                        printf("i is a vowel\n\n");
                        break;
                    case 'o':
                    case 'O':
                        printf("o is a vowel\n\n");
                        break;
                    case 'u':
                    case 'U':
                        printf("u is a vowel\n\n");
                        break;
                    default:
                        printf("%c is a consonant\n\n", alphabet);
                        break;
                }
                break;
            }

            case 30: {
                // Print Day of the Week Using SWITCH
                int x;
                printf("enter a number: ");
                scanf("%d",&x);
                switch(x){
                    case 1 :
                    printf("mon\n");
                    break;
                    case 2 :
                    printf("tue\n");
                    break;
                    case 3 :
                    printf("wed\n");
                    break;
                    case 4 :
                    printf("thu\n");
                    break;
                    case 5 :
                    printf("fri\n");
                    break;
                    case 6 :
                    printf("sat\n");
                    break;
                    case 7 :
                    printf("sun\n");
                    break;
                    default :
                    printf("invalid\n");
                }
                break;
            }

            case 31: {
                // Basic Calculator using SWITCH
                int a, b;
                printf("Enter two numbers for calculation: ");
                scanf("%d %d", &a, &b);
                
                char op;
                printf("Enter operator: ");
                scanf(" %c", &op);
                switch(op){
                  case '+' :
                    printf("%d\n",a+b);
                    break;
                  case '-' :
                    printf("%d\n",a-b);
                    break;
                  case '*' :
                    printf("%d\n",a*b);
                    break;
                  case '/' :
                    if (b != 0) printf("%d\n",a/b);
                    else printf("Division by zero error!\n");
                    break;

                  default :
                  printf("invalid operator\n");      
                }
                break;
            }

            case 32: {
                // Largest of 4 numbers
                int a, b, c, d;
                printf("Enter any 4 numbers here: ");
                scanf("%d %d %d %d", &a, &b, &c, &d);

                if (a >= b && a >= c && a >= d) printf("%d is largest\n\n", a);
                else if (b >= c && b >= d) printf("%d is largest\n\n", b);
                else if (c >= d) printf("%d is largest\n\n", c); 
                else printf("%d is largest\n\n", d);
                break;
            }

            case 33: {
                // Sides of triangle (Strict inequality check)
                int a, b, c;
                printf("Enter any 3 sides of triangle: ");
                scanf("%d %d %d", &a, &b, &c);

                if ((a + b) > c && (a + c) > b && (b + c) > a) printf("Given sides form a triangle\n\n");
                else printf("Given sides can't form a triangle\n\n");
                break;
            }

            case 34: {
                // Collinear points check
                int x1, y1, x2, y2, x3, y3;
                printf("Enter coordinates (x1 y1 x2 y2 x3 y3): ");
                scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

                if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
                    printf("All points lie on a straight line\n\n");
                } else {
                    printf("Points don't lie on a straight line\n\n");
                }
                break;
            }

            case 35: {
                // Point location (x,y)
                int x, y;
                printf("Enter values of x, y: ");
                scanf("%d %d", &x, &y); 

                if (x == 0 && y == 0) {
                    printf("Lies at the origin\n\n");
                } else if (y == 0) {
                    printf("Lies on the x-axis\n\n");
                } else if (x == 0) {
                    printf("Lies on the y-axis\n\n");
                } else {
                    printf("Lies in a quadrant (neither axis nor origin)\n\n");
                }
                break;
            }

            case 0:
                printf("Exiting program... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid number between 0 and 35.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}