# Семинар 5

task01.cpp … task07.cpp — какая ошибка? Для каждого файла:

    g++ -g -fsanitize=address,undefined task01.cpp -o task01
    ./task01

reverse.cpp, area.cpp, queue.cpp — задача 1: найдите баги санитайзерами.

core/ — домашнее задание: программа упала, остался core (исходника нет).

    cd core
    gdb ./positive core

    bt, frame N, info locals
