# Custom Hexadecimal String Hash in C++

This C++ program converts a given string into a unique 8-digit hexadecimal hash using a custom hashing algorithm based on prime multiplication and XOR operations.

---

## Features

- Takes a string input and outputs a hexadecimal hash.
- Lightweight and simple to understand.
- Uses a custom algorithm (not based on any standard library hash functions).
- Outputs hash in lowercase hexadecimal format with consistent 8-character width.

---

## How It Works

1. Initializes a 32-bit unsigned integer (`hash`) to 0.
2. Iterates over each character in the input string:
   - Multiplies the current hash by 31 (a prime number).
   - Applies XOR (`^`) with the ASCII value of the character.
3. Converts the final hash value into an 8-digit hexadecimal string using `stringstream`.

> Note: This is not a cryptographic hash and is not intended for secure applications. It's smiply for education purpose.

---

## Sample Run

```bash
Convert a string to hash: hello
Custom hash of "hello":
  - #1c0f7e0c
```

---

## Limitations
 - Not collision-resistant.
 - Not suitable for cryptographic or secure hashing use cases.
