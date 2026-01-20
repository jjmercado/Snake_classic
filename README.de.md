# Snake

Dieses Projekt ist meine Umsetzung des legendären Arcade-Klassikers Snake, entwickelt in C++ mit der SFML-Bibliothek. Das Ziel des Projekts war die Implementierung einer dynamischen Listen-Logik und eines grid-basierten Bewegungssystems, um die klassischen Gameplay-Mechaniken originalgetreu nachzubilden.

🕹️ Das Spiel

### Das Spielprinzip

Der Spieler steuert eine Schlange durch ein zweidimensionales Spielfeld. Mit jedem aufgenommenen Item wächst die Schlange, was die Navigation zunehmend erschwert. Die Kernmechaniken umfassen:

- **Grid-Movement:** Die Schlange bewegt sich in festen Schritten auf einem Gitter, wobei die Richtung nur um 90 Grad geändert werden kann.

- **Wachstums-Logik:** Jedes Mal, wenn der Kopf der Schlange mit einem Futter-Objekt kollidiert, wird ein neues Segment am Ende angehängt.

- **Neustart:** Das Spiel endet nicht es startet immer wieder neu, sobald der Kopf die Spielfeldbegrenzung berührt oder mit dem eigenen Körper kollidiert (Self-Collision).

### Steuerung

- **Snake:** `W` (hoch), `S` (runter), `A` (links) und `D` (rechts)

---

## 🚀 Download & Website

Du möchtest das Spiel direkt ausprobieren, ohne es selbst zu kompilieren? Die ausführbare Datei (.exe / App) sowie weitere Informationen findest du auf meiner Website:

[Website]: https://jjmercado.github.io/portfolioSite/games/snake-classic
🔗 **Hier geht's zur [Website] und zum Download**

---

## 🛠️ Build-Anleitung (Lokal bauen)

Dieses Projekt verwendet CMake, um den Build-Prozess plattformübergreifend zu verwalten.

### Voraussetzungen

- Ein **C++17** fähiger Compiler (GCC, Clang oder MSVC).
- **CMake** (Version 3.10 oder höher).
- **SFML 2.6.2** Download binaries for Linux(nicht via Package Manager) oder Windows, (Update auf die aktuellste SFML-Version folgt, sobald Zeit dafür ist).

### Schritt-für-Schritt

1. **Repository klonen**:

```bash
git clone https://github.com/jjmercado/Snake_classic
cd snake_classic
```

2. **Build-Verzeichnis erstellen:**

```bash
mkdir build
cd build
```

3. **CMake konfigurieren:**

```bash
cmake ..
```

4. **Build the Project:**

    1. **Linux**
    ```bash
    cmake --build .
    ```

    2. **Windows**
    ```bash
    cmake --build . --config Release
    ```

5. **Spiel starten:**
Nach dem Build findest du die ausführbare Datei im build-Ordner (oder unter build/Debug / build/Release bei Windows).

---

## 📜 Lizenzhinweis & Urheberrecht

Der Code dieser Website steht unter der **MIT Lizenz**.

- **Code:** Der Quellcode dieser Website steht unter der MIT-Lizenz. Du darfst ihn gerne studieren und für eigene Projekte verwenden.

- **Assets & Inhalt:** Alle Bilder, Videos und Texte sind mein geistiges Eigentum (Copyright) und stehen **nicht** unter der MIT-Lizenz. Eine Verwendung dieser Assets ist ohne ausdrückliche Genehmigung nicht gestattet.