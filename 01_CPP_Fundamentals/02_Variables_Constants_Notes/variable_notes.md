# C++ Variables

---

# 1. Variable Declaration

## What is a Variable?

A **variable** is a named storage location in memory that holds a value. Every variable has:

- A **name** (identifier)
- A **type**
- A **value**
- A **memory address**

Whenever your program stores information such as a number, character, or text, it uses variables.

### Example

```cpp
int age = 20;
```

Here,

- `int` → data type
- `age` → variable name
- `20` → value stored inside the variable

---

## How Variables Work

Imagine the computer's memory as a huge collection of numbered boxes.

```
Memory

+---------+
|   20    |
+---------+
     ▲
     |
   age
```

The variable **age** refers to a location in memory where the value is stored.

---

## What is a Declaration?

A **declaration** tells the compiler:

> "A variable with this name and this type exists."

Declaration introduces the variable to the compiler.

Example:

```cpp
int number;
```

The compiler now knows:

- Variable name: `number`
- Type: `int`

No value has been assigned yet.

---

## Declaration Syntax

General syntax:

```cpp
type variable_name;
```

Example:

```cpp
int age;
double salary;
char grade;
bool passed;
```

---

## Declaring Multiple Variables

Multiple variables of the same type can be declared together.

```cpp
int x, y, z;
```

or

```cpp
int width;
int height;
int length;
```

Although both are valid, declaring one variable per line is generally more readable.

---

## Variables vs Objects

In modern C++, almost every variable is technically an **object**.

A variable:

- Has a type
- Occupies memory
- Has a lifetime
- Can store a value

Primitive types:

```cpp
int age;
double price;
```

Class objects:

```cpp
std::string name;
```

Every object is a variable if it has a name, but not every object is a primitive variable.

---

# Identifiers

An **identifier** is the name used to identify program elements.

Identifiers are used for:

- Variables
- Functions
- Classes
- Objects
- Namespaces
- Templates

Example:

```cpp
int score;
```

`score` is an identifier.

---

# Rules for Naming Identifiers

A valid identifier must follow these rules.

### Rule 1

May contain

- Letters
- Digits
- Underscores

```cpp
student
student1
student_name
```

---

### Rule 2

Cannot begin with a digit.

Invalid

```cpp
1student
```

Valid

```cpp
student1
```

---

### Rule 3

Cannot contain spaces.

Invalid

```cpp
student age
```

Valid

```cpp
studentAge
```

---

### Rule 4

Cannot contain special characters.

Invalid

```cpp
price$
my-score
```

---

### Rule 5

Cannot use reserved keywords.

Invalid

```cpp
int class;
```

---

### Rule 6

Identifiers are case-sensitive.

```cpp
age
Age
AGE
```

These are three different identifiers.

---

# Reserved Keywords

Keywords have predefined meanings in C++ and cannot be used as variable names.

Examples:

```text
int
float
double
char
bool
class
struct
if
else
switch
for
while
do
return
const
constexpr
auto
void
public
private
protected
namespace
template
```

Invalid example:

```cpp
int while;
```

---

# Naming Conventions

The compiler doesn't care how variables are named, but programmers do.

Good naming makes code easier to read and maintain.

---

## camelCase

Most common in C++.

```cpp
studentAge
totalMarks
accountBalance
```

---

## snake_case

Often used in libraries and open-source projects.

```cpp
student_age
total_marks
account_balance
```

---

## PascalCase

Usually reserved for class names.

```cpp
Student
Employee
BankAccount
```

---

# Good Variable Names

Good names clearly describe the purpose of the variable.

```cpp
studentCount
averageScore
totalPrice
isLoggedIn
temperature
currentSpeed
maximumSize
```

These names are self-explanatory.

---

# Bad Variable Names

Poor names make programs difficult to understand.

```cpp
a
b
x
abc
temp1
num
value123
```

These names give little or no information about their purpose.

---

# Variable Definition

A **definition** actually creates the variable and allocates memory.

```cpp
int age;
```

This statement both declares and defines `age`.

---

# Declaring vs Defining

```cpp
extern int count;   // Declaration

int count = 10;     // Definition
```

Declaration tells the compiler the variable exists.

Definition creates the variable in memory.

---

# Memory Allocation

When a variable is created, memory is allocated.

Example:

```cpp
int age = 20;
```

Memory might look like this:

```
Address      Value

1000         20
```

The variable name refers to that memory location.

---

# Changing Variable Values

Variables are called "variables" because their values can change.

```cpp
int score = 50;

score = 80;

score = 100;
```

Final value:

```
100
```

---

# Reading Variables

Variables can be read whenever needed.

```cpp
int age = 25;

std::cout << age;
```

Output

```
25
```

---

# Assigning New Values

Assignment changes the value stored in a variable.

```cpp
int number = 5;

number = 15;

number = 30;
```

Each assignment replaces the previous value.

---

# Variable Declaration vs Initialization vs Assignment

```cpp
int x;
```

Declaration

---

```cpp
int x = 10;
```

Declaration + Initialization

---

```cpp
x = 20;
```

Assignment

---

# Summary

A variable is:

- A named memory location
- Used to store data
- Has a type
- Has a name
- Has a value
- Can usually change during program execution
- Is created when defined
- Exists only for its lifetime
- Can only be accessed within its scope

Using meaningful variable names and proper declarations makes programs easier to understand, debug, and maintain.
