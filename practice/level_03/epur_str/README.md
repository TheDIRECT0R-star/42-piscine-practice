# epur_str

**Level 3 Exercise** - String Whitespace Normalization

## Problem Description

Write a program that takes a string and displays it with exactly one space between words, with no spaces or tabs at the beginning or end, followed by a newline.

## Key Concepts

- String manipulation
- Whitespace handling
- Word boundary detection
- Edge case management

## Usage

```bash
# Compile
gcc -Wall -Wextra -Werror epur.c -o epur_str

# Test cases
./epur_str "hello world"                    # Output: hello world
./epur_str "  hello    world  "             # Output: hello world
./epur_str ""                               # Output: (newline only)
./epur_str                                   # Output: (newline only)
```

## Algorithm

1. **Input validation**: Check for exactly one argument
2. **Skip leading whitespace**: Advance through spaces/tabs
3. **Process words**: Print characters while tracking word boundaries
4. **Handle spacing**: Add single space between words only
5. **Output formatting**: End with newline

## Edge Cases Handled

- ✅ Empty string
- ✅ String with only whitespace
- ✅ Multiple consecutive spaces/tabs
- ✅ Leading/trailing whitespace
- ✅ Wrong number of arguments

## Code Quality

- **42 Norm compliant**: Proper formatting and structure
- **Memory efficient**: No dynamic allocation needed
- **Robust**: Handles all edge cases
- **Clean logic**: Clear, readable implementation

