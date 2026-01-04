# Data Structures & Algorithms (C++)

This repository contains **C++ implementations and solutions** for common **Data Structures and Algorithms (DSA)** problems. It is intended for learning, practice, and interview preparation.

The project is built using **CMake** and is compatible with **CLion** and standard C++ toolchains.

---

## 📁 Project Structure

```text
data_structures_alg/
├── CMakeLists.txt
├── main.cpp
├── ValidParentheses/
│   ├── ValidParentheses.cpp
│   └── ValidParentheses.hpp
└── README.md
```

Each problem or topic lives in its own directory and typically contains:

* A `.cpp` file with the implementation
* A `.hpp` file with declarations (if needed)

---
## 🚀 Build & Run

### Requirements

* C++20 compatible compiler (Clang / GCC)
* CMake ≥ 3.20
* (Optional) CLion IDE

### Build from Terminal

```bash
mkdir -p cmake-build-debug
cd cmake-build-debug
cmake ..
cmake --build .
```

### Run

```bash
./data_structures_alg
```

---

## 🧪 Adding a New Problem

1. Create a new folder:

   ```bash
   mkdir TwoSum
   ```

2. Add files:

   ```text
   TwoSum/
   ├── TwoSum.cpp
   └── TwoSum.hpp
   ```

3. Register the source in `CMakeLists.txt`:

   ```cmake
   add_executable(data_structures_alg
       main.cpp
       ValidParentheses/ValidParentheses.cpp
       TwoSum/TwoSum.cpp
   )
   ```

---

## 📄 License

This project is for educational purposes. Feel free to fork, modify, and use it for learning.

---

Happy coding 🚀
