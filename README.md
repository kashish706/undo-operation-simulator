# Undo Operation Simulator
This project demonstrates a basic "Undo Operation Simulator" built using "HTML, CSS, JavaScript", and "C++". It mimics how text editors work — allowing you to type characters one at a time and undo them using a stack-based approach.

##  Project Structure
| File | Description |
| `index.html` | Interactive web interface for typing and undoing characters |
| `undo_simulator.cpp` | C++ implementation of the undo logic in a text-based environment |

## 🚀 Features
- 🔡 Type one character at a time (via UI)
- 🔙 Undo the last typed character
- 📦 Stack-based visual history of operations
- ✨ Responsive and clean UI
- 💻 C++ version for terminal-based simulation

## Live Demo
> [👉 Click here to view the live web version](#)  
(*Host with GitHub Pages or Netlify if desired*)

## How to Use
1. Open `index.html` in your browser.
2. Type any lowercase/uppercase character.
3. Click **Type** to add it.
4. Click **Undo** to remove the last character.
5. Watch the stack update in real-time!

### ▶️ C++ Version

1. Compile the code using g++ or any C++ compiler:
   ```bash
   g++ undo_simulator.cpp -o undo
   ./undo
