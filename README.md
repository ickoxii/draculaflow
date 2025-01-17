# Dracula Flow Generator

This set of programs generates a random "Dracula Flow" sentence.

## Acknowledgments and Copyright Notice

This project includes creative material in the form of "Dracula Flow" sentences, which are the property of PLUMMCORP RECORDS. All rights to the original content belong to PLUMMCORP RECORDS.

The inclusion of these sentences in this project is for educational or illustrative purposes only. I make no claim of ownership over this material, and this project is not affiliated with, endorsed by, or officially associated with PLUMMCORP RECORDS in any way.

If you are the copyright holder and have concerns regarding the use of this material, please contact me, and I will take appropriate action.

---

## Project Overview

This project consists of a C program that generates random sentences from one or more predefined "Dracula Flow" sets.

### Key Features
- Supports multiple flows: `draculaflow1` through `draculaflow5`.
- Allows users to specify which flows to include in the generation process.
- Supports generating a specified number of random sentences.
- Provides detailed size information for each flow.
- Includes a help menu for user guidance.

### Compilation

The program can be compiled using the included `Makefile`. Run the following command to compile the program:

```sh
make
```

This will produce an executable named `drac`.

### Usage

```sh
./drac [options]
```

#### Options:
- `-1`            Include sentences from `draculaflow1`.
- `-2`            Include sentences from `draculaflow2`.
- `-3`            Include sentences from `draculaflow3`.
- `-4`            Include sentences from `draculaflow4`.
- `-5`            Include sentences from `draculaflow5`.
- `-l <number>`   Specify the number of sentences to generate (default: 1).
- `-s`            Display the sizes of each `draculaflow` set.
- `-h`            Display the help menu.

#### Examples:
- Generate 1 random sentence from all flows:
  ```sh
  ./drac
  ```

- Generate 5 sentences using `draculaflow1` and `draculaflow3`:
  ```sh
  ./drac -1 -3 -l 5
  ```

- Display the sizes of all flows:
  ```sh
  ./drac -s
  ```

---

## File Structure

### `assets`

Plain text files containing sentences from `draculaflow1` through `draculaflow5`.

### `c`

A C program that preloads all sentences in memory and generates random outputs based on user input.

---

## TODO

- [ ] Create an API that returns a random Dracula Flow sentence.

---
## Notes
- The program uses the current system time and CPU cycles to seed the random number generator for high fidelity randomness.
- The output is printed to the console for easy access.

## Contributing
Contributions are welcome! If you'd like to contribute:
1. Fork the repository.
2. Create a feature branch.
3. Submit a pull request.

## License
This project is licensed under the [MIT License](LICENSE).

## Author
Developed by Icko Iben.

