<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

<p align="center">
  <a href="https://www.uniwa.gr" target="_blank">University of West Attica</a> ·
  <a href="https://ice.uniwa.gr" target="_blank">Department of Computer Engineering and Informatics</a>
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

<hr/>

<p align="center">
  <strong>Supervision</strong>
</p>

<p align="center">
  Supervisor: Christos Troussas, Assistant Professor<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/christos-troussas/" target="_blank">UNIWA Profile</a>  ·
  <a href="https://gr.linkedin.com/in/christos-troussas" target="_blank">LinkedIn</a>
</p>

<p align="center">
  Co-supervisor: Michalis Iordanakis, Academic Scholar
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/academic_sc_ho/" target="_blank">UNIWA Profile</a> ·
  <a href="https://scholar.google.com/citations?user=LiVuwVEAAAAJ&hl=en" target="_blank">Scholar</a>
</p>

</hr>

---

<p align="center">
  Athens, May 2024
</p>

---

<p align="center">
  <img src="https://t2informatik.de/en/wp-content/uploads/sites/2/2023/03/compiler.png" width="250"/>
</p>

---

# INSTALL

## Design and Implementation of a Compiler at Uni-C

This guide explains how to set up, build, and run the project on your local machine.

---

## 1. Prerequisites

Before compiling, ensure the required tools are installed.

### 1.1 Required Packages

```bash
sudo apt update
sudo apt install gcc flex bison make
```

### 1.2 Verify Installation

```bash
gcc --version
flex --version
bison --version
```

---

## 2. Install

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

## 3. A2 – Finite State Machines (FSM)

**Directory**

```text
A2-FSM/src
```

### 3.1 Compile

```bash
cd A2-FSM/src
gcc fsm.c -o fsm
```

### 3.2 Run

```bash
./fsm
```

### 3.3 Notes

- FSM definitions are loaded from `.fsm` files (e.g. `1_identifiers.fsm`, `Final.fsm`).
- Transition tables are documented in the accompanying PDF and Excel files.

---

## 4. Open the Documentation

1. Navigate to the `A-FLEX/A2-FSM/docs/` directory
2. Open the report corresponding to your preferred language:
   - English: `Finite-State-Machines.pdf`
   - Greek: `Πεπερασμένα-Αυτόματα.pdf`

---

## 5. A3 – FLEX (Lexical Analyzer)

**Directory**

```text
A3-FLEX/src
```

### 5.1 Compile (using Makefile)

```bash
cd A3-FLEX/src
make
```

### 5.2 Compile (manual)

```bash
flex simple-flex-code.l
gcc lex.yy.c -o flex_app
```

### 5.3 Run

```bash
./flex_app < input.txt
```

### 5.4 Output

```text
output.txt
```

---

## 6. Open the Documentation

1. Navigate to the `A-FLEX/A3-FLEX/docs/` directory
2. Open the report corresponding to your preferred language:
   - English: `Flex-Code.pdf`
   - Greek: `Κώδικας-Flex.pdf`

---

## 7. B3 – BISON (Syntax Analyzer)

**Directory**

```text
B3-COMPILER/src
```

### 7.1 Compile (using Makefile)

```bash
cd B3-COMPILER/src
make
```

### 7.2 Compile (manual)

```bash
bison -d simple-bison-code.y
flex simple-flex-code.l
gcc simple-bison-code.tab.c lex.yy.c -o bison_app
```

### 7.3 Run

```bash
./bison_app < input.txt
```

### 7.4 Output

```text
output.txt
```

---

## 8. Open the Documentation

1. Navigate to the `B-BISON/B3-COMPILE/docs/` directory
2. Open the report corresponding to your preferred language:
   - English: `Bison-Code.pdf`
   - Greek: `Κώδικας-Bison.pdf`

---

## 9. B2 – FLEX + BISON (Complete Compiler Pipeline)

**Directory**

```text
B2-FLEX-BISON/src
```

### 9.1 Compile (using Makefile)

```bash
cd B2-FLEX-BISON/src
make
```

### 9.2 Compile (manual)

```bash
bison -d simple-bison-code.y
flex simple-flex-code.l
gcc simple-bison-code.tab.c lex.yy.c -o compiler
```

### 9.3 Run (test input)

```bash
./compiler < input-test.txt
```

### 9.4 Run (final input)

```bash
./compiler < input-final.txt
```

### 9.5 Output

```text
output.txt
```

---

## 10. General Notes

- Each module provides its own `Makefile` for convenience.
- If execution permission is missing:

```bash
chmod +x <executable>
```

- The project has been tested on **Linux (Ubuntu)**.
- For clean builds (when supported):

```bash
make clean
```

---

## 11. Troubleshooting

- **`command not found: flex / bison`**
  Ensure the required packages are installed.

- **Linker errors**
  Re-run `make clean` and rebuild the project.

- **Unexpected output**
  Verify the correct input file is used and matches the grammar rules.
