# C++ Constants

---

# 1. Constant Fundamentals

## What is a Constant?

A **constant** is a value that **cannot be modified after it has been initialized**.

Unlike a variable, whose value can change during program execution, a constant remains the same throughout its lifetime.

Constants help make programs safer, easier to understand, and less prone to bugs.

### Example

```cpp
const int daysInWeek = 7;
```

Here,

- `const` → specifies that the value cannot be changed.
- `int` → data type.
- `daysInWeek` → constant name.
- `7` → constant value.

Attempting to modify it will produce a compilation error.

```cpp
daysInWeek = 5;    // Error
```

---

## Why Use Constants?

Constants improve the quality of your programs in many ways.

### Prevent Accidental Modification

```cpp
const double pi = 3.141592653589793;

pi = 5.0;      // Error
```

The compiler prevents accidental changes.

---

### Improve Readability

Bad

```cpp
double area = radius * radius * 3.141592653589793;
```

Good

```cpp
const double pi = 3.141592653589793;

double area = radius * radius * pi;
```

The second version clearly explains the purpose of the number.

---

### Avoid Magic Numbers

A **magic number** is an unexplained numeric value.

Bad

```cpp
salary += 5000;
```

Good

```cpp
const int annualBonus = 5000;

salary += annualBonus;
```

Named constants make code self-explanatory.

---

### Easier Maintenance

If the value changes, update it in one place.

```cpp
const int maxPlayers = 100;
```

Instead of searching through hundreds of files, you only modify one constant.

---

## Variables vs Constants

| Variable | Constant |
|----------|----------|
| Can change | Cannot change |
| Uses normal assignment | Read-only after initialization |
| Suitable for changing values | Suitable for fixed values |

Example

```cpp
int score = 50;

score = 80;
```

Valid.

---

```cpp
const int score = 50;

score = 80;
```

Compilation error.

---

# 2. `const`

## What is `const`?

`const` tells the compiler that an object cannot be modified after initialization.

Syntax

```cpp
const type name = value;
```

Example

```cpp
const int age = 20;
```

---

## Constant Variables

A constant variable behaves like a normal variable except that its value cannot be changed.

```cpp
const double gravity = 9.81;
```

Later,

```cpp
gravity = 10.5;
```

Compilation error.

---

## Constant Initialization

Every `const` object **must be initialized** when it is created.

Correct

```cpp
const int size = 100;
```

Incorrect

```cpp
const int size;
```

The compiler reports an error because there is no initial value.

---

## Constant Expressions

A **constant expression** is an expression whose value can be determined at compile time.

Example

```cpp
const int value = 10;

const int square = value * value;
```

If every value involved is known during compilation, the compiler can evaluate the expression immediately.

---

# 3. `constexpr`

## What is `constexpr`?

`constexpr` declares that a value **must be evaluable at compile time** whenever possible.

Introduced in C++11 and significantly expanded in later standards.

Syntax

```cpp
constexpr type name = value;
```

Example

```cpp
constexpr int maxStudents = 60;
```

---

## Compile-Time Constants

Since the compiler already knows the value, it can optimize the program.

```cpp
constexpr int secondsPerMinute = 60;
```

No runtime calculation is needed.

---

## Constant Evaluation

Example

```cpp
constexpr int width = 20;
constexpr int height = 10;

constexpr int area = width * height;
```

The compiler computes

```
20 × 10 = 200
```

before the program even starts.

---

## `constexpr` Variables

```cpp
constexpr double pi = 3.141592653589793;
```

These variables are ideal for

- Mathematical constants
- Array sizes
- Template arguments
- Compile-time calculations

---

# `const` vs `constexpr`

```cpp
const int a = 10;
constexpr int b = 10;
```

Both cannot be modified.

The difference is that `constexpr` guarantees compile-time evaluation whenever possible.

| `const` | `constexpr` |
|----------|-------------|
| Read-only | Read-only |
| May be runtime | Compile-time whenever possible |
| Introduced in C++98 | Introduced in C++11 |

Modern C++ generally prefers `constexpr` for compile-time constants.

---

# 4. `consteval`

## What is `consteval`?

Introduced in **C++20**, `consteval` forces a function to be evaluated **only at compile time**.

Unlike `constexpr`, a `consteval` function **must** produce its result during compilation.

Example

```cpp
consteval int square(int x)
{
    return x * x;
}
```

Usage

```cpp
constexpr int result = square(5);
```

The compiler calculates

```
25
```

before the program runs.

Attempting to call a `consteval` function in a context that requires runtime evaluation results in a compilation error.

---

# 5. `constinit`

## What is `constinit`?

Introduced in **C++20**, `constinit` ensures that a variable with static or thread storage duration is initialized during **static initialization**, before the program begins executing.

It helps prevent problems caused by dynamic initialization.

Example

```cpp
constinit int counter = 0;
```

Unlike `constexpr`, the variable **does not have to be immutable**.

```cpp
constinit int counter = 0;

counter++;
```

This is valid.

---

## Why Use `constinit`?

It guarantees that initialization happens before any code uses the variable, avoiding initialization-order issues between different source files.

---

# `const` vs `constexpr` vs `constinit`

| Feature | `const` | `constexpr` | `constinit` |
|----------|----------|-------------|-------------|
| Read-only | Yes | Yes | No |
| Compile-time value | Sometimes | Yes | Not required |
| Static initialization | Not guaranteed | Yes | Yes |

---

# Common Uses of Constants

Constants are commonly used for

- Mathematical values

```cpp
constexpr double pi = 3.141592653589793;
```

---

- Physical constants

```cpp
constexpr double gravity = 9.81;
```

---

- Program limits

```cpp
constexpr int maxUsers = 1000;
```

---

- Buffer sizes

```cpp
constexpr std::size_t bufferSize = 1024;
```

---

- Configuration values

```cpp
constexpr int defaultPort = 8080;
```

---

# Best Practices

- Always initialize constants.
- Prefer `constexpr` for compile-time constants.
- Use `const` when a value should not change but may not be known until runtime.
- Use descriptive names for constants.
- Replace magic numbers with named constants.
- Use `consteval` when a function must always be evaluated at compile time.
- Use `constinit` for static variables that must be initialized before program execution.

---

# Summary

A constant is a value that cannot be modified after initialization.

Modern C++ provides several ways to define constants, each with a specific purpose:

- **`const`** — Creates read-only objects whose value cannot change after initialization.
- **`constexpr`** — Defines compile-time constants and enables compile-time computation.
- **`consteval`** — Ensures functions are evaluated only during compilation.
- **`constinit`** — Guarantees static initialization for variables with static or thread storage duration.

Using the appropriate kind of constant improves code safety, readability, maintainability, and allows the compiler to perform more optimizations.
