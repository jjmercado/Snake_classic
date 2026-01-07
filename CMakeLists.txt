# Legt die minimal erforderliche CMake-Version fest.
cmake_minimum_required(VERSION 3.10)

# Definiert den Projektnamen.
project(Classic_Snake)

# Fügt die ausführbare Datei "Snake" hinzu und listet alle Quelldateien auf,
# die zum Kompilieren benötigt werden.
add_executable(SnakeApp
    Snake/Main.cpp
    Snake/Game.cpp
    Snake/Snake.cpp
    Snake/SnakePart.cpp
    Snake/Food.cpp
    Snake/Grid.cpp
)

target_link_libraries(SnakeApp 
    PRIVATE 
        sfml-graphics 
        sfml-window 
        sfml-system
)

# Setzt den C++ Standard. C++11, 14, 17 oder 20 sind übliche Werte.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)