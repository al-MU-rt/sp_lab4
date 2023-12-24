cmake_minimum_required(VERSION 3.10)

project(MyCalculatorProject)

# Додає виконуваний файл та залежності
add_executable(myprogram main.cpp calculator.cpp calculator.h)

# Додає бібліотеку
add_library(calculator STATIC calculator.cpp calculator.h)

# Підключає бібліотеку до виконуваного файлу
target_link_libraries(myprogram PRIVATE calculator)
