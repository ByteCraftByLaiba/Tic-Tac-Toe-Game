# Tic Tac Toe Game 🎮

A simple console-based Tic Tac Toe game developed in C++. The game allows two players to play against each other, with an intuitive menu and gameplay instructions.

## Table of Contents 📚
- [Overview](#overview)
- [Features](#features)
- [How to Play](#how-to-play)
- [Technologies Used](#technologies-used)
- [Project Setup / Installation](#project-setup--installation)
- [Game Rules](#game-rules)
- [About the Game](#about-the-game)
- [License](#license)

## Overview
The Tic Tac Toe game is a straightforward two-player game played on a 3x3 grid. The objective is to be the first player to place three of their marks in a row (vertically, horizontally, or diagonally). This project showcases basic programming concepts, including arrays, control structures, and file handling in C++.

## Features
- Two-player gameplay (Player A and Player B).
- User-friendly menu for easy navigation.
- Display of current game state after each turn.
- Input validation for player moves.
- Instructions on how to play the game.
- Record of how to play saved in a text file.

## How to Play
1. **Starting the Game**: Choose the option to start a new game from the main menu.
2. **Making Moves**: Players take turns entering the position (1-9) where they want to place their mark (X for Player A and O for Player B).
3. **Winning the Game**: The game checks for a winner after each turn. If one player gets three marks in a row, they win.
4. **Viewing Instructions**: Select the option to view how to play for detailed instructions.

## Technologies Used
- **Programming Language**: C++
- **Control Structures**: If-else, Switch statements
- **Data Structures**: 2D arrays
- **File Handling**: Output to text file for game instructions

## Project Setup / Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/ByteCraftByLaiba/TicTacToe.git
   ```
2. Navigate to the project directory:
   ```bash
   cd Tic-Tac-Toe-Game
   ```
3. Compile the code using a C++ compiler:
   ```bash
   g++ -o Tic-Tac-Toe-Game main.cpp
   ```
4. Run the compiled program:
   ```bash
   ./Tic-Tac-Toe-Game
   ```

## Game Rules
- The game is played on a 3x3 grid.
- Player A is represented by 'X', and Player B is represented by 'O'.
- Players take turns entering positions numbered 1 to 9.
- The first player to get three of their marks in a row (vertically, horizontally, or diagonally) wins the game.
- If all positions are filled and no player has won, the game ends in a draw.

## About the Game
Tic Tac Toe is a simple yet engaging game that tests players' strategic thinking. This C++ implementation enhances understanding of fundamental programming concepts such as functions, arrays, and control flow. 

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```
