# C++ · семинары · 1 курс, 2026/27

Презентации прошедших семинаров и задания к ним.

**Как смотреть презентацию:** скачайте `slides.html` (кнопка «Download raw file» на странице файла) и откройте в браузере.
Листать — стрелками `←` `→`, ответы на вопросы открываются по `→` или кликом, `F` — полный экран, `D` — тёмная тема.

## Семинары

| № | Тема | Презентация | Файлы |
|---|------|-------------|-------|
| 1 | Стартовый набор C++ | [презентация](seminars/01-start/slides.html) | — |
| 2 | Контейнеры и редакторы | [презентация](seminars/02-containers-editors/slides.html) | [файлы](seminars/02-containers-editors/files/) |
| 3 | Редактор и компилятор | [презентация](seminars/03-editor-compiler/slides.html) | [файлы](seminars/03-editor-compiler/files/) |
| 4 | Ассемблер, указатели, массивы | [презентация](seminars/04-asm-pointers-arrays/slides.html) | [файлы](seminars/04-asm-pointers-arrays/files/) |
| 5 | Кодстайл, санитайзеры и отладка | [презентация](seminars/05-codestyle-sanitizers-debug/slides.html) | [файлы](seminars/05-codestyle-sanitizers-debug/files/) |
| 6 | Ссылки, константы, классы | [презентация](seminars/06-references-const-classes/slides.html) | — |
| 7 | Перегрузка операторов и наследование | [презентация](seminars/07-operators-inheritance/slides.html) | — |
| 8 | Доразбор дебильника №1 | [презентация](seminars/08-quiz1-review/slides.html) | [файлы](seminars/08-quiz1-review/files/) |

## Контрольные

Задания прошедших контрольных — для подготовки и самопроверки.

| Контрольная | Варианты |
|-------------|----------|
| Контрольная работа №1 | [variant1](tests/kr1/variant1.pdf), [variant2](tests/kr1/variant2.pdf), [variant3](tests/kr1/variant3.pdf) |

Если файл заканчивается на `.gz` — распакуйте: `gunzip big.log.gz`.

---

## Упражнение по git

Каждый добавляет свою папку с файлом через merge request (на GitHub — pull request).
Папка и ветка называются вашей фамилией латиницей, маленькими буквами: `ivanova`.
Пример — папка `ismdnvat/`.

1. `git clone <адрес этого репозитория>` и `cd` в его папку
2. `git status` — убедиться, что вы на `main`
3. `git switch -c <фамилия>` — новая ветка от `main`
4. `mkdir <фамилия>`, в ней `main.cpp`: программа печатает ваше имя
5. `git add <фамилия>/main.cpp` и `git commit -m "Add <фамилия>/main.cpp"`
6. `git push -u origin <фамилия>`
7. открыть merge request / pull request из своей ветки в `main` и ждать Approve

В `main` напрямую пушить нельзя — только через merge request / pull request.
