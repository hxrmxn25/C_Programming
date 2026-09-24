/*
================================================================================
                    C LOOPS & ALGORITHMS: ALL-IN-ONE GUIDE
================================================================================

--------------------------------------------------------------------------------
TRICKS TO REMEMBER LOGIC (MENTAL PATTERNS)
--------------------------------------------------------------------------------
You don't need to memorize 50 code blocks. Almost every loop algorithm boils 
down to just 5 core patterns:

1. THE DIGIT EXTRACTOR PATTERN (Used in reverse, palindrome, digit sums, Armstrong)
   - Step 1: Get last digit  ->  ld = n % 10;
   - Step 2: Process ld      ->  sum += ld  OR  rev = (rev * 10) + ld;
   - Step 3: Chop off last   ->  n = n / 10;
   - Loop Condition          ->  while (n > 0)

2. THE ACCUMULATOR PATTERN (Used in factorials, powers, series sum)
   - Additive Accumulator    ->  sum = 0;  ->  sum += value;
   - Multiplicative Accum    ->  prod = 1; ->  prod *= value; (NEVER initialize to 0!)

3. THE STATE SWAPPER PATTERN (Used in Fibonacci sequences)
   - Compute next state      ->  next = a + b;
   - Shift history left      ->  a = b;  b = next;

4. THE SEARCH & EARLY EXIT PATTERN (Used in Primes, Highest Factor)
   - Assume true/found       ->  bool flag = true;
   - Test violation          ->  if (condition) { flag = false; break; }

5. THE STEP-JUMP PATTERN (Used in AP, GP, Tables, Even/Odd)
   - Instead of checking every number (if i % 2 == 0), jump directly:
   - AP Step                 ->  i = i + step_size
   - GP Step                 ->  a = a * ratio

--------------------------------------------------------------------------------
QUICK CHEAT SHEET TABLE
--------------------------------------------------------------------------------
Task                  | Key Formula / Expression       | Loop Boundary
----------------------|--------------------------------|-------------------------
Last Digit            | ld = n % 10                    | inside while(n > 0)
Remove Last Digit     | n = n / 10                     | inside while(n > 0)
Shift Left & Add      | rev = (rev * 10) + ld          | inside while(n > 0)
Factorial             | fact = fact * i                | for i=1 to N
Power (a^b)           | ans = ans * a                  | for i=1 to b
Nth AP Term           | term = a + (n - 1) * d         | for i=1 to n
Prime Check Limit     | i * i <= n  (i <= sqrt(n))     | for i=2 to sqrt(n)
Highest Factor Start  | i = x / 2                      | downwards to 1 (break)
================================================================================
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int choice;

    do {
        printf("\n============================================\n");
        printf("         C LOOPS & ALGORITHMS MENU          \n");
        printf("============================================\n");
        printf("--- 1. BASIC LOOPS & EVEN NUMBERS ---\n");
        printf(" 1. Print Text Fixed Times\n");
        printf(" 2. Print Text 'N' Times\n");
        printf(" 3. Print Numbers 1 to 10\n");
        printf(" 4. Even Numbers 1-100 (Method 1: IF condition)\n");
        printf(" 5. Even Numbers 1-100 (Method 2: Step size i=i+2)\n");
        printf("\n--- 2. MULTIPLICATION TABLES ---\n");
        printf(" 6. Table of 19 (Method 1: IF condition)\n");
        printf(" 7. Table of 19 (Method 2: Jump by 19)\n");
        printf(" 8. User Defined Multiplication Table\n");
        printf(" 9. Table of 2 (Formatted Output)\n");
        printf("\n--- 3. PROGRESSIONS (AP & GP) ---\n");
        printf("10. AP 1,3,5... (Method 1: Formula 2n-1)\n");
        printf("11. AP 1,3,5... (Method 2: Extra Variable)\n");
        printf("12. AP 1,4,7... (Formula 3n-2)\n");
        printf("13. GP 1,2,4,8... (Common Ratio = 2)\n");
        printf("14. GP 3,12,48... (Common Ratio = 4)\n");
        printf("15. Decreasing AP 100,97,94... (Positive terms only)\n");
        printf("16. GP 100,50,25... (Fractional GP upto N terms)\n");
        printf("\n--- 4. REVERSE LOOPS, BREAK & CONTINUE ---\n");
        printf("17. Decrement Loop (100 down to 1)\n");
        printf("18. Highest Factor (Method 1: Forward loop)\n");
        printf("19. Highest Factor (Method 2: Reverse loop + BREAK)\n");
        printf("20. Continue Ex 1: Even numbers (skip odds)\n");
        printf("21. Continue Ex 2: Skip specific number (skip 5)\n");
        printf("22. Continue Ex 3: Skip multiples of 3\n");
        printf("23. Dry Run Trace (x, y state tracking)\n");
        printf("\n--- 5. DIGIT-BASED ALGORITHMS ---\n");
        printf("24. Count Digits of a Number\n");
        printf("25. Sum of Digits\n");
        printf("26. Sum of EVEN Digits\n");
        printf("27. Product of Digits\n");
        printf("28. Product of ODD Digits\n");
        printf("29. Reverse a Number\n");
        printf("30. Palindrome Number Check\n");
        printf("31. Largest Digit in a Number\n");
        printf("32. Sum and Average of Digits\n");
        printf("\n--- 6. MATHEMATICAL & POWER ALGORITHMS ---\n");
        printf("33. Factorial of a Single Number\n");
        printf("34. Factorial of First N Numbers\n");
        printf("35. Nth Fibonacci Number\n");
        printf("36. First N Fibonacci Numbers\n");
        printf("37. Power Calculation (a^b)\n");
        printf("38. ASCII Values of All Alphabets\n");
        printf("39. Alternating Sign Series Sum (-1+2-3+4...)\n");
        printf("\n--- 7. PRIMES & ARMSTRONG NUMBERS ---\n");
        printf("40. Prime Check (Basic Boolean Flag)\n");
        printf("41. Prime Check (Optimized Loop up to sqrt(N))\n");
        printf("42. Print All Primes in Range (1 to N)\n");
        printf("43. Armstrong Number Check\n");
        printf("44. Print All Armstrong Numbers (1 to 500)\n");
        printf("\n--- 8. CONTROL FLOW & MENU DEMOS ---\n");
        printf("45. Alternating 1 and 0 Pattern\n");
        printf("46. Sum of Even Numbers 1 to 10\n");
        printf("47. Syntax Comparison (For vs While vs Do-While)\n");
        printf("48. Interactive Sub-Menu Demo\n");
        printf("49. Addition Calculator (Repeat via Do-While)\n");
        printf("\n--- 9. ADVANCED LOOP ALGORITHMS & SENTINELS ---\n");
        printf("50. GCD and LCM (Euclidean Algorithm - Repeated Division)\n");
        printf("51. Perfect Number Check (Sum of Proper Divisors)\n");
        printf("52. Strong Number Check (Sum of Digit Factorials)\n");
        printf("53. Sentinel-Controlled Loop (Dynamic User Termination)\n");
        printf("54. Decimal to Binary Conversion (Base-10 to Base-2 Mapping)\n");
        printf(" 0. Exit Program\n");
        printf("============================================\n");
        printf("Enter your choice (0-49): ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {

            /* =================================================================
               SECTION 1: BASIC LOOPS & EVEN NUMBERS
               ================================================================= */

            case 1: {
                /*
                 * EXPLANATION: Fixed Repetition Pattern
                 * - Use a 'for' loop when the number of iterations is known ahead of time.
                 * - 'int i = 1' initializes counter; 'i <= 3' checks bound; 'i++' updates.
                 */
                for (int i = 1; i <= 3; i++) {
                    printf("hxrmxn\n");
                }
                break;
            }

            case 2: {
                /*
                 * EXPLANATION: User-Defined Loop Bound
                 * - Reading 'n' from user dynamically updates the loop termination condition.
                 * - Loop runs exactly 'n' times from i = 1 to i = n.
                 */
                int n;
                printf("Enter number of times: ");
                scanf("%d", &n);
                for (int i = 1; i <= n; i++) {
                    printf("hello\n");
                }
                break;
            }

            case 3: {
                /*
                 * EXPLANATION: Standard Counter Output
                 * - Prints the loop iterator variable 'i' directly during each iteration.
                 */
                for (int i = 1; i <= 10; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 4: {
                /*
                 * EXPLANATION: Filter Pattern (Brute Force)
                 * - Loop checks EVERY number from 1 to 100 (100 iterations).
                 * - Modulo operator (i % 2 == 0) checks if remainder is zero (even).
                 */
                for (int i = 1; i <= 100; i++) {
                    if (i % 2 == 0) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;
            }

            case 5: {
                /*
                 * EXPLANATION: Step-Jump Optimization
                 * - Instead of checking every number with 'if', start at 2 and increment by 2 (i = i + 2).
                 * - Reduces iterations from 100 down to 50 (2x efficiency gain).
                 */
                for (int i = 2; i <= 100; i = i + 2) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            /* =================================================================
               SECTION 2: MULTIPLICATION TABLES
               ================================================================= */

            case 6: {
                /*
                 * EXPLANATION: Filter Method for Multiples
                 * - Checks every single integer up to 190.
                 * - Slow method: 190 comparisons performed.
                 */
                for (int i = 1; i <= 190; i++) {
                    if (i % 19 == 0) printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 7: {
                /*
                 * EXPLANATION: Jump Method for Multiples
                 * - Starts at 19 and adds 19 per iteration (i = i + 19).
                 * - Executes in only 10 iterations instead of 190.
                 */
                for (int i = 19; i <= 190; i = i + 19) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 8: {
                /*
                 * EXPLANATION: Dynamic Multiples Jump
                 * - Upper limit is calculated dynamically as (x * 10).
                 * - Counter jumps by 'x' on every turn.
                 */
                int x;
                printf("Enter a number for table: ");
                scanf("%d", &x);
                for (int i = x; i <= x * 10; i = i + x) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 9: {
                /*
                 * EXPLANATION: Multiplier Counter Pattern
                 * - Keep 'i' as simple count (1 to 10) and calculate (2 * i) on the fly.
                 * - Standard way to present formatted mathematical tables.
                 */
                for (int i = 1; i <= 10; i++) {
                    printf("2 * %d = %d\n", i, 2 * i);
                }
                break;
            }

            /* =================================================================
               SECTION 3: PROGRESSIONS (AP & GP)
               ================================================================= */

            case 10: {
                /*
                 * EXPLANATION: AP via Math Formula
                 * - Sequence: 1, 3, 5, 7... (Odd numbers)
                 * - Formula for Nth term: Term_n = a + (n - 1) * d
                 *   Here a = 1, d = 2  =>  Term_n = 1 + (n - 1)*2 = 2n - 1.
                 * - Loop runs up to (2n - 1) jumping by 2.
                 */
                int n;
                printf("Enter number of terms: ");
                scanf("%d", &n);
                for (int i = 1; i <= 2 * n - 1; i = i + 2) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 11: {
                /*
                 * EXPLANATION: AP via State Accumulation Variable
                 * - Easier mental model: decouple loop count 'i' from sequence term 'a'.
                 * - 'i' counts terms (1 to n), 'a' tracks actual number and adds common difference 'd'.
                 */
                int n;
                printf("Enter number of terms: ");
                scanf("%d", &n);
                int a = 1; // First term
                for (int i = 1; i <= n; i++) {
                    printf("%d ", a);
                    a = a + 2; // Common difference d = 2
                }
                printf("\n");
                break;
            }

            case 12: {
                /*
                 * EXPLANATION: AP Series (1, 4, 7, 10...)
                 * - First term a = 1, common difference d = 3.
                 * - Formula: Nth term = 1 + (n - 1)*3 = 3n - 2.
                 */
                int n;
                printf("Enter number of terms: ");
                scanf("%d", &n);
                for (int i = 1; i <= 3 * n - 2; i = i + 3) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 13: {
                /*
                 * EXPLANATION: GP Series (1, 2, 4, 8...) - Common Ratio = 2
                 * - Formula: Term_next = Term_current * ratio (r).
                 * - State variable 'a' multiplies by 2 on every step.
                 */
                int n;
                printf("Enter number of terms: ");
                scanf("%d", &n);
                int a = 1;
                for (int i = 1; i <= n; i++) {
                    printf("%d ", a);
                    a *= 2; // Ratio r = 2
                }
                printf("\n");
                break;
            }

            case 14: {
                /*
                 * EXPLANATION: GP Series (3, 12, 48...) - Common Ratio = 4
                 * - First term a = 3, Common ratio r = 4.
                 */
                int n;
                printf("Enter number of terms: ");
                scanf("%d", &n);
                int a = 3;
                for (int i = 1; i <= n; i++) {
                    printf("%d ", a);
                    a = a * 4;
                }
                printf("\n");
                break;
            }

            case 15: {
                /*
                 * EXPLANATION: Decreasing AP (100, 97, 94... positive terms)
                 * - Condition 'a > 0' stops loop automatically when term becomes non-positive.
                 * - Omitted initialization in 'for' because 'a' is initialized outside.
                 */
                int a = 100;
                for (; a > 0; ) {
                    printf("%d ", a);
                    a = a - 3;
                }
                printf("\n");
                break;
            }

            case 16: {
                /*
                 * EXPLANATION: Fractional GP (100, 50, 25, 12.5...)
                 * - Uses floating-point variable 'a' because integer division truncates decimals.
                 * - Divides by common ratio 2.0 at each term.
                 */
                int n;
                printf("Enter number of terms: ");
                scanf("%d", &n);
                float a = 100.0;
                for (int i = 1; i <= n; i++) {
                    printf("%.2f ", a);
                    a = a / 2.0;
                }
                printf("\n");
                break;
            }

            /* =================================================================
               SECTION 4: REVERSE LOOPS, BREAK & CONTINUE
               ================================================================= */

            case 17: {
                /*
                 * EXPLANATION: Decrementing Loop Pattern
                 * - Start at upper bound (100), condition checks lower bound (>= 1), update decrements (i--).
                 */
                for (int i = 100; i >= 1; i--) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 18: {
                /*
                 * EXPLANATION: Highest Factor - Unoptimized Forward Search
                 * - Scans 1 to N-1. Keeps overwriting 'hf' whenever factor found.
                 * - Wastes CPU cycles by continuing loop even after finding highest factor.
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int hf = 1;
                for (int i = 1; i <= x - 1; i++) {
                    if (x % i == 0) hf = i;
                }
                printf("Highest factor: %d\n", hf);
                break;
            }

            case 19: {
                /*
                 * EXPLANATION: Highest Factor - Reverse Search + BREAK (Optimized)
                 * - Max possible factor of X (excluding itself) is at most X/2.
                 * - Loop BACKWARDS from X/2 down to 1.
                 * - FIRST factor found is GUARANTEED to be highest. Exit immediately with 'break'.
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int hf = 1;
                for (int i = x / 2; i >= 1; i--) {
                    if (x % i == 0) {
                        hf = i;
                        break; // Terminate loop immediately
                    }
                }
                printf("Highest factor: %d\n", hf);
                break;
            }

            case 20: {
                /*
                 * EXPLANATION: Continue Statement - Skip Odds
                 * - 'continue' skips remaining statements in current iteration and jumps to next iteration.
                 * - If number is odd (i % 2 != 0), skip printf.
                 */
                for (int i = 1; i <= 100; i++) {
                    if (i % 2 != 0) continue;
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 21: {
                /*
                 * EXPLANATION: Continue Statement - Skip Specific Value
                 * - Skips processing specifically when i == 5.
                 */
                for (int i = 1; i <= 10; i++) {
                    if (i == 5) continue;
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 22: {
                /*
                 * EXPLANATION: Continue Statement - Skip Multiples
                 * - Skips all values divisible by 3.
                 */
                for (int i = 1; i <= 20; i++) {
                    if (i % 3 == 0) continue;
                    printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 23: {
                /*
                 * EXPLANATION: Variable Trace Pattern (Dry Run Practice)
                 * - Tracks dual changing variables (x decrements, y increments).
                 * - Demonstrates skipping output when x == y.
                 */
                int x = 4, y = 0;
                while (x >= 0) {
                    x--;
                    y++;
                    if (x == y) continue;
                    else printf("x=%d, y=%d\n", x, y);
                }
                break;
            }

            /* =================================================================
               SECTION 5: DIGIT-BASED ALGORITHMS
               ================================================================= */

            case 24: {
                /*
                 * EXPLANATION: Digit Counter Algorithm
                 * - Pattern: Integer division by 10 (n / 10) strips off last digit.
                 * - Example: 456 -> 45 -> 4 -> 0. (3 divisions = 3 digits).
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int temp = x;
                int count = 0;
                while (x != 0) {
                    x = x / 10;
                    count++;
                }
                printf("Number of digits in %d = %d\n", temp, count);
                break;
            }

            case 25: {
                /*
                 * EXPLANATION: Sum of Digits Algorithm
                 * - Step 1: Extract last digit using modulo 10 (ld = x % 10).
                 * - Step 2: Add last digit to accumulator (sum += ld).
                 * - Step 3: Remove last digit using division (x = x / 10).
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int temp = x;
                int sum = 0;
                while (x > 0) {
                    int ld = x % 10;
                    sum += ld;
                    x = x / 10;
                }
                printf("Sum of digits of %d = %d\n", temp, sum);
                break;
            }

            case 26: {
                /*
                 * EXPLANATION: Sum of Even Digits Only
                 * - Combines Digit Extraction with Conditional Filtering (ld % 2 == 0).
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int sum = 0;
                while (x > 0) {
                    int ld = x % 10;
                    if (ld % 2 == 0) sum += ld;
                    x = x / 10;
                }
                printf("Sum of even digits = %d\n", sum);
                break;
            }

            case 27: {
                /*
                 * EXPLANATION: Product of Digits
                 * - IMPORTANT: Initialize product variable to 1! (If 0, product remains 0).
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int product = 1;
                while (x > 0) {
                    int ld = x % 10;
                    product *= ld;
                    x = x / 10;
                }
                printf("Product of digits = %d\n", product);
                break;
            }

            case 28: {
                /*
                 * EXPLANATION: Product of Odd Digits
                 * - Product accumulator initialized to 1, multiplied only if (ld % 2 != 0).
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int product = 1;
                while (x > 0) {
                    int ld = x % 10;
                    if (ld % 2 != 0) product *= ld;
                    x = x / 10;
                }
                printf("Product of odd digits = %d\n", product);
                break;
            }

            case 29: {
                /*
                 * EXPLANATION: Reversing a Number (Digit Shifting)
                 * - Shift Formula: rev = (rev * 10) + last_digit
                 * - Example (x = 123):
                 *   Iter 1: ld=3, rev = (0*10)+3 = 3
                 *   Iter 2: ld=2, rev = (3*10)+2 = 32
                 *   Iter 3: ld=1, rev = (32*10)+1 = 321
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int rev = 0;
                while (x > 0) {
                    int ld = x % 10;
                    rev = (rev * 10) + ld;
                    x = x / 10;
                }
                printf("Reversed number = %d\n", rev);
                break;
            }

            case 30: {
                /*
                 * EXPLANATION: Palindrome Check (Save Backup Rule)
                 * - Palindrome: Number equals its reverse (e.g., 121, 1331).
                 * - CRITICAL STEP: Save original 'x' in 'backup' because digit extraction reduces 'x' to 0.
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int backup = x;
                int rev = 0;
                while (x > 0) {
                    int ld = x % 10;
                    rev = (rev * 10) + ld;
                    x = x / 10;
                }
                if (backup == rev) printf("%d is a Palindrome!\n", backup);
                else printf("%d is NOT a Palindrome.\n", backup);
                break;
            }

            case 31: {
                /*
                 * EXPLANATION: Maximum Digit Search
                 * - Initialize max tracker to lowest digit possible (0).
                 * - Compare each extracted digit 'ld' against current max.
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int max_digit = 0;
                while (x > 0) {
                    int ld = x % 10;
                    if (ld > max_digit) max_digit = ld;
                    x = x / 10;
                }
                printf("Largest digit = %d\n", max_digit);
                break;
            }

            case 32: {
                /*
                 * EXPLANATION: Dual Accumulation (Sum & Count) for Average
                 * - Typecast sum to float '(float)sum' to avoid integer division truncation.
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                int sum = 0, count = 0;
                while (x > 0) {
                    sum += (x % 10);
                    count++;
                    x /= 10;
                }
                float avg = (float)sum / count;
                printf("Sum = %d | Count = %d | Average = %.2f\n", sum, count, avg);
                break;
            }

            /* =================================================================
               SECTION 6: MATHEMATICAL & POWER ALGORITHMS
               ================================================================= */

            case 33: {
                /*
                 * EXPLANATION: Factorial Calculation (N!)
                 * - Formula: N! = 1 * 2 * 3 * ... * N
                 * - Product accumulator 'p' MUST start at 1.
                 */
                int n;
                printf("Enter number: ");
                scanf("%d", &n);
                int p = 1;
                for (int i = 1; i <= n; i++) {
                    p = p * i;
                }
                printf("Factorial of %d = %d\n", n, p);
                break;
            }

            case 34: {
                /*
                 * EXPLANATION: Cumulative Factorials (First N Factorials)
                 * - OPTIMIZATION: Do NOT run a nested loop to recompute factorials from scratch!
                 * - Simply multiply previous factorial by current number 'i' (p = p * i).
                 */
                int n;
                printf("Enter N: ");
                scanf("%d", &n);
                int p = 1;
                for (int i = 1; i <= n; i++) {
                    p = p * i;
                    printf("Factorial of %d = %d\n", i, p);
                }
                break;
            }

            case 35: {
                /*
                 * EXPLANATION: Nth Fibonacci Number (State Swap Pattern)
                 * - Series: 1, 1, 2, 3, 5, 8, 13...
                 * - Track previous two terms (a, b). Compute sum = a + b.
                 * - Shift states: new 'a' becomes old 'b', new 'b' becomes 'sum'.
                 */
                int n;
                printf("Enter term position (N): ");
                scanf("%d", &n);
                if (n <= 0) {
                    printf("Invalid input\n");
                    break;
                }
                int a = 1, b = 1, sum = 1;
                for (int i = 3; i <= n; i++) {
                    sum = a + b;
                    a = b;
                    b = sum;
                }
                printf("The %d-th Fibonacci number is = %d\n", n, sum);
                break;
            }

            case 36: {
                /*
                 * EXPLANATION: First N Fibonacci Terms Output
                 * - Prints 1, 1 for first two positions, then applies state swap for remaining terms.
                 */
                int n;
                printf("Enter number of terms: ");
                scanf("%d", &n);
                int a = 1, b = 1;
                for (int i = 1; i <= n; i++) {
                    if (i == 1 || i == 2) {
                        printf("1 ");
                    } else {
                        int sum = a + b;
                        printf("%d ", sum);
                        a = b;
                        b = sum;
                    }
                }
                printf("\n");
                break;
            }

            case 37: {
                /*
                 * EXPLANATION: Exponentiation (a^b) via Repeated Multiplication
                 * - Multiply base 'a' by itself 'b' times inside loop.
                 * - Multiplicative accumulator 'power' initialized to 1.
                 */
                int a, b;
                printf("Enter base (a) and exponent (b): ");
                scanf("%d %d", &a, &b);
                int power = 1;
                for (int i = 1; i <= b; i++) {
                    power = power * a;
                }
                printf("%d raised to %d (%d^%d) = %d\n", a, b, a, b, power);
                break;
            }

            case 38: {
                /*
                 * EXPLANATION: ASCII Character Loop
                 * - In C, 'char' types are under the hood 8-bit integers.
                 * - Printing via '%c' outputs character; '%d' outputs internal ASCII code value.
                 */
                printf("Uppercase Alphabets:\n");
                for (char ch = 'A'; ch <= 'Z'; ch++) {
                    printf("%c = %d | ", ch, ch);
                }
                printf("\n\nLowercase Alphabets:\n");
                for (char ch = 'a'; ch <= 'z'; ch++) {
                    printf("%c = %d | ", ch, ch);
                }
                printf("\n");
                break;
            }

            case 39: {
                /*
                 * EXPLANATION: Alternating Sign Series (S = -1 + 2 - 3 + 4 - 5...)
                 * - Odd terms are negative (-i), Even terms are positive (+i).
                 */
                int n;
                printf("Enter number of terms: ");
                scanf("%d", &n);
                int sum = 0;
                for (int i = 1; i <= n; i++) {
                    if (i % 2 != 0) sum -= i;
                    else sum += i;
                }
                printf("Sum of series up to %d terms = %d\n", n, sum);
                break;
            }

            /* =================================================================
               SECTION 7: PRIMES & ARMSTRONG NUMBERS
               ================================================================= */

            case 40: {
                /*
                 * EXPLANATION: Prime Check (Boolean Flag Pattern)
                 * - Definition: Number divisible ONLY by 1 and itself.
                 * - Logic: Test if any factor exists between 2 and X/2.
                 * - If remainder is 0, set flag = false and break early.
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                bool is_prime = true;
                if (x <= 1) is_prime = false;
                else {
                    for (int i = 2; i <= x / 2; i++) {
                        if (x % i == 0) {
                            is_prime = false;
                            break;
                        }
                    }
                }
                if (is_prime) printf("%d is a Prime Number\n", x);
                else printf("%d is a Composite/Non-Prime Number\n", x);
                break;
            }

            case 41: {
                /*
                 * EXPLANATION: Prime Check (sqrt(N) Optimization)
                 * - Mathematical Fact: If N has a factor, at least one factor must be <= sqrt(N).
                 * - Condition 'i * i <= x' is identical to 'i <= sqrt(x)' without using math.h library.
                 * - Dramatically faster for large numbers.
                 */
                int x;
                printf("Enter number: ");
                scanf("%d", &x);
                bool is_prime = true;
                if (x <= 1) is_prime = false;
                else {
                    for (int i = 2; i * i <= x; i++) {
                        if (x % i == 0) {
                            is_prime = false;
                            break;
                        }
                    }
                }
                if (is_prime) printf("%d is Prime (Verified via i*i <= N check)\n", x);
                else printf("%d is Composite\n", x);
                break;
            }

            case 42: {
                /*
                 * EXPLANATION: Range Prime Generation (Nested Loops)
                 * - Outer loop picks candidate number 'i' (2 to N).
                 * - Inner loop tests if candidate 'i' is prime using the sqrt optimization.
                 */
                int n;
                printf("Enter upper limit (N): ");
                scanf("%d", &n);
                printf("Primes between 1 and %d:\n", n);
                for (int i = 2; i <= n; i++) {
                    bool is_prime = true;
                    for (int j = 2; j * j <= i; j++) {
                        if (i % j == 0) {
                            is_prime = false;
                            break;
                        }
                    }
                    if (is_prime) printf("%d ", i);
                }
                printf("\n");
                break;
            }

            case 43: {
                /*
                 * EXPLANATION: Armstrong Number Check (3-digit)
                 * - Definition: Sum of cubes of individual digits equals the number itself.
                 * - Example: 153 = (1^3) + (5^3) + (3^3) = 1 + 125 + 27 = 153.
                 */
                int x;
                printf("Enter 3-digit number: ");
                scanf("%d", &x);
                int backup = x;
                int sum = 0;
                while (x > 0) {
                    int ld = x % 10;
                    sum += (ld * ld * ld);
                    x /= 10;
                }
                if (backup == sum) printf("%d is an Armstrong Number!\n", backup);
                else printf("%d is NOT an Armstrong Number.\n", backup);
                break;
            }

            case 44: {
                /*
                 * EXPLANATION: Range Armstrong Search (1 to 500)
                 * - Outer loop iterates numbers 1..500.
                 * - Inner 'while' extracts digits of temporary copy 'temp' to test Armstrong criteria.
                 */
                printf("Armstrong Numbers between 1 and 500:\n");
                for (int i = 1; i <= 500; i++) {
                    int temp = i;
                    int sum = 0;
                    while (temp > 0) {
                        int ld = temp % 10;
                        sum += (ld * ld * ld);
                        temp /= 10;
                    }
                    if (sum == i) printf("%d ", i);
                }
                printf("\n");
                break;
            }

            /* =================================================================
               SECTION 8: CONTROL FLOW & MENU DEMOS
               ================================================================= */

            case 45: {
                /*
                 * EXPLANATION: Alternating Signal Generator
                 * - Odd steps output 1; Even steps output 0.
                 */
                int n;
                printf("Enter number of terms: ");
                scanf("%d", &n);
                for (int i = 1; i <= n; i++) {
                    if (i % 2 != 0) printf("1 ");
                    else printf("0 ");
                }
                printf("\n");
                break;
            }

            case 46: {
                /*
                 * EXPLANATION: Simple Range Even Sum
                 * - Filters even numbers between 1 and 10 and adds to accumulator.
                 */
                int sum = 0;
                for (int i = 1; i <= 10; i++) {
                    if (i % 2 == 0) sum += i;
                }
                printf("Sum of even numbers 1 to 10 = %d\n", sum);
                break;
            }

            case 47: {
                /*
                 * EXPLANATION: Structural Loop Equivalences
                 * - Demonstrates how 'for', 'while', and 'do-while' achieve identical results.
                 * - Shows critical 'do-while' property: GUARANTEED to execute at least ONCE even if condition is false!
                 */
                printf("Standard For Loop (0-9): ");
                for (int i = 0; i < 10; i++) printf("%d ", i);
                
                printf("\nStandard While Loop (1-10): ");
                int i_w = 1;
                while (i_w <= 10) {
                    printf("%d ", i_w);
                    i_w++;
                }

                printf("\nStandard Do-While Loop (1-10): ");
                int i_dw = 1;
                do {
                    printf("%d ", i_dw);
                    i_dw++;
                } while (i_dw <= 10);

                printf("\nDo-While condition false test (runs once at i=11): ");
                int i_false = 11;
                do {
                    printf("%d ", i_false);
                    i_false++;
                } while (i_false <= 10);
                printf("\n");
                break;
            }

            case 48: {
                /*
                 * EXPLANATION: Nested Sub-Menu Pattern
                 * - Demonstrates wrapping a secondary switch-case inside an inner do-while loop.
                 */
                int sub_choice;
                do {
                    printf("\n  --- SUB MENU ---\n");
                    printf("  1. Play Game\n  2. View Scores\n  0. Exit Sub-Menu\n");
                    printf("  Choice: ");
                    scanf("%d", &sub_choice);
                    switch(sub_choice) {
                        case 1: printf("  Game started...\n"); break;
                        case 2: printf("  Scores loaded...\n"); break;
                        case 0: printf("  Exiting sub-menu...\n"); break;
                        default: printf("  Invalid option!\n"); break;
                    }
                } while (sub_choice != 0);
                break;
            }

            case 49: {
                /*
                 * EXPLANATION: User-Controlled Program Repeat Loop
                 * - Uses do-while to keep executing a calculation until user enters a key other than '3'.
                 */
                int a, b, repeat_code;
                do {
                    printf("Enter a: ");
                    scanf("%d", &a);
                    printf("Enter b: ");
                    scanf("%d", &b);
                    printf("Sum = %d\n", a + b);
                    printf("Press 3 to repeat calculation, or any key to main menu: ");
                    scanf("%d", &repeat_code);
                } while (repeat_code == 3);
                break;
            }

            case 50: {
            /* 
             * PURPOSE: Find Greatest Common Divisor (GCD) & Least Common Multiple (LCM).
             * LOGIC: 
             *   - Euclidean Algorithm: GCD(A, B) = GCD(B, A % B) until B becomes 0.
             *   - At B = 0, current A is the GCD.
             *   - Formula: LCM(A, B) = (A * B) / GCD(A, B).
             */
            int a, b, tempA, tempB, gcd, lcm;
            
            printf("Enter two positive integers (e.g., 24 36): ");
            scanf("%d %d", &a, &b);
            
            // Preserve original values because tempA and tempB will be mutated in the loop
            tempA = a;
            tempB = b;
            
            // Loop runs until the divisor (tempB) reduces to 0 via repeated remainders
            while (tempB != 0) {
                int remainder = tempA % tempB; // STEP 1: Compute remainder of division
                tempA = tempB;                // STEP 2: Shift divisor to dividend position
                tempB = remainder;            // STEP 3: Shift remainder to divisor position
            }
            
            // When tempB becomes 0, tempA holds the final non-zero remainder (GCD)
            gcd = tempA;
            
            // Compute LCM using product relationship; cast avoids overflow on multiplication
            lcm = (a * b) / gcd;
            
            printf("\n--- Results ---\n");
            printf("GCD of %d and %d = %d\n", a, b, gcd);
            printf("LCM of %d and %d = %d\n", a, b, lcm);
            break;
        }

        case 51: {
            /* 
             * PURPOSE: Check if a number is a Perfect Number.
             * DEFINITION: A positive integer equal to the sum of its proper divisors (excluding itself).
             * EXAMPLE: 6 -> Divisors are 1, 2, 3 -> Sum = 1 + 2 + 3 = 6 (Perfect!).
             * LOGIC:
             *   - Iterate from 1 up to N/2 (no proper divisor can exceed N/2).
             *   - If (N % i == 0), i is a divisor; add it to accumulator `sum`.
             */
            int num, sum = 0;
            
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            
            // Optimization: Upper bound is num/2 because no factor of N can exceed N/2 (except N itself)
            for (int i = 1; i <= num / 2; i++) {
                if (num % i == 0) { // i evenly divides num with 0 remainder
                    sum += i;       // Accumulate divisor
                }
            }
            
            printf("\n--- Results ---\n");
            printf("Sum of proper divisors of %d = %d\n", num, sum);
            
            // Validation step: Check if accumulated sum matches original input
            if (sum == num && num > 0) {
                printf("VERDICT: %d is a PERFECT NUMBER.\n", num);
            } else {
                printf("VERDICT: %d is NOT a Perfect Number.\n", num);
            }
            break;
        }

        case 52: {
            /* 
             * PURPOSE: Check if a number is a Strong (Krishnamurthy) Number.
             * DEFINITION: Sum of the factorials of its individual digits equals the number itself.
             * EXAMPLE: 145 -> 1! + 4! + 5! = 1 + 24 + 120 = 145 (Strong!).
             * LOGIC:
             *   - Outer Loop: Extracts digits using `% 10` and reduces using `/ 10`.
             *   - Inner Loop: Calculates factorial (d!) for each extracted digit.
             *   - Accumulate factorials into `sum` and compare with original number.
             */
            int num, temp, digit, sum = 0;
            
            printf("Enter a number: ");
            scanf("%d", &num);
            
            // Store original value in `temp` to keep `num` safe for final comparison
            temp = num;
            
            // Outer Loop: Extract each digit until number drops to 0
            while (temp > 0) {
                digit = temp % 10; // Extract rightmost digit
                
                // --- Inner Loop: Compute factorial of `digit` ---
                int fact = 1;
                for (int i = 1; i <= digit; i++) {
                    fact *= i; // Multiply sequentially: 1 * 2 * ... * digit
                }
                
                sum += fact;  // Add factorial of current digit to total sum
                temp /= 10;   // Remove rightmost digit from temp
            }
            
            printf("\n--- Results ---\n");
            printf("Sum of digit factorials for %d = %d\n", num, sum);
            
            if (sum == num && num > 0) {
                printf("VERDICT: %d is a STRONG NUMBER.\n", num);
            } else {
                printf("VERDICT: %d is NOT a Strong Number.\n", num);
            }
            break;
        }

        case 53: {
            /* 
             * PURPOSE: Read dynamic user input until a termination signal ("Sentinel Value") is given.
             * USE CASE: Processing unknown quantities of data (e.g., streaming inputs, UI menu loops).
             * LOGIC:
             *   - Infinite loop `while(1)` runs continuously.
             *   - Reads input on each iteration.
             *   - Evaluates Sentinel Condition (`input == -1`).
             *   - Triggers explicit `break` to escape loop safely when sentinel is detected.
             */
            int input, sum = 0, count = 0;
            
            printf("--- Sentinel Loop Demo ---\n");
            printf("Enter integers continuously. Type '-1' to STOP and calculate summary.\n\n");
            
            while (1) { // Infinite loop execution pattern
                printf("Enter integer #%d: ", count + 1);
                scanf("%d", &input);
                
                // Sentinel Evaluation Check
                if (input == -1) {
                    printf(">>> Sentinel (-1) detected. Terminating input stream...\n");
                    break; // Immediate termination of loop execution
                }
                
                sum += input; // Process valid input data
                count++;      // Increment valid entry counter
            }
            
            printf("\n--- Data Summary ---\n");
            printf("Total Valid Entries Entered: %d\n", count);
            printf("Calculated Total Sum: %d\n", sum);
            if (count > 0) {
                printf("Average Value: %.2f\n", (float)sum / count);
            }
            break;
        }

        case 54: {
            /* 
             * PURPOSE: Convert a base-10 Decimal integer to a base-2 Binary number.
             * LOGIC (Reconstruction via Place Value without arrays):
             *   - Step 1: Divide decimal by 2; remainder (`temp % 2`) is the binary digit.
             *   - Step 2: Multiply binary digit by current decimal place (`1, 10, 100, 1000...`).
             *   - Step 3: Add to `binary` accumulator to build representation.
             *   - Step 4: Divide `temp` by 2 (`temp /= 2`) and scale place by 10 (`place *= 10`).
             */
            int num, temp, binary = 0, place = 1;
            
            printf("Enter a positive decimal number: ");
            scanf("%d", &num);
            
            temp = num; // Preserve original input
            
            // Loop runs until base-10 value is fully reduced to 0
            while (temp > 0) {
                int rem = temp % 2;      // Get binary digit (0 or 1)
                binary += rem * place;  // Position bit in correct decimal column
                place *= 10;            // Shift decimal column left (1 -> 10 -> 100 -> 1000)
                temp /= 2;              // Reduce decimal number by base-2 division
            }
            
            printf("\n--- Conversion Output ---\n");
            printf("Decimal Form: %d\n", num);
            printf("Binary  Form: %d (Base-2 representation)\n", binary);
            break;
        }

            case 0:
                printf("Exiting program... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Select a number between 0 and 49.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}