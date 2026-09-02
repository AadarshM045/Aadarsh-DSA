# 🚀 Aadarsh DSA Repository
> **Mastering Data Structures & Algorithms in C++** | LeetCode Problems & Interview Preparation

A comprehensive collection of **Data Structures & Algorithms** solutions in C++. Includes **LeetCode problems**, **pattern programs**, and **interview preparation materials** with clean code and detailed complexity analysis.

### ✨ Features
- ✅ **LeetCode Optimized** - 40+ solved problems with optimal solutions
- ✅ **Clean C++ Code** - Follows best practices and naming conventions
- ✅ **Time/Space Analysis** - Complexity details for every solution
- ✅ **Pattern Programs** - 13 essential pattern programs for practice
- ✅ **Topic-Wise Organization** - Easy navigation by algorithm type
- ✅ **Interview Ready** - Problems from actual coding interviews
- ✅ **Well-Commented** - Clear explanations and approach descriptions

---

## 📋 Table of Contents
- [Quick Start Guide](#quick-start-guide)
- [Project Layout](#project-layout)
- [Requirements](#requirements)
- [Pattern Programs](#pattern-programs)
- [LeetCode Arrays](#leetcode-arrays)
- [LeetCode Binary Search](#leetcode-binary-search)
- [LeetCode Math](#leetcode-math)
- [LeetCode Sorting](#leetcode-sorting)
- [LeetCode Strings](#leetcode-strings)
- [Big O Complexity](#big-o-complexity)
- [Recommended Path](#recommended-path)
- [Reference Materials](#reference-materials)
- [How to Contribute](#how-to-contribute)
- [License Info](#license-info)

---

## Quick Start Guide

### Clone the Repository
```bash
git clone https://github.com/AadarshM045/Aadarsh-DSA.git
cd Aadarsh-DSA
```

### Compile and Run Any Program
```bash
# Compile a C++ file
g++ -o output_name filename.cpp

# Run the compiled program
./output_name

# Example: Run a pattern program
g++ -o pattern Patterns/1_Rectangular_Number_Pattern.cpp
./pattern
```

### Using an IDE
- **VS Code**: Install C++ extension, open the file, and use the build/run shortcut (Ctrl+Shift+B / F5)
- **CodeBlocks**: Open the .cpp file and click Build → Run
- **Dev-C++**: Open the project and compile

---

## Project Layout
```
Aadarsh-DSA/
├── Patterns/
│   ├── 1_Rectangular_Number_Pattern.cpp
│   ├── 2_Rectangular_Alphabet_Pattern.cpp
│   ├── 3_Square_Incremental_Number_Pattern.cpp
│   ├── 4_Right_Angled_Triangle_Pattern.cpp
│   ├── 5_Right_Angled_Number_Pyramid.cpp
│   ├── 6_Reversed_Row_Number_Triangle.cpp
│   ├── 7_Repeating_Row_Number_Triangle.cpp
│   ├── 8_Repeating_Row_Alphabet_Triangle.cpp
│   ├── 9_Floyds_Triangle.cpp
│   ├── 10_Inverted_Repeating_Number_Triangle.cpp
│   ├── 11_Palindromic_Number_Pyramid.cpp
│   ├── 12_Hollow_Diamond_Star_Pattern.cpp
│   └── 13_Butterfly_Star_Pattern.cpp
├── Arrays/
│   ├── 11_Container_With_Most_Water.cpp
│   ├── 26_Remove_Duplicates_from_Sorted_Array.cpp
│   ├── 27_Remove_Element.cpp
│   ├── 53_Maximum_Subarray.cpp
│   ├── 88_Merge_Sorted_Array.cpp
│   ├── 121_Best_Time_to_Buy_and_Sell_Stock.cpp
│   ├── 122_Best_Time_to_Buy_and_Sell_Stock_II.cpp
│   ├── 136_Single_Number.cpp
│   ├── 152_Maximum_Product_Subarray.cpp
│   ├── 169_Majority_Element.cpp
│   ├── 229_Majority_Element_II.cpp
│   ├── 238_Product_of_Array_Except_Self.cpp
│   ├── 283_Move_Zeroes.cpp
│   ├── 852_Peak_Index_in_a_Mountain_Array.cpp
│   ├── 910_Smallest_Range_II.cpp
│   ├── 3745_Maximize_Expression_of_Three_Elements.cpp
|   └── 268_Missing_Number.cpp
├── BinarySearch/
│   ├── 33_Search_in_Rotated_Sorted_Array.cpp
│   ├── 34_Find_First_and_Last_Position_in_Sorted_Array.cpp
│   ├── 35_Search_Insert_Position.cpp
│   ├── 69_Sqrt_x.cpp
│   ├── 410_Split_Array_Largest_Sum.cpp
│   └── 540_Single_Element_in_a_Sorted_Array.cpp
├── Math/
│   ├── 7_Reverse_Integer.cpp
│   ├── 9_Palindrome_Number.cpp
│   ├── 50_Pow_x_n.cpp
│   ├── 66_PlusOne.cpp
│   ├── 263_Ugly_Number.cpp
│   ├── 268_Missing_Number.cpp
│   ├── 1502_Can_Make_Arithmetic_Progression_From_Sequence.cpp
│   ├── 2485_Find_the_Pivot_Integer.cpp
│   └── 3697_Compute_Decimal_Representation.cpp
├── Sorting/
│   ├── 31_Next_Permutation.cpp
│   ├── 75_SortColors.cpp
│   └── 88_Merge_Sorted_Array.cpp
├── Strings/
│   ├── 125_Valid_Palindrome.cpp
│   ├── 151_Reverse_Words_in_a_String.cpp
│   ├── 567_Permutation_in_String.cpp
│   └── 1910_Remove_All_Occurrences_of_a_Substring.cpp
├── README.md
└── LICENSE
```

---

## Requirements

### Required
- **C++ Compiler** (GCC, Clang, or MSVC)
- **Code Editor** (VS Code, Dev-C++, CodeBlocks, or any text editor)
- **Basic C++ Knowledge** - Variables, loops, arrays, functions

### Installation

**Linux/macOS:**
```bash
# Install GCC
sudo apt-get install g++  # Ubuntu/Debian
brew install gcc          # macOS
```

**Windows:**
- Download [Dev-C++](https://www.bloodshed.net/dev_cpp.html) or
- Install [MinGW](https://www.mingw-w64.org/) or
- Use [Visual Studio Community](https://visualstudio.microsoft.com/vs/community/)

### Verify Installation
```bash
g++ --version
```

---

## Pattern Programs

Master fundamental programming patterns and loops for building strong foundations.

📁 **Folder:** [`Patterns`](./Patterns)

| # | Title | File | Complexity |
|---|-------|------|-----------|
| 1 | **Rectangular Number Pattern** | [`1_Rectangular_Number_Pattern.cpp`](./Patterns/1_Rectangular_Number_Pattern.cpp) | O(n²) |
| 2 | **Rectangular Alphabet Pattern** | [`2_Rectangular_Alphabet_Pattern.cpp`](./Patterns/2_Rectangular_Alphabet_Pattern.cpp) | O(n²) |
| 3 | **Square Incremental Number Pattern** | [`3_Square_Incremental_Number_Pattern.cpp`](./Patterns/3_Square_Incremental_Number_Pattern.cpp) | O(n²) |
| 4 | **Right Angled Triangle Pattern** | [`4_Right_Angled_Triangle_Pattern.cpp`](./Patterns/4_Right_Angled_Triangle_Pattern.cpp) | O(n²) |
| 5 | **Right Angled Number Pyramid** | [`5_Right_Angled_Number_Pyramid.cpp`](./Patterns/5_Right_Angled_Number_Pyramid.cpp) | O(n²) |
| 6 | **Reversed Row Number Triangle** | [`6_Reversed_Row_Number_Triangle.cpp`](./Patterns/6_Reversed_Row_Number_Triangle.cpp) | O(n²) |
| 7 | **Repeating Row Number Triangle** | [`7_Repeating_Row_Number_Triangle.cpp`](./Patterns/7_Repeating_Row_Number_Triangle.cpp) | O(n²) |
| 8 | **Repeating Row Alphabet Triangle** | [`8_Repeating_Row_Alphabet_Triangle.cpp`](./Patterns/8_Repeating_Row_Alphabet_Triangle.cpp) | O(n²) |
| 9 | **Floyd's Triangle** | [`9_Floyds_Triangle.cpp`](./Patterns/9_Floyds_Triangle.cpp) | O(n²) |
| 10 | **Inverted Repeating Number Triangle** | [`10_Inverted_Repeating_Number_Triangle.cpp`](./Patterns/10_Inverted_Repeating_Number_Triangle.cpp) | O(n²) |
| 11 | **Palindromic Number Pyramid** | [`11_Palindromic_Number_Pyramid.cpp`](./Patterns/11_Palindromic_Number_Pyramid.cpp) | O(n²) |
| 12 | **Hollow Diamond Star Pattern** | [`12_Hollow_Diamond_Star_Pattern.cpp`](./Patterns/12_Hollow_Diamond_Star_Pattern.cpp) | O(n²) |
| 13 | **Butterfly Star Pattern** | [`13_Butterfly_Star_Pattern.cpp`](./Patterns/13_Butterfly_Star_Pattern.cpp) | O(n²) |

---

## LeetCode Arrays

Solve fundamental and intermediate array problems using two-pointer, sliding window, and dynamic programming techniques.

📁 **Folder:** [`Arrays`](./Arrays)

| # | LeetCode # | Title | File | Difficulty | Time | Space |
|---|-----------|-------|------|-----------|------|-------|
| 1 | 11 | Container With Most Water | [`11_Container_With_Most_Water.cpp`](./Arrays/11_Container_With_Most_Water.cpp) | Medium | O(n) | O(1) |
| 2 | 26 | Remove Duplicates from Sorted Array | [`26_Remove_Duplicates_from_Sorted_Array.cpp`](./Arrays/26_Remove_Duplicates_from_Sorted_Array.cpp) | Easy | O(n) | O(1) |
| 3 | 27 | Remove Element | [`27_Remove_Element.cpp`](./Arrays/27_Remove_Element.cpp) | Easy | O(n) | O(1) |
| 4 | 53 | Maximum Subarray | [`53_Maximum_Subarray.cpp`](./Arrays/53_Maximum_Subarray.cpp) | Medium | O(n) | O(1) |
| 5 | 88 | Merge Sorted Array | [`88_Merge_Sorted_Array.cpp`](./Arrays/88_Merge_Sorted_Array.cpp) | Easy | O(m+n) | O(1) |
| 6 | 121 | Best Time to Buy and Sell Stock | [`121_Best_Time_to_Buy_and_Sell_Stock.cpp`](./Arrays/121_Best_Time_to_Buy_and_Sell_Stock.cpp) | Easy | O(n) | O(1) |
| 7 | 122 | Best Time to Buy and Sell Stock II | [`122_Best_Time_to_Buy_and_Sell_Stock_II.cpp`](./Arrays/122_Best_Time_to_Buy_and_Sell_Stock_II.cpp) | Medium | O(n) | O(1) |
| 8 | 136 | Single Number | [`136_Single_Number.cpp`](./Arrays/136_Single_Number.cpp) | Easy | O(n) | O(1) |
| 9 | 152 | Maximum Product Subarray | [`152_Maximum_Product_Subarray.cpp`](./Arrays/152_Maximum_Product_Subarray.cpp) | Medium | O(n) | O(1) |
| 10 | 169 | Majority Element | [`169_Majority_Element.cpp`](./Arrays/169_Majority_Element.cpp) | Easy | O(n) | O(1) |
| 11 | 229 | Majority Element II | [`229_Majority_Element_II.cpp`](./Arrays/229_Majority_Element_II.cpp) | Medium | O(n) | O(1) |
| 12 | 238 | Product of Array Except Self | [`238_Product_of_Array_Except_Self.cpp`](./Arrays/238_Product_of_Array_Except_Self.cpp) | Medium | O(n) | O(n) |
| 13 | 283 | Move Zeroes | [`283_Move_Zeroes.cpp`](./Arrays/283_Move_Zeroes.cpp) | Easy | O(n) | O(1) |
| 14 | 852 | Peak Index in a Mountain Array | [`852_Peak_Index_in_a_Mountain_Array.cpp`](./Arrays/852_Peak_Index_in_a_Mountain_Array.cpp) | Easy | O(log n) | O(1) |
| 15 | 910 | Smallest Range II | [`910_Smallest_Range_II.cpp`](./Arrays/910_Smallest_Range_II.cpp) | Medium | O(n log n) | O(1) |
| 16 | 3745 | Maximize Expression of Three Elements | [`3745_Maximize_Expression_of_Three_Elements.cpp`](./Arrays/3745_Maximize_Expression_of_Three_Elements.cpp) | Hard | O(n) | O(1) |
| 17 | 268 | Missing Number | [`3745_Maximize_Expression_of_Three_Elements.cpp`](./Arrays/268_Missing_Number.cpp) | Easy | O(n) | O(1) |

---

## LeetCode Binary Search

Efficient searching algorithms for sorted arrays and modified binary search problems.

📁 **Folder:** [`BinarySearch`](./BinarySearch)

| # | LeetCode # | Title | File | Difficulty | Time | Space |
|---|-----------|-------|------|-----------|------|-------|
| 1 | 33 | Search in Rotated Sorted Array | [`33_Search_in_Rotated_Sorted_Array.cpp`](./BinarySearch/33_Search_in_Rotated_Sorted_Array.cpp) | Medium | O(log n) | O(1) |
| 2 | 34 | Find First and Last Position in Sorted Array | [`34_Find_First_and_Last_Position_in_Sorted_Array.cpp`](./BinarySearch/34_Find_First_and_Last_Position_in_Sorted_Array.cpp) | Medium | O(log n) | O(1) |
| 3 | 35 | Search Insert Position | [`35_Search_Insert_Position.cpp`](./BinarySearch/35_Search_Insert_Position.cpp) | Easy | O(log n) | O(1) |
| 4 | 69 | Sqrt(x) | [`69_Sqrt_x.cpp`](./BinarySearch/69_Sqrt_x.cpp) | Easy | O(log n) | O(1) |
| 5 | 410 | Split Array Largest Sum | [`410_Split_Array_Largest_Sum.cpp`](./BinarySearch/410_Split_Array_Largest_Sum.cpp) | Hard | O(n log m) | O(1) |
| 6 | 540 | Single Element in a Sorted Array | [`540_Single_Element_in_a_Sorted_Array.cpp`](./BinarySearch/540_Single_Element_in_a_Sorted_Array.cpp) | Medium | O(log n) | O(1) |

---

## LeetCode Math

Number theory, mathematical operations, and computation problems.

📁 **Folder:** [`Math`](./Math)

| # | LeetCode # | Title | File | Difficulty | Time | Space |
|---|-----------|-------|------|-----------|------|-------|
| 1 | 7 | Reverse Integer | [`7_Reverse_Integer.cpp`](./Math/7_Reverse_Integer.cpp) | Medium | O(log n) | O(1) |
| 2 | 9 | Palindrome Number | [`9_Palindrome_Number.cpp`](./Math/9_Palindrome_Number.cpp) | Easy | O(log n) | O(1) |
| 3 | 50 | Pow(x, n) | [`50_Pow_x_n.cpp`](./Math/50_Pow_x_n.cpp) | Medium | O(log n) | O(log n) |
| 4 | 66 | Plus One | [`66_PlusOne.cpp`](./Math/66_PlusOne.cpp) | Easy | O(n) | O(1) |
| 5 | 263 | Ugly Number | [`263_Ugly_Number.cpp`](./Math/263_Ugly_Number.cpp) | Easy | O(log n) | O(1) |
| 6 | 268 | Missing Number | [`268_Missing_Number.cpp`](./Math/268_Missing_Number.cpp) | Easy | O(n) | O(1) |
| 7 | 1502 | Can Make Arithmetic Progression From Sequence | [`1502_Can_Make_Arithmetic_Progression_From_Sequence.cpp`](./Math/1502_Can_Make_Arithmetic_Progression_From_Sequence.cpp) | Easy | O(n log n) | O(1) |
| 8 | 2485 | Find the Pivot Integer | [`2485_Find_the_Pivot_Integer.cpp`](./Math/2485_Find_the_Pivot_Integer.cpp) | Easy | O(n) | O(1) |
| 9 | 3697 | Compute Decimal Representation | [`3697_Compute_Decimal_Representation.cpp`](./Math/3697_Compute_Decimal_Representation.cpp) | Medium | O(n) | O(1) |

---

## LeetCode Sorting

Sorting algorithms and comparison-based problems.

📁 **Folder:** [`Sorting`](./Sorting)

| # | LeetCode # | Title | File | Difficulty | Time | Space |
|---|-----------|-------|------|-----------|------|-------|
| 1 | 31 | Next Permutation | [`31_Next_Permutation.cpp`](./Sorting/31_Next_Permutation.cpp) | Medium | O(n) | O(1) |
| 2 | 75 | Sort Colors | [`75_SortColors.cpp`](./Sorting/75_SortColors.cpp) | Medium | O(n) | O(1) |
| 3 | 88 | Merge Sorted Array | [`88_Merge_Sorted_Array.cpp`](./Sorting/88_Merge_Sorted_Array.cpp) | Easy | O(m+n) | O(1) |

---

## LeetCode Strings

String manipulation, pattern matching, and text processing problems.

📁 **Folder:** [`Strings`](./Strings)

| # | LeetCode # | Title | File | Difficulty | Time | Space |
|---|-----------|-------|------|-----------|------|-------|
| 1 | 125 | Valid Palindrome | [`125_Valid_Palindrome.cpp`](./Strings/125_Valid_Palindrome.cpp) | Easy | O(n) | O(1) |
| 2 | 151 | Reverse Words in a String | [`151_Reverse_Words_in_a_String.cpp`](./Strings/151_Reverse_Words_in_a_String.cpp) | Medium | O(n) | O(n) |
| 3 | 567 | Permutation in String | [`567_Permutation_in_String.cpp`](./Strings/567_Permutation_in_String.cpp) | Medium | O(n) | O(1) |
| 4 | 1910 | Remove All Occurrences of a Substring | [`1910_Remove_All_Occurrences_of_a_Substring.cpp`](./Strings/1910_Remove_All_Occurrences_of_a_Substring.cpp) | Medium | O(n²) | O(n) |

---

## Big O Complexity

### Time Complexity Classes
| Notation | Name | Example |
|----------|------|---------|
| O(1) | Constant | Direct array access |
| O(log n) | Logarithmic | Binary search |
| O(n) | Linear | Simple loop |
| O(n log n) | Linearithmic | Merge sort, Quick sort |
| O(n²) | Quadratic | Nested loops |
| O(n³) | Cubic | Triple nested loops |
| O(2ⁿ) | Exponential | Recursive backtracking |
| O(n!) | Factorial | Permutations |

### Space Complexity
- **O(1)** - Constant space (in-place modifications)
- **O(n)** - Linear space (storing copy of input)
- **O(log n)** - Logarithmic space (recursion depth)
- **O(n²)** - Quadratic space (2D arrays/matrices)

---

## Recommended Path

**Suggested order for mastering DSA:**

1. **Patterns** (Basics)
   - Build strong loop fundamentals
   - Time complexity: O(n²)

2. **LeetCode Arrays** (Intermediate to Advanced)
   - Master array manipulation
   - Two-pointer technique
   - Sliding window approach

3. **LeetCode Math** (Intermediate)
   - Number theory concepts
   - Mathematical operations
   - Bit manipulation basics

4. **LeetCode Sorting** (Intermediate)
   - Understand sorting algorithms
   - In-place modifications
   - Comparison operations

5. **LeetCode Strings** (Intermediate to Advanced)
   - String manipulation techniques
   - Pattern matching
   - Character encoding

6. **LeetCode Binary Search** (Advanced)
   - Optimal searching strategies
   - Edge case handling
   - Search space optimization

---

## Key Concepts

### Two-Pointer Technique
- Used in: Container With Most Water, Remove Duplicates, etc.
- Time: O(n), Space: O(1)

### Sliding Window
- Used in: Permutation in String, substring problems
- Time: O(n), Space: O(1)

### Kadane's Algorithm
- Used in: Maximum Subarray
- Time: O(n), Space: O(1)

### Binary Search
- Used in: Search Rotated Array, Sqrt
- Time: O(log n), Space: O(1)

### Dynamic Programming
- Used in: Maximum Product Subarray
- Time: O(n), Space: O(1)

---

## Code Quality Standards

✅ **Clean Code**
- Follows C++ naming conventions (camelCase for variables)
- Proper indentation and spacing
- Meaningful variable names

✅ **Optimization**
- Time complexity analysis included
- Space complexity optimization
- In-place modifications where possible

✅ **Documentation**
- Problem description in comments
- Approach explanation
- Example test cases
- Edge cases handled

---

## Example: Maximum Subarray (Kadane's Algorithm)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxCurrent = nums[0];
    int maxGlobal = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        maxCurrent = max(nums[i], maxCurrent + nums[i]);
        maxGlobal = max(maxGlobal, maxCurrent);
    }
    
    return maxGlobal;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    // Output: 6 (from subarray [4, -1, 2, 1])
    
    return 0;
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## Reference Materials

### Interview Preparation
- **Apna College Interview Sheet** (Companies & Questions):  
  [Interview Questions Google Sheet](https://docs.google.com/spreadsheets/d/1mvlc8EYc3OVVU3X7NKoC0iZJr_45BL_pVxiJec0r94c/edit?pli=1&gid=0#gid=0)

### Learning Platforms
- [LeetCode](https://www.leetcode.com/) - Practice problems
- [GeeksforGeeks](https://www.geeksforgeeks.org/) - DSA tutorials
- [HackerRank](https://www.hackerrank.com/) - Challenge problems
- [Codeforces](https://codeforces.com/) - Competitive programming

### C++ References
- [cppreference.com](https://en.cppreference.com/) - C++ standard library
- [C++ STL Documentation](https://www.cplusplus.com/reference/stl/)

---

## How to Contribute

Contributions are welcome! Here's how you can help:

### Process
1. **Fork** the repository
2. **Clone** your fork locally
3. **Create** a new branch (`git checkout -b feature/amazing-feature`)
4. **Make** your changes
5. **Commit** with clear messages (`git commit -m 'Add LeetCode 123 solution'`)
6. **Push** to your branch (`git push origin feature/amazing-feature`)
7. **Open** a Pull Request

### Guidelines
- Follow C++ naming conventions
- Add time/space complexity analysis
- Include comments explaining the approach
- Test your code before submitting
- Add driver code / example test cases

### Types of Contributions Welcome
- ✅ New LeetCode problem solutions
- ✅ Optimized versions of existing solutions
- ✅ Bug fixes and improvements
- ✅ Better documentation
- ✅ New pattern programs
- ✅ Detailed explanations

---

## License Info

This project is licensed under the **MIT License** - see the [LICENSE](./LICENSE) file for details.

Free to use for educational and personal purposes. ✅

---

## Author

**Aadarsh M**
- GitHub: [@AadarshM045](https://github.com/AadarshM045)
- Repository: [Aadarsh-DSA](https://github.com/AadarshM045/Aadarsh-DSA)
- Email: [Contact via GitHub](https://github.com/AadarshM045)

---

## Support

If you found this repository helpful in your DSA journey, please give it a ⭐ star on GitHub! It helps:
- 🚀 Motivate further development
- 👥 Help others discover this resource
- 📈 Track interest in the project

---

## Next Steps in Your DSA Journey

After mastering these fundamentals, explore:

- 🔹 **Trees & Graphs** - DFS, BFS, Tree traversal
- 🔹 **Dynamic Programming** - DP problems, Memoization
- 🔹 **Greedy Algorithms** - Optimal substructure problems
- 🔹 **Backtracking** - Permutations, Combinations
- 🔹 **Linked Lists** - Traversal, Reversal, Detection
- 🔹 **Stacks & Queues** - Stack-based problems
- 🔹 **Trie & Hash** - String processing, Caching
- 🔹 **Advanced Techniques** - Segment Trees, Fenwick Trees

---

## Questions or Feedback?

- Open an **Issue** for bugs or suggestions
- Discuss problems in **Discussions** section
- Connect on **GitHub** for questions
- Check out my other repositories for more DSA content

---

## Repository Stats

- **Total LeetCode Problems:** 40+
- **Pattern Programs:** 13
- **Categories:** 6 (Patterns, Arrays, Binary Search, Math, Sorting, Strings)
- **Languages:** C++
- **Difficulty Levels:** Easy to Hard

---

## Bonus Tips

### Quick Compilation Commands
```bash
# Single file
g++ -o output filename.cpp && ./output

# With optimization
g++ -O2 -o output filename.cpp && ./output

# With debugging
g++ -g -o output filename.cpp && gdb ./output
```

### Common STL Functions Used
- `vector<>` - Dynamic arrays
- `sort()` - Sorting
- `unordered_map<>` - Hash maps
- `set<>` / `unordered_set<>` - Sets
- `priority_queue<>` - Max/Min heaps
- `string` - String operations

---

**Last Updated:** 2024
**C++ Standard:** C++11 and above
**Status:** ✅ Active & Regularly Updated

**Happy Coding! 🚀**