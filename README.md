<div align="center">

<h1>⚙️ C++ Compiler</h1>
</div>


<h2>📌 Description</h2>

<p>
This C++ Compiler is a modular compiler pipeline written primarily in C++.  
It simulates the internal architecture of modern compilers such as 
Clang by implementing:
</p>

<ul>
  <li>🔎 Tokenization (Lexer)</li>
  <li>🌳 Abstract Syntax Tree (AST)</li>
  <li>🧠 Recursive Descent Parsing</li>
  <li>⚡ Bytecode Instruction Generation</li>
  <li>🖥️ Stack-Based Virtual Machine</li>
</ul>

<hr>

<h2>🧠 Compiler Pipeline</h2>

<pre>
Source Code
    ↓
Lexer (Token Stream)
    ↓
Parser (AST)
    ↓
Code Generator (Bytecode)
    ↓
Virtual Machine (Execution)
</pre>

<hr>

<h2>📂 Project Structure</h2>

<pre>
CppCompiler/
│
├── src/
│   ├── main.cpp
│   │
│   ├── lexer/
│   ├── parser/
│   ├── ast/
│   ├── codegen/
│   ├── vm/
│
└── CMakeLists.txt
</pre>

<hr>

<h2>✨ Features</h2>

<ul>
  <li> Modular architecture</li>
  <li> Clean separation of compiler phases</li>
  <li> Stack-based bytecode VM</li>
  <li> Recursive Descent Parser</li>
  <li> Extendable grammar</li>
  <li> Modern C++17 support</li>
</ul>

<hr>

<h2>🧾 Supported Syntax (Current Version)</h2>

<pre><code>
10 + 20 * 2
</code></pre>

Planned extensions:
<ul>
  <li>🔜 Variable declarations</li>
  <li>🔜 Assignment statements</li>
  <li>🔜 if / while</li>
  <li>🔜 Functions</li>
  <li>🔜 Symbol Table</li>
</ul>

<hr>

<h2>⚙️ Build Instructions</h2>

<h4>📦 Requirements</h4>
<ul>
  <li>C++17 compatible compiler</li>
  <li>CMake 3.16+</li>
</ul>

<h4>🔨 Build Steps</h4>

<pre><code>
mkdir build
cd build
cmake ..
cmake --build .
</code></pre>

<h4>▶ Run</h4>

<pre><code>
./CppCompiler
</code></pre>

(Windows users: <code>MiniCppCompiler.exe</code>)


<hr>

<h2>🚀 Future Improvements</h2>

<ul>
  <li>🔹 Symbol Table Implementation</li>
  <li>🔹 Full Statement Parsing</li>
  <li>🔹 LLVM IR Backend</li>
  <li>🔹 Optimization Passes</li>
  <li>🔹 Error Reporting System</li>
  <li>🔹 Debug Mode with AST Visualization</li>
</ul>

<hr><br>

>Create with ❤️!