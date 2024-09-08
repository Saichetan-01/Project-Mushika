# Project Mushika

## Overview

**Project Mushika** is a console-based Share Auto Booking System implemented in C. This application enables users to book rides in share autos by selecting from a list of available autos, providing their details, and confirming the booking. Booking details are saved in a text file.

## Features

- **Book an Auto**: Users can choose an auto and provide their details to book a ride.
- **View Available Autos**: Displays a list of autos with their routes and fares.
- **Print Ticket**: After booking, a ticket with the booking details is printed.

## Getting Started

To run this project, you need a C compiler. The following instructions assume you are using GCC.

### Prerequisites

- GCC or any C compiler
- Standard C library

### Compilation

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/Saichetan-01/project-mushika.git
    cd project-mushika
    ```

2. **Compile the Code**:
    ```bash
    gcc -o share_auto_booking share_auto_booking.c
    ```

### Running the Program

1. **Execute the Compiled Program**:
    ```bash
    ./share_auto_booking
    ```

2. **Follow the On-Screen Instructions** to book an auto or view available autos.

## Code Overview

### `main()`

- Displays the main menu and processes user input for booking an auto or viewing available autos.
- Calls relevant functions based on user choice.

### `viewdetails()`

- Shows a list of available autos, their numbers, routes, and fares.

### `booking()`

- Collects user details (name and number of seats).
- Validates the selected auto number.
- Calculates the charges based on the auto number and number of seats.
- Prints the ticket and confirms the booking.

### `charge()`

- Computes the fare based on the auto number and number of seats.

### `printticket()`

- Prints the booking ticket with details such as name, number of seats, auto number, and charges.

### `specificauto()`

- Provides detailed information about the specific auto based on its number.

## Files

- `share_auto_booking.c`: The main source file containing the C code for the booking system.
- `seats_reserved.txt`: A text file where booking details are stored.

## Author

- **B.Sai Chetan** (22261A0410 MGIT)

## Acknowledgments

- This project was developed as part of a coursework assignment.
