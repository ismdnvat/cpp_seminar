# Семинар 5

task01.cpp … task07.cpp — какая ошибка? Для каждого файла:

    g++ -g -fsanitize=address,undefined task01.cpp -o task01
    ./task01

task04: на Mac санитайзер утечки не ищет. Вместо него:

    g++ -g task04.cpp -o task04
    leaks --atExit -- ./task04

reverse.cpp, area.cpp, queue.cpp — задача 1: найдите баги санитайзерами.

core/ — домашнее задание: программа упала, остался core (исходника нет).
Программа собрана под Linux, запускать её не нужно — только отладчик.

    cd core
    lldb -c core ./positive

    bt, frame select N, frame variable
