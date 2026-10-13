# Семинар по C++: git и GitLab

Каждый добавляет свой файл `students/<логин>.cpp` через merge request.

1. `git clone` этого репозитория
2. `git switch -c <логин>`
3. создать `students/<логин>.cpp`: программа печатает имя и любимый язык
4. `git add students/<логин>.cpp` и `git commit -m "Add <логин>.cpp"`
5. `git push -u origin <логин>`
6. открыть merge request из своей ветки в `main`

В `main` напрямую пушить нельзя — только через merge request.
