# 🧠 push_swap: Sorting with Style & Stacks 🎯  
Welcome to **push_swap**, my journey into the world of algorithms, data structures, and sorting under pressure!  
✨ In this project, I built a sorting algorithm using stacks and a limited set of operations. The challenge? Sort it **fast** and **with the fewest moves possible**! 🔥

---

## 🔧 The Challenge

You’re given a stack of integers (Stack A), and your goal is to sort them using a second stack (Stack B) and only these operations:

- `sa`, `sb`, `ss` – swap the top 2 elements  
- `pa`, `pb` – push from one stack to another  
- `ra`, `rb`, `rr` – rotate (top becomes bottom)  
- `rra`, `rrb`, `rrr` – reverse rotate (bottom becomes top)

That’s it. No loops, no stdlib sorting. Just you, your brain, and some spicy C code. 🌶️

---

## 🌟 Features: What push_swap Does

💡 Smartly sorts **up to 500** numbers with optimized moves  
🔍 Uses different strategies based on input size  
🧮 Includes a custom implementation of stack-based operations  
⚙️ Handles errors like duplicate numbers, non-integers, overflows, and invalid input  

---

## 🧩 Algorithm Highlights

Depending on the size of the list:

<li>For 3 elements: ultra-fast decision trees. ⚡  
<li>For 5 elements: smart minimal moves using insertion logic. 🧠  
<li>For 100–500 elements: chunking strategy & radix sort. 🚀  

---

## 💡 What I Learned

Building `push_swap` sharpened my algorithmic thinking and taught me:

<li>Stack-based data manipulation 📚  
<li>Efficient sorting under constraints ⏱️  
<li>Handling edge cases and input validation like a boss 🛡️  
<li>Writing clean, testable, and optimized code 💎  
<li>Thinking in operations instead of code flow 🧠  

---

## 🚀 Getting Started

```bash
git clone https://github.com/yourusername/push_swap.git
cd push_swap
make
