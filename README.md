# Console Todo List App (C++)

A simple, interactive CLI-based task manager written in C++. It allows users to add, view, and remove tasks within a terminal session.

## Project Structure

```text
.
├── .gitignore
├── app.cpp
└── README.md
```

## Features

- **Add Tasks**: Store up to 100 custom tasks.
- **Display Tasks**: View an indexed list of active tasks.
- **Remove Tasks**: Delete tasks by index; automatically shifts remaining items.
- **Input Validation**: Prevents invalid numeric input from breaking the loop.

## Prerequisites

- C++ compiler (`g++`, `clang++`, or MSVC) supporting C++11 or later.

## Compilation and Execution

### Linux / macOS

1. Open a terminal and navigate to the project directory.
2. Compile the source file:
   ```bash
   g++ -std=c++11 app.cpp -o app
   ```
3. Run the executable:
   ```bash
   ./app
   ```

### Windows (MinGW / GCC)

1. Open PowerShell or Command Prompt.
2. Compile the program:
   ```cmd
   g++ -std=c++11 app.cpp -o app.exe
   ```
3. Run the application:
   ```cmd
   app.exe
   ```

## Usage Example

```text
-----------------------
Add a new task (1)
Display your tasks (2)
Remove a task (3)
Exit program (4)
-----------------------

Your choice: 1

Type task or (0) to go back: Learn C++

-----------------------
...
Your choice: 2

------------
Your tasks:
1. Learn C++
------------
```