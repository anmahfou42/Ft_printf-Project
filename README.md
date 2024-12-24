# 🖨️ ft_printf - The Custom C Formatter  

Welcome to `ft_printf`! 🚀 Dive into this minimalist yet powerful reimplementation of the standard `printf` function in C. Created as part of my learning journey at **1337**, this project aims to mimic the functionality of `printf` while highlighting efficient coding practices and creativity.

---

## 🧩 Features  
🔹 Supports **conversion specifiers**:  
- `%c` - Characters  
- `%s` - Strings  
- `%p` - Pointers  
- `%d` & `%i` - Integers  
- `%u` - Unsigned integers  
- `%x` & `%X` - Hexadecimal (lower & uppercase)  
- `%%` - The literal `%`  

🔹 Handles formatting with precision and width.  
🔹 Well-tested for edge cases and robustness.  

---

## 💡 Why ft_printf?  

`ft_printf` isn’t just about replicating functionality; it’s a deep dive into:  
- **Memory management** – Allocating and managing memory efficiently.  
- **Variadic functions** – Unlocking the magic of variable arguments with `va_list`.  
- **Algorithm design** – Handling complex output formatting with simplicity.  

---

## 🚀 How to Use  

1. Clone this repository:  
   ```bash
   git clone https://github.com/yourusername/ft_printf.git
   cd ft_printf
   ```
2. Compile the library:  
   ```bash
   make
   ```
3. Include it in your C project:  
   ```c
   #include "ft_printf.h"
   ```

Call `ft_printf` just like you would use the standard `printf`:  
```c
ft_printf("Hello, %s! You are number %d.\n", "world", 42);
```

---

## 🛠️ Technical Highlights  

- **Custom implementation of `itoa`, `strlen`, and more** to keep the library self-contained.  
- **Edge case handling**, such as null pointers and unusual precision requests.  
- **Optimized performance** for efficient printing.  

---

## 📚 Learning Takeaways  

Through `ft_printf`, I learned:  
- How variadic functions work under the hood.  
- The importance of clean and modular code.  
- Debugging and testing for compatibility and correctness.  

---

## 🎯 Future Improvements  

- Add support for custom flags (`#`, `+`, ` `).  
- Expand test cases for cross-platform behavior.  
- Optimize for better performance with large input.  

---

## 💌 Acknowledgments  

Big thanks to **1337** and its unique pedagogy for inspiring this project. Special appreciation to my peers and mentors who helped debug and test along the way!  

---

## 📝 License  

Feel free to explore, learn, and improve upon this project. Contributions are welcome! 🌟  

---

Ready to explore the power of `ft_printf`? Clone the repo, dive into the code, and let’s format the world together! ✨  
