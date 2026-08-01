# Exam Rank 02 — 42 School

**A complete collection of every exercise that can appear in the 42 Common Core Exam Rank 02, solved and organized by level.**

Each exercise includes its original subject and a C solution written from scratch.

---

## About This Repository

During the real exam, one exercise is drawn at random from each of the four levels. This repository was built to allow practice on **every exercise that may possibly appear**, rather than a partial subset.

It includes:

- Original subjects for every exercise
- Complete, working C solutions
- Level-based folder organization
- A single, self-contained reference for exam preparation

> The real exam runs in a closed environment and is graded by the Moulinette. These solutions are meant to help you **understand** the reasoning behind each exercise, not to be copied as-is.

## Purpose

This repository exists to help students:

- Practice systematically for Exam Rank 02
- Recognize the recurring patterns behind the exam's exercises
- Strengthen their command of C logic, recursion, pointer handling, string manipulation, linked lists, and structures
- Access every subject and solution in one clean, organized place

## A Note on Terminology

Not every entry in this repository is a function in the strict sense. Some exercises require writing a standalone **program** (with a `main`), while others require writing a single **function** to be tested externally. Both are referred to generically as "exercises" throughout this README to avoid any ambiguity.

## A Note on the Subjects

The exercise subjects included in this repository are the intellectual property of 42 School and are shared here for educational and reference purposes only — not as an official or authorized redistribution. They were not obtained directly from 42's own systems, but compiled from versions already circulating publicly online; as such, this collection cannot be guaranteed to be complete, fully accurate, or perfectly aligned with the exact pool of exercises currently used in the exam.

## Repository Structure

The exam has 4 levels of increasing difficulty. Each exercise lives in its own folder:

```
Level_X/
└── exercise_name/
    ├── README.md       # Original subject
    └── exercise.c      # My solution
```

## Progress — 57 / 57

| Level 1              | Level 2              | Level 3              | Level 4              |
|-----------------------|-----------------------|-----------------------|-----------------------|
| first_word            | alpha_mirror          | add_prime_sum         | flood_fill            |
| fizzbuzz              | camel_to_snake        | epur_str              | fprime                |
| ft_putstr             | do_op                 | expand_str            | ft_itoa               |
| ft_strcpy             | ft_atoi               | ft_atoi_base          | ft_list_foreach       |
| ft_strlen             | ft_strcmp             | ft_list_size          | ft_list_remove_if     |
| ft_swap               | ft_strcspn            | ft_range              | ft_split              |
| repeat_alpha          | ft_strdup             | ft_rrange             | rev_wstr              |
| rev_print             | ft_strpbrk            | hidenp                | rostring              |
| rot_13                | ft_strrev             | lcm                   | sort_int_tab          |
| rotone                | ft_strspn             | paramsum              | sort_list             |
| search_and_replace     | inter                 | pgcd                  |                       |
| ulstr                 | is_power_of_2         | print_hex             |                       |
|                       | last_word             | rstr_capitalizer      |                       |
|                       | max                   | str_capitalizer       |                       |
|                       | print_bits            | tab_mult              |                       |
|                       | reverse_bits          |                       |                       |
|                       | snake_to_camel        |                       |                       |
|                       | swap_bits             |                       |                       |
|                       | union                 |                       |                       |
|                       | wdmatch               |                       |                       |

**Total pool: 57 exercises** — 12 (Level 1) · 20 (Level 2) · 15 (Level 3) · 10 (Level 4)

## How to Use It

1. **Pick an exercise** and open its `README.md` to read the original subject.
2. **Solve it yourself first**, before looking at the provided solution.
3. **Compile it correctly**, depending on whether the exercise is a function or a program:

   - If the exercise is a **function** (no `main`), compile it as an object file:
     ```bash
     cc -Wall -Wextra -Werror your_solution.c -c
     ```

   - If the exercise is a **program** (it has a `main`), compile it into an executable, naming the binary after the program name given in the subject:
     ```bash
     cc -Wall -Wextra -Werror your_solution.c -o your_solution
     ```
     Matching the executable's name to the one used in the subject makes it possible to copy and run the test cases from the subject directly, without any adaptation.

4. **Compare** your solution with the one provided and study the differences.

## License

This repository is released under the [MIT License](./LICENSE). The license applies exclusively to the original content of this repository — the C solutions and any accompanying explanations written by me — and does not extend to the exercise subjects, which remain the property of 42 School as described above.
