# Rock, Paper, Scissors

A small console game written in C++. Play Rock, Paper, Scissors against the computer-controlled NPC. The first side to score **5 points** wins.

## Requirements

- A C++ compiler such as MinGW-w64 (g++)
- Windows, because the program uses `windows.h` for `Sleep()` and `system("cls")`

## Build and run

From Command Prompt or PowerShell, save the source as `main.cpp`, then compile and run:

```bat
g++ main.cpp -o rock-paper-scissors.exe
rock-paper-scissors.exe
```

## How to play

1. Enter your player name (one word).
2. Enter `1` to start or `2` to exit.
3. Choose a move each round:

| Input | Move |
|---:|---|
| `3` | Rock |
| `2` | Paper |
| `1` | Scissors |

The NPC makes a random choice. The winner of each round earns one point; a tie gives no points. The game continues until either the player or NPC reaches 5 points.

## Rules

- Rock beats scissors.
- Scissors beats paper.
- Paper beats rock.
- Matching moves are a draw.

## Notes

- The program uses Windows-specific calls, so it will not compile as written on macOS or Linux.
- Enter a valid move (`1`, `2`, or `3`) to get a defined round result. Other values are not handled by the current code.
- The NPC random number generator is seeded inside the round loop. Seeding it once before the loop would give more reliable variation between rounds.
- The start menu's `game is starting` line inside `case 1` is unreachable because it appears after a `break`; a similar message is printed after the switch.
