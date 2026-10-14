# Семинар по C++: git и GitLab

Каждый добавляет свою папку с файлом через merge request.
Папка и ветка называются вашей фамилией латиницей, маленькими буквами: `ivanova`.
Пример — папка `ismdnvat/`.

1. `git clone git@gitlab.com:ismdnvat/cpp-seminar.git` и `cd cpp-seminar`
2. `git status` — убедиться, что вы на `main`
3. `git switch -c <фамилия>` — новая ветка от `main`
4. `mkdir <фамилия>`, в ней `main.cpp`: программа печатает ваше имя
5. `git add <фамилия>/main.cpp` и `git commit -m "Add <фамилия>/main.cpp"`
6. `git push -u origin <фамилия>`
7. открыть merge request из своей ветки в `main` и ждать Approve

В `main` напрямую пушить нельзя — только через merge request.
