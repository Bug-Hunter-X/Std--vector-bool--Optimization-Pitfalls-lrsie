# std::vector<bool> Optimization Pitfalls

This repository demonstrates a potential issue with `std::vector<bool>` in C++. While seemingly straightforward, it may exhibit unexpected behavior due to compiler optimizations. `std::vector<bool>` is often specialized to use a bitset for memory efficiency. However, this specialization causes it to deviate from the standard vector behavior, and its elements may not be directly accessible like regular booleans.

## Problem

The primary problem lies in the non-standard implementation of `std::vector<bool>`.  Certain operations, like element access through the `[]` operator, might not behave as expected because the elements are not stored as individual booleans in contiguous memory locations. This can lead to incorrect results or unexpected behavior.

## Solution

The ideal way to prevent these issues is to avoid using `std::vector<bool>` altogether and opt for `std::vector<char>` (with `true` represented as 1 and `false` as 0) or a custom bitset implementation if memory efficiency is critical. Using these alternatives preserves consistent and predictable behavior.