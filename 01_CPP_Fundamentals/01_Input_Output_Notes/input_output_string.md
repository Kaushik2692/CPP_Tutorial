# C++ String Input

## Required Header Files

```cpp
#include <iostream>
#include <string>
#include <limits>
```

### Why These Headers?

| Header | Purpose |
|---------|---------|
| `<iostream>` | Provides `std::cin` and `std::cout`. |
| `<string>` | Provides the `std::string` class. |
| `<limits>` | Provides `std::numeric_limits`, used with `std::cin.ignore()`. |

---

# What is `std::string`?

`std::string` is a class provided by the C++ Standard Library that stores and manipulates text.

Example

```cpp
std::string name{};
```

This creates an empty string variable named `name`.

---

# Reading a String Using `std::cin`

The simplest way to read a string is using `std::cin`.

## Syntax

```cpp
std::cin >> variable;
```

Example

```cpp
std::string fullName{};

std::cin >> fullName;
```

### Input

```text
Elon
```

Output

```text
Elon
```

Everything works correctly.

---

# The Limitation of `std::cin`

Suppose the user enters

```text
Elon Musk
```

Code

```cpp
std::string fullName{};

std::cin >> fullName;
```

Output

```text
Elon
```

Only the first word is stored.

---

# Why Does This Happen?

`std::cin` reads characters until it encounters the first **whitespace**.

Whitespace includes

- Space (`' '`)
- Tab (`'\t'`)
- Newline (`'\n'`)

Input

```text
Elon Musk
```

Buffer

```text
E l o n _ M u s k \n
```

(`_` represents a space.)

`std::cin` reads

```text
Elon
```

Then it stops because it reaches a space.

The remaining characters stay in the input buffer.

```text
Musk\n
```

---

# Reading an Entire Line

To read an entire line, use `std::getline()`.

## Syntax

```cpp
std::getline(std::cin, variable);
```

Example

```cpp
std::string fullName{};

std::getline(std::cin, fullName);
```

Input

```text
Elon Musk
```

Output

```text
Elon Musk
```

Unlike `std::cin`, `std::getline()` reads spaces as part of the string.

---

# How `std::getline()` Works

Suppose the user enters

```text
Elon Musk
```

Buffer

```text
E l o n _ M u s k \n
```

`std::getline()` reads every character

```text
E
l
o
n
Space
M
u
s
k
```

It stops only when it reaches

```text
\n
```

The newline character is discarded and **not stored** in the string.

---

# The Famous Problem

Consider the following program.

```cpp
int age{};
std::string name{};

std::cout << "Age: ";
std::cin >> age;

std::cout << "Name: ";
std::getline(std::cin, name);

std::cout << "Age = " << age << '\n';
std::cout << "Name = " << name << '\n';
```

Input

```text
18
Kaushik
```

Output

```text
Age = 18
Name =
```

The name is empty.

---

# Why Does This Happen?

Suppose the user enters

```text
18
```

After pressing Enter, the input buffer contains

```text
1 8 \n
```

`std::cin >> age`

reads

```text
18
```

but leaves

```text
\n
```

inside the input buffer.

Next,

```cpp
std::getline(std::cin, name);
```

immediately sees

```text
\n
```

Since a newline means "end of the line", `std::getline()` returns an empty string.

---

# Visual Representation

Before `std::cin`

```text
+---+---+----+
| 1 | 8 | \n |
+---+---+----+
```

↓

`std::cin >> age`

Reads

```text
18
```

Leaves

```text
+----+
| \n |
+----+
```

↓

`std::getline()`

Immediately finds

```text
\n
```

Returns

```text
""
```

---

# Solution: `std::cin.ignore()`

Before calling `std::getline()`, remove the leftover newline.

```cpp
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
```

Complete Example

```cpp
int age{};
std::string name{};

std::cout << "Age: ";
std::cin >> age;

std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

std::cout << "Name: ";
std::getline(std::cin, name);

std::cout << "Age = " << age << '\n';
std::cout << "Name = " << name << '\n';
```

Input

```text
18
Kaushik Gowda
```

Output

```text
Age = 18
Name = Kaushik Gowda
```

---

# Understanding `std::cin.ignore()`

```cpp
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
```

It has two arguments.

## First Argument

```cpp
std::numeric_limits<std::streamsize>::max()
```

Returns the largest possible value of `std::streamsize`.

This tells `ignore()` that it may discard as many characters as necessary.

---

## Second Argument

```cpp
'\n'
```

Tells `ignore()` to stop discarding characters once it encounters a newline.

---

# How `ignore()` Works

Suppose the input buffer contains

```text
abc123\n
```

`ignore()` removes

```text
a
b
c
1
2
3
\n
```

The buffer becomes empty.

The next input operation starts with fresh input from the user.

---

# Why Use `std::numeric_limits`?

Suppose the user types

```text
18abc
```

Buffer

```text
1 8 a b c \n
```

Using

```cpp
std::cin.ignore();
```

removes only one character.

Remaining buffer

```text
b c \n
```

This can still interfere with future input.

Using

```cpp
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
```

removes

```text
a b c \n
```

Everything after the valid input is discarded.

---

# When to Use `std::cin`

Use `std::cin` for

- Single words
- Numbers
- Characters
- Menu choices
- IDs
- Usernames

Examples

```cpp
std::string username{};
std::cin >> username;
```

```cpp
int age{};
std::cin >> age;
```

---

# When to Use `std::getline()`

Use `std::getline()` whenever the input may contain spaces.

Examples

- Full names
- Addresses
- Sentences
- Paragraphs
- Book titles

Example

```cpp
std::string address{};

std::getline(std::cin, address);
```

---

# Best Practices

- Use `std::cin` for single-word input.
- Use `std::getline()` for multi-word input.
- Always call `std::cin.ignore()` before `std::getline()` if a previous `std::cin` operation leaves a newline in the buffer.
- Include `<limits>` whenever using `std::numeric_limits`.
- Prefer brace initialization.

```cpp
std::string name{};
int age{};
```

---

# Summary

| Function | Purpose |
|----------|---------|
| `std::cin >>` | Reads formatted input (stops at whitespace). |
| `std::getline()` | Reads an entire line, including spaces. |
| `std::cin.ignore()` | Removes unwanted characters from the input buffer. |
| `std::numeric_limits<std::streamsize>::max()` | Allows `ignore()` to discard as many characters as necessary. |
| `'\n'` | Tells `ignore()` where to stop discarding characters. |
