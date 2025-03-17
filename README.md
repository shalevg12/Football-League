# Football League

Welcome to the **Football League** project! This C++ project simulates a soccer league, featuring teams, players, coaches, referees, and game results. Each team competes in games, and the team with the most points at the end of the season wins the championship.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [Acknowledgements](#acknowledgements)

## Introduction

The **Football League** project simulates a soccer league with the following components:
- Soccer teams, each with players and a coach
- Games between teams, each played twice (home and away)
- Referees officiating the games
- Scoring system to determine the league champion

## Features

- Manage teams with players and a coach
- Schedule and simulate games between teams
- Assign referees to games
- Calculate and update team scores based on game results
- Determine the league champion based on points

## Installation

1. Clone the repository to your local machine:
    ```sh
    https://github.com/shalevg12/Football-League.git
    ```
2. Navigate to the project directory:
    ```sh
    cd football-league
    ```
3. Compile the project using your preferred C++ compiler:
    ```sh
    g++ -o football-league Main.cpp Coach.cpp Date.cpp Footballer.cpp Game.cpp Ligat_HaAl.cpp Manager.cpp Person.cpp Referee.cpp Stadium.cpp Team.cpp Worker.cpp
    ```

## Usage

1. Run the compiled program:
    ```sh
    ./main
    ```
2. Follow the on-screen instructions to manage teams, simulate games, and view the league table.
    ```sh
    1.Add Footballer
    2.Add Referee
    3.Print Team Details
    4.Print Referee Details
    5.Print Future Games Details
    6.Print Worker Salary
    7.Add Goal
    8.Add Judgment Errors
    9.Print Outstanding People
    10.Print Table
    11.Print Footballer Detail With Smallest Salary
    12.Exit
    ```

## File Structure

- `Coach.cpp`, `Coach.h`: Implements the Coach class.
- `Date.cpp`, `Date.h`: Implements the Date class.
- `Footballer.cpp`, `Footballer.h`: Implements the Footballer (player) class.
- `Game.cpp`, `Game.h`: Implements the Game class.
- `Ligat_HaAl.cpp`, `Ligat_HaAl.h`: Implements the Table class for league standings.
- `Manager.cpp`, `Manager.h`: Implements the Manager class.
- `Person.cpp`, `Person.h`: Implements the Person base class.
- `Referee.cpp`, `Referee.h`: Implements the Referee class.
- `Stadium.cpp`, `Stadium.h`: Implements the Stadium class.
- `Team.cpp`, `Team.h`: Implements the Team class.
- `Worker.cpp`, `Worker.h`: Implements the Worker class.
- `Main.cpp`: Contains the main function and controls the flow of the program.

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes. Ensure that your code follows the project's coding standards and is well-documented.

## Acknowledgements

Project owner: Shalev Gabay
