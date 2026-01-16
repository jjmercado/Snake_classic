# Snake

This project is my implementation of the legendary arcade classic **Snake**, developed in C++ using the SFML library. The goal of this project was to implement dynamic list logic and a grid-based movement system to faithfully recreate the classic gameplay mechanics.

> Read this in [German](README.de.md).

🕹️ The Game

### Gameplay Principle

The player controls a snake through a two-dimensional playing field. With every item collected, the snake grows, making navigation increasingly difficult. The core mechanics include:

* **Grid Movement:** The snake moves in fixed steps on a grid; the direction can only be changed by 90 degrees.
* **Growth Logic:** Every time the snake's head collides with a food object, a new segment is appended to the end.
* **Restart:** The game does not end; it restarts automatically whenever the head touches the field boundaries or collides with its own body (self-collision).

### Controls

- Snake: `W` (up), `S` (down), `A` (left) und `D` (right)

---

## 🚀 Download & Website

Want to try the game directly without compiling it yourself? You can find the executable file (.exe / App) and further information on my website:

[Website]: https://jjmercado.github.io/portfolioSite/games/snake-classic
🔗 **[Website]**

---

## 🛠️ Build Instructions (Local Build)

This project uses CMake to manage the build process across different platforms.

### Prerequisites

* A C++17 compatible compiler (GCC, Clang, or MSVC).
* CMake (Version 3.10 or higher).
* SFML 2.6.2 (Update to the latest SFML version is planned for the future).

### Step-by-Step

1. **Clone the Repository**:
```bash
git clone https://github.com/jjmercado/Snake_classic
cd snake_classic

```


2. **Create Build Directory**:
```bash
mkdir build
cd build

```


3. **Configure CMake**:
```bash
cmake ..

```


4. **Build the Project**:
```bash
cmake --build .

```


5. **Run the Game**:
After the build is complete, you will find the executable in the `build` folder (or under `build/Debug` / `build/Release` on Windows).

---

## 📜 License & Copyright

The code for this project is licensed under the **MIT License**.

* **Code:** The source code is available under the MIT License. You are welcome to study it and use it for your own projects.
* **Assets & Content:** All images, videos, and texts are my intellectual property (Copyright) and are **not** covered by the MIT License. Use of these assets is not permitted without explicit permission.

---

Would you like me to adjust the "Controls" section to match typical Snake movement (Up/Down/Left/Right) instead of the "Spaceship" description?