<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

<hr/>

<p align="center">
  <strong>Compilers</strong>
</p>

<h1 align="center" style="letter-spacing: 1px;">
  Design and Implementation of a Compiler at Uni-C
</h1>

<p align="center">
  <strong>Vasileios Evangelos Athanasiou</strong><br>
  Student ID: 19390005
</p>

<p align="center">
  <a href="https://github.com/Ath21" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/vasilis-athanasiou-7036b53a4/" target="_blank">LinkedIn</a>
</p>

<p align="center">
  <strong>Georgios Theocharis</strong><br>
  Student ID: 19390283
</p>

<p align="center">
  <a href="https://github.com/geotheo01" target="_blank">GitHub</a>
</p>

<p align="center">
  <strong>Ioannis Iliou</strong><br>
  Student ID: 19390066
</p>

<p align="center">
  <a href="https://github.com/lardgr" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/giannis-iliou-57a167350/" target="_blank">LinkedIn</a>
</p>


<p align="center">
  <strong>Pantelis Tatsis</strong><br>
  Student ID: 20390226
</p>

<p align="center">
  <a href="https://github.com/PanthegrammerPRO" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/pantelis-tatsis-8287852a2/" target="_blank">LinkedIn</a>
</p>

<p align="center">
  <strong>Vasileios Dominaris</strong><br>
  Student ID: 21390055
</p>

<p align="center">
  <a href="https://github.com/BillDomi" target="_blank">GitHub</a>
</p>

<p align="center">
  Supervisor: Michalis Iordanakis, Special Technical Laboratory Staff
</p>

<p align="center">
  <a href="https://scholar.google.com/citations?user=LiVuwVEAAAAJ&hl=en" target="_blank">UNIWA Profile</a>
</p>

<p align="center">
  Athens, May 2024
</p>

---

# Project Overview

This project involves the development of a **compiler for Uni-C**, a subset of the C programming language. The implementation was completed in **three distinct phases**, covering the fundamental stages of compiler construction:

1. **Finite State Machine (FSM) Encoding**  
   Design and simulation of automata for recognizing lexical units.

2. **Lexical Analysis (FLEX)**  
   Development of a lexical analyzer that identifies tokens using regular expressions.

3. **Syntactic Analysis (BISON)**  
   Construction of a parser that validates program structure based on predefined grammar rules.

---

## Table of Contents

| Section | Folder | Description |
|------:|--------|-------------|
| 1 | `A-FLEX/` | Lexical analysis phase using Finite State Machines and FLEX |
| 1.1 | `A-FLEX/A2-FSM/` | FSM design and implementation for Uni-C tokens |
| 1.1.1 | `A-FLEX/A2-FSM/docs/` | FSM theory notes, transition tables, and documentation (PDF/XLSX) |
| 1.1.2 | `A-FLEX/A2-FSM/src/` | FSM source files for identifiers, strings, numbers, comments, and whitespace |
| 1.2 | `A-FLEX/A3-FLEX/` | FLEX-based lexical analyzer implementation |
| 1.2.1 | `A-FLEX/A3-FLEX/docs/` | FLEX code documentation |
| 1.2.2 | `A-FLEX/A3-FLEX/src/` | FLEX source code, Makefile, input/output samples |
| 1.3 | `A-FLEX/assign/` | Assignment descriptions for Part A (FSM & FLEX) |
| 2 | `B-BISON/` | Syntax analysis phase using BISON |
| 2.1 | `B-BISON/assign/` | Assignment descriptions for Part B (BISON) |
| 2.2 | `B-BISON/B2-FLEX-BISON/` | Combined FLEX & BISON parser implementation |
| 2.2.1 | `B-BISON/B2-FLEX-BISON/src/` | Integrated lexer/parser source code and build files |
| 2.3 | `B-BISON/B3-COMPILER/` | Final compiler stage |
| 2.3.1 | `B-BISON/B3-COMPILER/docs/` | BISON grammar documentation |
| 2.3.2 | `B-BISON/B3-COMPILER/src/` | Final Uni-C compiler source code |
| 3 | `Uni-C/` | Language specification and usage guide for Uni-C |

---

## Technical Specifications

### 1. Lexical Analysis (Tokens)

The compiler recognizes the following categories of tokens:

- **Identifiers**  
  Names for variables and functions  
  - Pattern: `[a-zA-Z_][a-zA-Z0-9_]{0,31}`

- **Keywords**  
  Reserved words such as:
  - `if`, `else`, `while`, `int`, `return`, `func`

- **Constants**  
  Supported constant types include:
  - Integers (decimal, octal, hexadecimal)
  - Floating-point numbers
  - Strings

- **Operators**  
  - Arithmetic: `+`, `-`, `*`, `/`
  - Relational: `>`, `<`, `==`
  - Logical: `&&`, `||`

- **Delimiters**  
  - Characters such as `;` used to separate commands

---

### 2. Finite State Machine (FSM)

For each token category, a **Finite State Automaton (FSA)** was designed.

**Example – Identifiers**:
- Starts at an initial state (**SZ**)
- Transitions to a middle-character state (**SMCH**) upon receiving a letter or underscore
- Reaches a **GOOD** exit state upon encountering a newline, provided the identifier is valid

---

### 3. Syntactic Analysis (BISON)

The **BISON** parser generator is used to define and enforce grammar rules for Uni-C programs:

- **Variable Declarations**
  - Support for simple data types and arrays

- **Functions**
  - Recognition of both built-in and user-defined functions

- **Expressions**
  - Handling of simple and compound expressions

- **Error Handling**
  - Detection and reporting of syntax errors
  - Handling of invalid tokens (`TOKEN ERROR`)

---

## Project Files

- `1_identifiers.fsm`  
  FSM encoding for identifier recognition

- `simple-flex-code.l`  
  FLEX source file containing regular expressions and token definitions

- `token.h`  
  Header file defining numeric constants for tokens

- `simple-bison-code.y`  
  BISON source file containing grammar and syntax rules

---

# Installation & Run Guide

## Prerequisites

Before compiling, ensure the required tools are installed.

## Required Packages

```bash
sudo apt update
sudo apt install gcc flex bison make
```

## Verify Installation

```bash
gcc --version
flex --version
bison --version
```

---

## Install

Clone the repository
```bash
git clone https://github.com/Compilers-aka-Uniwa/Compiler-Uni-C.git
```
Navigate to project directory for testing the final version of Compiler
```bash
cd Compiler-Uni-C/B-BISON/B3-COMPILER/src
```
Also

Navigate to project directory for testing FSM
```bash
cd Compiler-Uni-C/A-FLEX/A2-FSM/src
```
Navigate to project directory for testing Flex
```bash
cd Compiler-Uni-C/A-FLEX/A3-FLEX/src
```
Navigate to project directory for testing Bison
```bash
cd Compiler-Uni-C/B-BISON/B2-FLEX-BISON/src
```

---

# A2 – Finite State Machines (FSM)

**Directory**

```text
A2-FSM/src
```

## Compile

```bash
cd A2-FSM/src
gcc fsm.c -o fsm
```

## Run

```bash
./fsm
```

## Notes

* FSM definitions are loaded from `.fsm` files (e.g. `1_identifiers.fsm`, `Final.fsm`).
* Transition tables are documented in the accompanying PDF and Excel files.

---

## Open the Documentation
1. Navigate to the `A-FLEX/A2-FSM/docs/` directory
2. Open the report corresponding to your preferred language:
    - English: `Finite-State-Machines.pdf`
    - Greek: `Πεπερασμένα-Αυτόματα.pdf`

---

# A3 – FLEX (Lexical Analyzer)

**Directory**

```text
A3-FLEX/src
```

## Compile (using Makefile)

```bash
cd A3-FLEX/src
make
```

## Compile (manual)

```bash
flex simple-flex-code.l
gcc lex.yy.c -o flex_app
```

## Run

```bash
./flex_app < input.txt
```

## Output

```text
output.txt
```

---

## Open the Documentation
1. Navigate to the `A-FLEX/A3-FLEX/docs/` directory
2. Open the report corresponding to your preferred language:
    - English: `Flex-Code.pdf`
    - Greek: `Κώδικας-Flex.pdf`

---

# B3 – BISON (Syntax Analyzer)

**Directory**

```text
B3-COMPILER/src
```

## Compile (using Makefile)

```bash
cd B3-COMPILER/src
make
```

## Compile (manual)

```bash
bison -d simple-bison-code.y
flex simple-flex-code.l
gcc simple-bison-code.tab.c lex.yy.c -o bison_app
```

## Run

```bash
./bison_app < input.txt
```

## Output

```text
output.txt
```

---

## Open the Documentation
1. Navigate to the `B-BISON/B3-COMPILE/docs/` directory
2. Open the report corresponding to your preferred language:
    - English: `Bison-Code.pdf`
    - Greek: `Κώδικας-Bison.pdf`

---

# B2 – FLEX + BISON (Complete Compiler Pipeline)

**Directory**

```text
B2-FLEX-BISON/src
```

## Compile (using Makefile)

```bash
cd B2-FLEX-BISON/src
make
```

## Compile (manual)

```bash
bison -d simple-bison-code.y
flex simple-flex-code.l
gcc simple-bison-code.tab.c lex.yy.c -o compiler
```

## Run (test input)

```bash
./compiler < input-test.txt
```

## Run (final input)

```bash
./compiler < input-final.txt
```

## Output

```text
output.txt
```

---

# General Notes

* Each module provides its own `Makefile` for convenience.
* If execution permission is missing:

```bash
chmod +x <executable>
```

* The project has been tested on **Linux (Ubuntu)**.
* For clean builds (when supported):

```bash
make clean
```

---

# Troubleshooting

* **`command not found: flex / bison`**
  Ensure the required packages are installed.

* **Linker errors**
  Re-run `make clean` and rebuild the project.

* **Unexpected output**
  Verify the correct input file is used and matches the grammar rules.


