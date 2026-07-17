# C++ Arithmetic Operators

---

# Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

| Operator | Name | Description |
|----------|------|-------------|
| `+` | Addition | Adds two values |
| `-` | Subtraction | Subtracts one value from another |
| `*` | Multiplication | Multiplies two values |
| `/` | Division | Divides one value by another |
| `%` | Modulus (Remainder) | Returns the remainder after integer division |

---

# Example Program

```cpp
#include <iostream>

int main()
{
    /** ARITHMETIC OPERATORS
     * + (Addition)
     * - (Subtraction)
     * * (Multiplication)
     * / (Division)
     * % (Modulus)
     */

    int a = 10;
    int b = 5;

    std::cout << a + b << '\n';
    std::cout << a - b << '\n';
    std::cout << a * b << '\n';
    std::cout << a / b << '\n';
    std::cout << a % b << '\n';

    // Unary +
    std::cout << +a << '\n';

    // Unary -
    std::cout << -a << '\n';

    return 0;
}
```

---

# Addition (`+`)

Adds two numbers together.

## Syntax

```cpp
result = operand1 + operand2;
```

## Example

```cpp
int a = 10;
int b = 5;

std::cout << a + b;
```

### Output

```
15
```

---

## Addition with Variables

```cpp
int x = 100;
int y = 25;

int sum = x + y;

std::cout << sum;
```

Output

```
125
```

---

## Addition with Floating Point Numbers

```cpp
double x = 5.5;
double y = 2.3;

std::cout << x + y;
```

Output

```
7.8
```

---

# Subtraction (`-`)

Subtracts the second operand from the first.

## Syntax

```cpp
result = operand1 - operand2;
```

## Example

```cpp
int a = 10;
int b = 5;

std::cout << a - b;
```

Output

```
5
```

---

## Negative Result

```cpp
int a = 5;
int b = 10;

std::cout << a - b;
```

Output

```
-5
```

---

# Multiplication (`*`)

Multiplies two values.

## Syntax

```cpp
result = operand1 * operand2;
```

## Example

```cpp
int a = 10;
int b = 5;

std::cout << a * b;
```

Output

```
50
```

---

## Floating Point Multiplication

```cpp
double a = 2.5;
double b = 3.0;

std::cout << a * b;
```

Output

```
7.5
```

---

# Division (`/`)

Divides the left operand by the right operand.

## Syntax

```cpp
result = operand1 / operand2;
```

---

# Integer Division

When **both operands are integers**, C++ performs **integer division**.

The fractional part is discarded.

```cpp
int a = 10;
int b = 3;

std::cout << a / b;
```

Output

```
3
```

The actual answer is

```
3.333333...
```

But C++ stores only

```
3
```

because both operands are integers.

---

# Floating Point Division

If **at least one operand is floating-point**, C++ performs floating-point division.

```cpp
double a = 10;
double b = 3;

std::cout << a / b;
```

Output

```
3.33333
```

---

## Mixed Division

```cpp
int a = 10;
double b = 4;

std::cout << a / b;
```

Output

```
2.5
```

---

# Division Rules

| Expression | Result Type |
|------------|-------------|
| `int / int` | Integer |
| `int / float` | Floating Point |
| `float / int` | Floating Point |
| `float / float` | Floating Point |
| `int / double` | Double |
| `double / int` | Double |

---

# Division by Zero

## Integer Division

```cpp
int a = 10;

std::cout << a / 0;
```

This is **undefined behavior**. On most systems, the program will crash or terminate with a runtime error.

---

## Floating Point Division

```cpp
double a = 10.0;
double b = 0.0;

std::cout << a / b;
```

According to the IEEE 754 floating-point standard, this typically produces:

```
inf
```

or

```
-infinity
```

or

```
nan
```

depending on the operands and platform.

---

# Modulus Operator (`%`)

Returns the remainder after integer division.

## Syntax

```cpp
result = operand1 % operand2;
```

---

## Example

```cpp
10 % 3
```

Division

```
10 ÷ 3 = 3 remainder 1
```

Output

```
1
```

---

## More Examples

```cpp
17 % 5
```

Output

```
2
```

---

```cpp
20 % 4
```

Output

```
0
```

---

## Important Notes

The modulus operator works only with **integral types** such as:

- `int`
- `long`
- `long long`
- `short`
- `char`

The following is invalid:

```cpp
double x = 10.5;
double y = 3.2;

std::cout << x % y;
```

This will not compile because `%` is not defined for floating-point types.

---

# Unary Plus (`+`)

Unary plus returns the value unchanged.

## Syntax

```cpp
+value
```

---

## Example

```cpp
int a = 10;

std::cout << +a;
```

Output

```
10
```

---

## Example

```cpp
int a = -20;

std::cout << +a;
```

Output

```
-20
```

It simply preserves the value.

---

# Unary Minus (`-`)

Unary minus changes the sign of the operand.

## Syntax

```cpp
-value
```

---

## Example

```cpp
int a = 15;

std::cout << -a;
```

Output

```
-15
```

---

## Example

```cpp
int a = -15;

std::cout << -a;
```

Output

```
15
```

---

# Order of Operations

Arithmetic operators follow standard mathematical precedence.

| Priority | Operator |
|----------|----------|
| Highest | `()` |
| | Unary `+` `-` |
| | `*` `/` `%` |
| Lowest | `+` `-` |

---

## Example

```cpp
std::cout << 2 + 3 * 4;
```

Output

```
14
```

because multiplication is performed first.

---

Using parentheses:

```cpp
std::cout << (2 + 3) * 4;
```

Output

```
20
```

---

# Best Practices

- Use descriptive variable names.
- Prefer `double` when fractional results are required.
- Never divide by zero.
- Use parentheses to improve readability.
- Use `'\n'` instead of `std::endl` unless flushing the output stream is necessary.
- Be aware that integer division discards the fractional part.

---

# Summary

| Operator | Purpose | Example | Result |
|----------|---------|---------|--------|
| `+` | Addition | `10 + 5` | `15` |
| `-` | Subtraction | `10 - 5` | `5` |
| `*` | Multiplication | `10 * 5` | `50` |
| `/` | Division | `10 / 5` | `2` |
| `%` | Remainder | `10 % 3` | `1` |
| Unary `+` | Keeps sign | `+10` | `10` |
| Unary `-` | Changes sign | `-10` | `-10` |
