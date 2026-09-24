#include <stdio.h>

int main()
{
    // ==========================================
    // 1. BASIC PRINTING & ESCAPE SEQUENCES
    // ==========================================

    printf("welcome HARMAN\n"); 
    printf("lets Code");
    printf("\n"); // \n creates a new line

    // Additional Escape Sequences: \t (Tab) and \" (Quotes)
    printf("Tabbed:\tHello\tWorld\n");
    printf("Quotes:\t\"Learning C Programming\"\n");

    printf("value:%d \n", 12 * 2); // %d is format specifier for int


    // ==========================================
    // 2. CONSTANTS (READ-ONLY VARIABLES)
    // ==========================================

    const float PI = 3.14159;
    // PI = 3.14; // UNCOMMENTING THIS WILL CAUSE A COMPILATION ERROR
    printf("Constant PI: %.5f\n\n", PI);


    // ==========================================
    // 3. VARIABLES & DECLARATION
    // ==========================================

    int x; // Declaration
    x = 5; // Initialization / Assignment
    printf("%d \n", x);
    
    x = x + 3; // Updating variable
    printf("%d\n", x);

    int y = 10; // Declaration + Initialization combined
    printf("%d\n", y); 
    printf("%d\n", y + 6);
    printf("%d\n", y - 9);
    printf("%d\n", y * 4);
    printf("%d\n", y / 2);
    printf("%d\n\n", y);
    
    y = y + 100; // Modifying y
    printf("%d\n", y);

    int a = 20, b = 15;
    printf("%d%d \n", a, b);  // Printed side-by-side: 2015
    printf("%d %d \n", a, b); // Printed with space: 20 15


    // ==========================================
    // 4. ARITHMETIC OPERATORS & DATA TYPES
    // ==========================================

    // Integer Arithmetic & Modulo Operator (%)
    printf("%d\n", a + b);
    printf("%d\n", a * b);
    printf("%d\n", a - b);
    printf("%d\n", a / b); // Int / Int truncates decimal part (OUTPUT: 1)
    printf("%d\n\n", a % b); // Modulo: returns remainder (OUTPUT: 5)

    // Float Data Type & Division Rules
    float h = 5.674;
    float c = 20;

    printf("%f\n", h); // %f is format specifier for float
    printf("%f\n\n", c / b); // Float / Int = Float

    float i = 7.55, j = 1.9;
    printf("%f\n", i / j); // Float / Float = Float

    float k = 30, l = 2.8;
    printf("%f\n", k / l);

    float g = 30.65, f = 2;
    printf("%f\n", g / f); // Float / Int = Float

    float gt = 30, vt = 2;
    printf("%f\n", gt / vt);
    
    // Division Rule Comparisons
    printf("%f\n", 30.0 / 2); // Float / Int = Float (OUTPUT: 15.000000)
    printf("%d\n", 30 / 2);   // Int / Int = Int (OUTPUT: 15)

    // Basic Float Arithmetic Operations
    printf("%f\n", g + f);
    printf("%f\n", g * f);
    printf("%f\n\n", g - f);


    // ==========================================
    // 5. INCREMENT & DECREMENT OPERATORS
    // ==========================================

    printf("%d\n", a); 
    printf("%d\n", a++); // Post-increment: prints 20, then becomes 21
    printf("%d\n", a);   // Prints 21
    printf("%d\n", ++a); // Pre-increment: becomes 22, then prints 22
    printf("%d\n\n", a); 

    printf("%d\n", b); 
    printf("%d\n", b--); // Post-decrement: prints 15, then becomes 14
    printf("%d\n", b);   // Prints 14
    printf("%d\n", --b); // Pre-decrement: becomes 13, then prints 13
    printf("%d\n\n", b); 


    // ==========================================
    // 6. RELATIONAL OPERATORS (COMPARISON)
    // ==========================================

    // Evaluates to 1 (True) or 0 (False)
    int p = 10, q = 20;
    printf("%d\n", p == q); // Equal to (0)
    printf("%d\n", p != q); // Not equal to (1)
    printf("%d\n", p > q);  // Greater than (0)
    printf("%d\n", p < q);  // Less than (1)
    printf("%d\n", p >= 10); // Greater than or equal to (1)
    printf("%d\n\n", q <= 15); // Less than or equal to (0)


    // ==========================================
    // 7. LOGICAL OPERATORS
    // ==========================================

    int u = 1, v = 0;
    
    // Logical AND (&&) - True only if both conditions are true
    printf("%d\n", (p < q) && (q > 15)); // 1 && 1 -> 1
    
    // Logical OR (||) - True if at least one condition is true
    printf("%d\n", (p > q) || (q > 15)); // 0 || 1 -> 1
    
    // Logical NOT (!) - Inverts truth value
    printf("%d\n\n", !u); // !1 -> 0


    // ==========================================
    // 8. ASSIGNMENT OPERATORS (SHORTHAND)
    // ==========================================

    int z = 10;
    z += 5; // Equivalent to z = z + 5 (15)
    printf("%d\n", z);
    z -= 3; // Equivalent to z = z - 3 (12)
    printf("%d\n", z);
    z *= 2; // Equivalent to z = z * 2 (24)
    printf("%d\n", z);
    z /= 4; // Equivalent to z = z / 4 (6)
    printf("%d\n", z);
    z %= 4; // Equivalent to z = z % 4 (2)
    printf("%d\n\n", z);


    // ==========================================
    // 9. BITWISE OPERATORS
    // ==========================================

    int m = 5;  // Binary: 0101
    int n = 3;  // Binary: 0011

    printf("%d\n", m & n);  // Bitwise AND (0001 -> 1)
    printf("%d\n", m | n);  // Bitwise OR  (0111 -> 7)
    printf("%d\n", m ^ n);  // Bitwise XOR (0110 -> 6)
    printf("%d\n", ~m);     // Bitwise NOT (~0101 -> -6 in 2's complement)
    printf("%d\n", m << 1); // Left Shift by 1 (0101 << 1 = 1010 -> 10)
    printf("%d\n\n", m >> 1); // Right Shift by 1 (0101 >> 1 = 0010 -> 2)


    // ==========================================
    // 10. COMMA OPERATOR
    // ==========================================

    // Comma evaluates expressions left to right and yields the rightmost value
    int r;
    r = (1, 2, 3); // Assigns 3
    printf("%d\n", r);

    r = (x = 10, y = 20, x + y); // Evaluates operations, yields 30
    printf("%d\n\n", r);


    // ==========================================
    // 11. OPERATOR PRECEDENCE & ASSOCIATIVITY
    // ==========================================

    // * and / have higher precedence than + and - (Evaluated Left-to-Right)
    int s = 5 + 3 * 2; // 5 + 6 = 11
    printf("%d\n", s);

    // Parentheses () override default precedence
    int t = (5 + 3) * 2; // 8 * 2 = 16
    printf("%d\n", t);

    // Same precedence operators resolve using associativity (Left-to-Right for arithmetic)
    int w = 100 / 10 * 2; // (100 / 10) * 2 = 20
    printf("%d\n", w);

    // Right-to-Left associativity for assignment operators
    a = b = 50; // Reusing existing integer variables a and b
    c = 50.0;   // Assigning float value to existing float variable c
    printf("%d %d %f\n\n", a, b, c);


    // ==========================================
    // 12. TERNARY OPERATOR (CONDITIONAL OPERATOR)
    // ==========================================

    p = 15; q = 25; // Reused existing variables p and q
    int max = (p > q) ? p : q;
    printf("Max is: %d\n", max); 

    // Even / Odd using Ternary
    int num = 7;
    (num % 2 == 0) ? printf("%d is Even\n\n", num) : printf("%d is Odd\n\n", num);


    // ==========================================
    // 13. OUTPUT FORMATTING & PRECISION CONTROL
    // ==========================================

    float pi = 3.141592;

    // Precision Specifiers
    printf("Default float: %f\n", pi);
    printf("2 Decimal places: %.2f\n", pi);
    printf("4 Decimal places: %.4f\n", pi);

    // Width Specifiers
    int val = 42;
    printf("Width 5 (padded with spaces): %5d\n", val);
    

    // ==========================================
    // 14. TYPECASTING (IMPLICIT VS EXPLICIT)
    // ==========================================

    // Implicit Typecasting (Done automatically by C)
    a = 10;
    float float_b = 2.5;
    float float_c = a + float_b; // 'a' automatically becomes 10.0 to match float
    printf("Implicit (10 + 2.5): %f\n\n", float_c);

    // Explicit Typecasting (Done manually by you)
    int num1 = 5, num2 = 2;
    
    float z1 = num1 / num2;          // Int / Int = 2 (fraction lost) -> becomes 2.000000
    float z2 = (float)num1 / num2;   // (float)5 / 2 = 2.500000 (fraction kept)

    printf("Without cast (5 / 2): %f\n", z1);
    printf("With cast ((float)5 / 2): %f\n\n", z2);


    // ==========================================
    // 15. SIZEOF OPERATOR & OVERFLOW
    // ==========================================

    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(short int));
    printf("%zu\n", sizeof(long int));
    printf("%zu\n", sizeof(6));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(char));

    // Integer Overflow Example
    int max_int = 2147483647; // Maximum value for a standard 32-bit signed int
    printf("Max Int: %d\n", max_int);
    printf("Overflowed Int (Max + 1): %d\n\n", max_int + 1); // Wraps around to negative limit


    // ==========================================
    // 16. CHARACTER TO ASCII VALUE (CHAR TO INT)
    // ==========================================
    
    char ch = '@';

    // Implicit conversion (using %d format specifier)
    printf("%d\n", ch); 

    // Explicit typecasting (casting char to int manually)
    printf("%d\n\n", (int)ch); 


    // ==========================================
    // 17. ASCII VALUE TO CHARACTER (INT TO CHAR)
    // ==========================================
    
    x = 36; // Reused existing variable x

    // Implicit conversion (using %c format specifier)
    printf("%c\n", x);

    // Explicit typecasting (storing and printing as char)
    char char_b = (char)x;
    printf("%c\n\n", char_b);


    // ==========================================
    // 18. ASCII ARITHMETIC & CASE CONVERSION
    // ==========================================

    // 1. Lowercase to Uppercase ('a' to 'A')
    char char_c = 'a';
    char char_d = char_c - 32; 
    printf("Lowercase '%c' to Uppercase: %c\n", char_c, char_d);

    // 2. Uppercase to Lowercase ('B' to 'b')
    char char_e = 'B';
    printf("Uppercase '%c' to Lowercase: %c\n", char_e, char_e + 32);

    // 3. Digit Character to Real Number ('5' to 5)
    char char_f = '5';
    y = char_f - '0'; // Reused variable y
    printf("Char '%c' to real integer: %d\n\n", char_f, y);

    return 0;
}