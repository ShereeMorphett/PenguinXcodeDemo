# CMake SFML Project Template

# Penguin Project

This project, named "Penguin," is a C++ application using the SFML library. (To be fair this repo is a first day version of a project I am working on there for it only prints a triangle.)
the code is from practicing with this tutorial: https://www.sfml-dev.org/tutorials/2.6/graphics-vertex-array.php

But really the point here is to help you like Xcode and Cmake 🥳


## Overview

The project is structured to compile source files located in the `src` and `include` directories, combining both C and C++ files. It generates an executable named `penguin`.
The purpose is to have a boilerplate project with FML/Cmake/Xcode as a base.

## Build Configuration

- **Build Type:** Static
- **C++ Standard:** C++17
- **External Library:** SFML 2.6.x
- **Build Output:** Executable placed in the `bin` directory within the build folder

## Setup and Build

1. **Prerequisites:**
    - CMake version 3.16 or higher.
    - C++17 compatible compiler.

2. **Building the Project:**
    - Configure the project using CMake.
    - Build the project using the generated configuration.

## Project Structure

- **Source Files:**
    - C/C++ files: `src/*.c`, `src/*.cpp`
    - Headers: `include/*.h`, `include/*.hpp`

## Additional Notes

- **OpenAL DLL (Windows):**
    - For Windows builds, an OpenAL DLL is copied to the output directory during the build process.

## Installation

The project can be installed using CMake's `install` functionality.

## Additional Resources

For a video walkthrough on linking Xcode to this CMake project, check out the video in this repo :D

---

For any issues, questions, or improvements, feel free to contribute or reach out to the project contributors.

## License

The source code is dual licensed under Public Domain and MIT -- choose whichever you prefer.
