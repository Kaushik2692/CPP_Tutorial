# C++ Input and Output (I/O)

## What is `<iostream>`?

`<iostream>` stands for **Input Output Stream**.

It provides the standard input and output stream objects used to communicate with the console.

```cpp
#include <iostream>
```

### Stream Objects

| Object | Purpose |
|---------|---------|
| `std::cout` | Prints output to the console. |
| `std::cin` | Reads input from the keyboard. |
| `std::cerr` | Prints error messages. |
| `std::clog` | Prints logging and diagnostic messages. |

---

# Streams

A **stream** is a flow of data.

```text
Keyboard
    │
    ▼
Input Stream (std::cin)
    │
 Program
    │
Output Stream (std::cout)
    ▼
Monitor
```

---

# std::cout

`std::cout` is used to display output on the console.

## Syntax

```cpp
std::cout << value;
```

Example

```cpp
std::cout << "Hello, World!\n";
```

Output

```text
Hello, World!
```

---

# Stream Insertion Operator (`<<`)

The `<<` operator is called the **stream insertion operator**.

It inserts data into the output stream.

Example

```cpp
int age{20};

std::cout << age;
```

Output

```text
20
```

---

# Chaining Output

You can print multiple values in one statement.

```cpp
int age{20};

std::cout << "Age = " << age << '\n';
```

Output

```text
Age = 20
```

---

# New Line

There are two common ways to move to the next line.

Using `'\n'`

```cpp
std::cout << "Hello\n";
```

Using `std::endl`

```cpp
std::cout << "Hello" << std::endl;
```

### Difference

`'\n'`

- Prints a new line.
- Does **not** flush the output buffer.
- Faster.

`std::endl`

- Prints a new line.
- Flushes the output buffer immediately.
- Slightly slower.

### Best Practice

Prefer

```cpp
'\n'
```

Use `std::endl` only when immediate output is required.

---

# Escape Sequences

Escape sequences begin with a backslash (`\`).

| Escape Sequence | Meaning |
|-----------------|---------|
| `\n` | New line |
| `\t` | Horizontal tab |
| `\b` | Backspace |
| `\r` | Carriage return |
| `\\` | Backslash |
| `\'` | Single quote |
| `\"` | Double quote |
| `\a` | Alert/Bell sound |

Example

```cpp
std::cout << "Name\tAge\n";
std::cout << "Kaushik\t20\n";
```

Output

```text
Name    Age
Kaushik 20
```

---

# std::cin

`std::cin` is used to receive input from the keyboard.

## Syntax

```cpp
std::cin >> variable;
```

Example

```cpp
int age{};

std::cout << "Enter your age: ";
std::cin >> age;

std::cout << "Age = " << age << '\n';
```

Input

```text
20
```

Output

```text
Age = 20
```

---

# Stream Extraction Operator (`>>`)

The `>>` operator is called the **stream extraction operator**.

It extracts data from the input stream and stores it inside a variable.

```text
Keyboard

↓

std::cin

↓

Variable
```

---

# Reading Multiple Inputs

You can read multiple values in a single statement.

```cpp
int x{};
int y{};

std::cin >> x >> y;
```

Input

```text
10 20
```

Output

```cpp
std::cout << x << ' ' << y;
```

```text
10 20
```

---

# Input Validation

Never assume that the user enters the correct type of data.

Example

```cpp
int age{};

if (!(std::cin >> age))
{
    std::cout << "Invalid input\n";
}
```

Input

```text
abc
```

Output

```text
Invalid input
```

---

# Why Validation Fails

If the user enters an invalid value, the input stream enters the **fail state**.

Once this happens, future input operations will also fail until the stream is reset.

---

# Recovering from Invalid Input

```cpp
#include <limits>

std::cin.clear();

std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
```

### `std::cin.clear()`

Removes the fail state and allows input operations to continue.

### `std::cin.ignore()`

Discards unwanted characters remaining in the input buffer.

This prevents the invalid input from affecting the next input operation.

---

# std::cerr

`std::cerr` is used to print error messages.

Example

```cpp
std::cerr << "Error: File not found\n";
```

Characteristics

- Standard error stream.
- Usually unbuffered.
- Displays errors immediately.

---

# std::clog

`std::clog` is used for logging and diagnostic messages.

Example

```cpp
std::clog << "Program started\n";
```

Characteristics

- Standard logging stream.
- Usually buffered.
- More efficient for general logging than `std::cerr`.

---

# Comments

Comments make code easier to understand.

## Single-Line Comment

```cpp
// This is a single-line comment.
```

---

## Multi-Line Comment

```cpp
/*
This is
a multi-line
comment.
*/
```

---

# Good Comments

Good comments explain **why** something is done.

```cpp
// Validate user input before continuing.
```

---

# Bad Comments

Avoid comments that simply repeat the code.

```cpp
// Declare age variable
int age{};
```

The code already explains that.

---

# Best Practices

- Include only the headers you need.
- Always write `std::` before standard library objects.
- Do **not** use `using namespace std;`.
- Prefer brace initialization.

```cpp
int age{};
```

- Prefer `'\n'` instead of `std::endl`.
- Validate all user input.
- Use meaningful variable names.
- Keep comments short and useful.

---

# Summary

| Component | Purpose |
|-----------|---------|
| `std::cout` | Standard output stream |
| `std::cin` | Standard input stream |
| `std::cerr` | Error output stream |
| `std::clog` | Logging stream |
| `<<` | Stream insertion operator |
| `>>` | Stream extraction operator |
| `'\n'` | New line (recommended) |
| `std::endl` | New line + flush output buffer |
| `std::cin.clear()` | Clears stream error flags |
| `std::cin.ignore()` | Discards unwanted input from the buffer |
| `//` | Single-line comment |
| `/* ... */` | Multi-line comment |
