*This project has been created as part of the 42 curriculum by tsaby.*

# C++ Module 04

> Subtype polymorphism, abstract classes, interfaces

## Description

Virtual functions, deep copies, abstract classes and interfaces in C++98.

Part of the C++ piscine of the 42 curriculum: every exercise is written in **C++98** and compiled with `-Wall -Wextra -Werror -std=c++98`.

## Exercises

| Exercise | Name | What it does |
|---|---|---|
| [`ex00`](ex00/) | Polymorphism | `Animal` / `Dog` / `Cat` with a virtual `makeSound()`, compared with a `WrongAnimal` / `WrongCat` pair that is not virtual. |
| [`ex01`](ex01/) | I don't want to set the world on fire | Each `Dog` and `Cat` owns a heap-allocated `Brain` of 100 ideas; copies are deep, and no leak is allowed. |
| [`ex02`](ex02/) | Abstract class | `Animal` becomes abstract so that it can no longer be instantiated directly. |
| [`ex03`](ex03/) | Interface & recap | `AMateria`, `Ice` and `Cure`, a `Character` with a 4-slot inventory and a `MateriaSource` that learns and clones materias through the `ICharacter` / `IMateriaSource` interfaces. |

## Instructions

Each exercise is an independent program with its own `Makefile`:

```bash
cd ex00
make
```

| Exercise | Binary | Usage |
|---|---|---|
| `ex00` | `Polymorphism` | `./Polymorphism` |
| `ex01` | `Fire` | `./Fire` |
| `ex02` | `Abstract` | `./Abstract` |
| `ex03` | `Interface` | `./Interface` |

`make clean` removes the object files, `make fclean` also removes the binary and `make re` rebuilds from scratch.

## Resources

- [cppreference.com](https://en.cppreference.com/w/cpp) — language and standard library reference
- [cplusplus.com](https://cplusplus.com/reference/) — C++98 standard library reference
