# C++ Data Types (Complete Guide)

---

# What Is a Data Type?

A **data type** tells the compiler:

- What kind of value a variable can store
- How much memory to allocate
- How the stored bits should be interpreted
- Which operations are allowed on the value

Example:

```cpp
int age = 20;
```

Here:

- `int` → Data type
- `age` → Variable
- `20` → Value

The compiler now knows that `age` stores an integer.

---

# Why Do We Need Data Types?

Everything inside a computer is stored as **binary (0s and 1s)**.

Without a data type, the compiler cannot determine:

- How many bytes should be allocated
- Whether the stored bits represent an integer, decimal number, character, or something else
- Which mathematical operations are valid
- How the value should be displayed

Example:

```
01000001
```

Depending on its data type, this same binary pattern could represent:

- Integer `65`
- Character `'A'`
- Part of a floating-point number

A data type gives meaning to raw binary data.

---

# Classification of Data Types

C++ data types are classified into four major categories.

```
Data Types
│
├── Fundamental (Built-in)
│     ├── bool
│     ├── char
│     ├── int
│     ├── float
│     ├── double
│     ├── void
│     └── nullptr_t
│
├── Derived
│     ├── Arrays
│     ├── Pointers
│     ├── References
│     └── Functions
│
├── User-defined
│     ├── class
│     ├── struct
│     ├── union
│     ├── enum
│     └── type aliases
│
└── Library Types
      ├── std::string
      ├── std::vector
      ├── std::array
      ├── std::optional
      └── many more...
```

---

# Fundamental Data Types

Fundamental (or built-in) data types are provided directly by the C++ language.

They are the building blocks from which more complex data types are created.

---

# Integer Types

Integer types store **whole numbers** without decimal points.

Examples:

```text
0
15
-25
1000
250000
```

---

## int

`int` is the most commonly used integer type.

```cpp
int age = 20;
```

Typical size:

```
4 bytes
```

Typical range:

```
-2,147,483,648
to
2,147,483,647
```

Example:

```cpp
int students = 120;
```

Use `int` whenever you need ordinary whole numbers.

---

## short

`short` stores smaller integers than `int`.

```cpp
short temperature = 25;
```

Typical size:

```
2 bytes
```

Typical range:

```
-32,768
to
32,767
```

Useful when memory usage matters.

---

## long

`long` stores larger integers.

```cpp
long population = 5000000;
```

Its size depends on the operating system and compiler.

Usually:

- Windows → 4 bytes
- Linux (64-bit) → 8 bytes

---

## long long

`long long` stores very large integers.

```cpp
long long stars = 9223372036854775807LL;
```

Typical size:

```
8 bytes
```

Typical range:

```
-9,223,372,036,854,775,808
to
9,223,372,036,854,775,807
```

---

# Integer Type Hierarchy

```
short
   │
   ▼
int
   │
   ▼
long
   │
   ▼
long long
```

Each type generally supports a larger range than the previous one.

---

# Signed Integers

By default, integer types are **signed**.

They can store both positive and negative values.

```cpp
int x = -10;
signed int y = -20;
```

These declarations are identical.

```
int
```

is equivalent to

```
signed int
```

---

# Unsigned Integers

Unsigned integers cannot store negative values.

Instead, all bits are used for positive numbers.

```cpp
unsigned int score = 100;
```

Typical range:

```
0
to
4294967295
```

Example:

```cpp
unsigned int lives = 3;
```

The following is not appropriate:

```cpp
unsigned int value = -5;
```

The value is converted into a very large positive number.

Use unsigned integers only when negative values are impossible.

---

# Integer Modifiers

C++ provides four integer modifiers.

```
signed
unsigned
short
long
```

Examples:

```cpp
unsigned short
unsigned int
unsigned long
long long
signed char
```

Modifiers change the size or range of a data type.

---

# Floating-Point Types

Floating-point types store **numbers containing decimal points**.

Examples:

```
3.14
9.81
0.001
-25.75
```

---

## float

Stores decimal numbers with single precision.

```cpp
float pi = 3.14f;
```

Typical size:

```
4 bytes
```

Precision:

```
Approximately 6–7 decimal digits
```

Notice the suffix:

```cpp
f
```

It tells the compiler the literal is a `float`.

---

## double

Stores decimal numbers with double precision.

```cpp
double price = 99.99;
```

Typical size:

```
8 bytes
```

Precision:

```
Approximately 15–16 decimal digits
```

`double` is usually preferred over `float`.

---

## long double

Provides even greater precision than `double`.

```cpp
long double precise = 3.141592653589793238L;
```

The suffix:

```cpp
L
```

indicates a `long double` literal.

Its size depends on the compiler.

---

# Floating-Point Comparison

| Type | Typical Size | Precision |
|------|-------------:|-----------|
| float | 4 bytes | 6–7 digits |
| double | 8 bytes | 15–16 digits |
| long double | Implementation-defined | At least as much as double |

---

# Character Types

Character types store individual character code values.

---

## char

```cpp
char grade = 'A';
```

Characters are enclosed in **single quotes**.

Examples:

```cpp
'A'
'Z'
'0'
'$'
```

Typical size:

```
1 byte
```

Internally, a character is stored as an integer code.

Example:

```
'A'
```

ASCII value:

```
65
```

---

## signed char

Stores small signed integers.

```cpp
signed char number = -100;
```

---

## unsigned char

Stores small positive integers.

```cpp
unsigned char number = 255;
```

---

## wchar_t

Stores wide characters.

```cpp
wchar_t letter = L'A';
```

Useful for larger character sets.

---

## char8_t

Introduced in C++20.

Stores UTF-8 code units.

```cpp
char8_t c = u8'A';
```

---

## char16_t

Stores UTF-16 code units.

```cpp
char16_t c = u'A';
```

---

## char32_t

Stores UTF-32 code units.

```cpp
char32_t c = U'A';
```

---

# Boolean Type

Stores logical values.

```cpp
bool isLoggedIn = true;
```

Possible values:

```
true
false
```

Example:

```cpp
bool rain = false;
```

Boolean variables are commonly used in:

- Conditions
- Loops
- Comparisons
- Decision making

---

# void

`void` means **no value**.

Used mainly for functions.

```cpp
void printMessage()
{
    std::cout << "Hello";
}
```

Also used for generic pointers.

```cpp
void* ptr = nullptr;
```

---

# std::nullptr_t

Represents the type of the `nullptr` keyword.

```cpp
std::nullptr_t p = nullptr;
```

Mostly used in generic programming.

---

# Data Type Sizes

The actual size of a type depends on the compiler and operating system.

Use the `sizeof` operator to determine the size.

Example:

```cpp
std::cout << sizeof(int);
```

More examples:

```cpp
std::cout << sizeof(char) << '\n';
std::cout << sizeof(int) << '\n';
std::cout << sizeof(double) << '\n';
```

---

# Why Sizes Differ

The C++ Standard specifies **minimum sizes**, not exact sizes.

Minimum guarantees:

| Type | Minimum Size |
|------|-------------:|
| char | 1 byte |
| short | 16 bits |
| int | At least 16 bits |
| long | At least 32 bits |
| long long | At least 64 bits |

Different systems may choose different sizes.

---

# Fixed-Width Integer Types

Sometimes programs require integers with **exact sizes**.

C++ provides these in:

```cpp
#include <cstdint>
```

Available types:

```cpp
std::int8_t
std::int16_t
std::int32_t
std::int64_t

std::uint8_t
std::uint16_t
std::uint32_t
std::uint64_t
```

Example:

```cpp
std::int32_t id = 100;
std::uint64_t fileSize = 5000000000ULL;
```

These are commonly used in:

- File formats
- Networking
- Embedded systems
- Game engines

---

# Type Inference (`auto`)

Instead of writing the data type manually, the compiler can determine it automatically.

```cpp
auto age = 20;
```

Equivalent to:

```cpp
int age = 20;
```

More examples:

```cpp
auto number = 100;
auto pi = 3.14;
auto letter = 'A';
auto flag = true;
```

The compiler deduces:

```
100 → int
3.14 → double
'A' → char
true → bool
```

`auto` always requires initialization.

---

# Integer Overflow

Overflow occurs when a value exceeds the maximum capacity of its data type.

Example:

```cpp
int x = 2147483647;
x = x + 1;
```

Signed integer overflow results in **undefined behavior**.

Unsigned integers wrap around automatically.

---

# Floating-Point Precision

Floating-point numbers cannot represent every decimal value exactly.

Example:

```cpp
double x = 0.1;
double y = 0.2;

std::cout << x + y;
```

Possible output:

```
0.30000000000000004
```

This is normal.

Never compare floating-point numbers using `==` unless you understand the precision limitations.

---

# Numeric Limits

To find the minimum and maximum values of a data type:

```cpp
#include <limits>
```

Example:

```cpp
std::cout << std::numeric_limits<int>::min();
std::cout << std::numeric_limits<int>::max();
```

This works for all fundamental numeric types.

---

# Choosing the Right Data Type

| Situation | Recommended Type |
|-----------|------------------|
| Whole numbers | int |
| Very large integers | long long |
| Decimal numbers | double |
| Memory-sensitive decimals | float |
| Logical values | bool |
| Single characters | char |
| Exact integer sizes | std::int32_t, std::uint64_t |

---

# Best Practices

- Always initialize variables.
- Prefer `int` for ordinary integers.
- Prefer `double` over `float` unless memory is limited.
- Use `bool` for logical values.
- Use `char` for single characters.
- Use fixed-width integer types when exact sizes matter.
- Use `auto` when it improves readability.
- Use `sizeof` instead of assuming type sizes.

---

# Summary

| Category | Types |
|----------|-------|
| Integer | short, int, long, long long |
| Unsigned | unsigned short, unsigned int, unsigned long, unsigned long long |
| Floating Point | float, double, long double |
| Character | char, signed char, unsigned char, wchar_t, char8_t, char16_t, char32_t |
| Boolean | bool |
| Special | void, std::nullptr_t |
| Fixed Width | std::int8_t, std::int16_t, std::int32_t, std::int64_t |
| Type Inference | auto |

---

# Key Takeaways

- Every variable has a data type.
- A data type determines memory usage, value range, and allowed operations.
- Integer types store whole numbers.
- Floating-point types store decimal numbers.
- Character types store character code values.
- Boolean stores `true` or `false`.
- `void` represents no value.
- `nullptr_t` represents the type of `nullptr`.
- Use `sizeof` to determine type sizes.
- Use `<cstdint>` for fixed-width integer types.
- Use `auto` when the type is obvious.
- Prefer `double` over `float` for most calculations.
- Choose the smallest type that correctly represents your data.
