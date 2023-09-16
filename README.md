# Сontainers

Реализация библиотеки Сontainers.h.


## Содержание

1. [Описание](#описание)
2. [Реализация](#реализация)


![Сontainers](misc/images/Containers.png)


## Описание

- Программа разработана на языке C++ стандарта C++17
- При написании кода придерживались Google Style
- Покрытие unit-тестами методов контейнерных классов c помощью библиотеки GTest
- Реализация стандартной библиотеки шаблонов (STL) НЕ ИСПОЛЬЗОВАЛАСЬ
- Соблюдалась логика работы стандартной библиотеки шаблонов (STL) (в части проверок, работы с памятью и поведения в нештатных ситуациях)

## Реализация

Реализованы классы библиотеки `containers.h` \
Список классов: `list` (список), `map` (словарь), `queue` (очередь), `set` (множество), `stack` (стек), `vector` (вектор),
`array` (массив), `multiset` (мультимножество).
- Оформлено решение в виде заголовочного файла `containers.h`, который включает в себя другие заголовочные файлы с реализациями необходимых контейнеров
- Предусмотрен Makefile для тестов написанной библиотеки (с целями clean, test)
