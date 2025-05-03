**Лабораторная работа №2**

**Часть 1**
1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
```sh
git clone https:://github.com/HowBadCanIBe/lab02.git
Клонирование в «lab02»...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Получение объектов: 100% (3/3), готово.

```
3. Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.
4. Добавьте этот файл в локальную копию репозитория.
```sh
git add hello_world.cpp
```
5. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.
```sh
 #include <iostream>
 #include <string>
 
 using namespace std;
 
 int main() {
     string name;
     cout << "Enter your name: ";
     cin >> name;
     cout << "Hello, World! from " << name << endl;
     return 0;
 }
```
7. Закомитьте новую версию программы.
```sh
git commit -am "Hello World - the updated version"
1 file changed, 13 insertions(+)
 create mode 100644 hello_world.cpp
```
8. Запуште изменения в удалёный репозиторий.
```sh
git push
Перечисление объектов: 8, готово.
Подсчет объектов: 100% (8/8), готово.
При сжатии изменений используется до 8 потоков
Сжатие объектов: 100% (6/6), готово.
Запись объектов: 100% (6/6), 678 байтов | 678.00 КиБ/с, готово.
Всего 6 (изменений 3), повторно использовано 0 (изменений 0), повторно использовано пакетов 0
remote: Resolving deltas: 100% (3/3), completed with 2 local objects.
To https://github.com/HowBadCanIBe/lab02.git
   31e8e97..8251c0c  main -> main
```
9. Проверьте, что история коммитов доступна в удалёный репозитории.

**Часть 2**
1. В локальной копии репозитория создайте локальную ветку patch1.
```sh
git checkout -b patch1
Переключились на новую ветку «patch1»
```
2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;
```sh
#include <iostream>
#include <string> 
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, World! from " << name << std::endl;
    return 0;
}
```
Commit, push локальную ветку в удалённый репозиторий.
```sh
git commit -am "Removed using namespace std; line"
[patch1 dbbb19c] Removed using namespace std; line
 1 file changed, 9 insertions(+), 10 deletions(-)
git push origin patch1
Username for 'https://github.com': HowBadCanIBe
Password for 'https://HowBadCanIBe@github.com': 
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 8 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 405 байтов | 405.00 КиБ/с, готово.
Всего 3 (изменений 1), повторно использовано 0 (изменений 0), повторно использовано пакетов 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote: 
remote: Create a pull request for 'patch1' on GitHub by visiting:
remote:      https://github.com/HowBadCanIBe/lab02/pull/new/patch1
remote: 
To https://github.com/HowBadCanIBe/lab02.git
 * [new branch]      patch1 -> patch1
```
3. Проверьте, что ветка patch1 доступна в удалёный репозитории.
4. Создайте pull-request patch1 -> master.
5. В локальной копии в ветке patch1 добавьте в исходный код комментарии. commit, push.
```sh
git push origin patch1
Username for 'https://github.com': HowBadCanIBe
Password for 'https://HowBadCanIBe@github.com': 
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 8 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 489 байтов | 489.00 КиБ/с, готово.
Всего 3 (изменений 1), повторно использовано 0 (изменений 0), повторно использовано пакетов 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/HowBadCanIBe/lab02.git
   dbbb19c..1a19132  patch1 -> patch1
```
6. Проверьте, что новые изменения есть в созданном на шаге 5 pull-request
7. В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.
8. Локально выполните pull.
```sh
git checkout main
Переключились на ветку «main»
Эта ветка соответствует «origin/main».
git pull origin main
remote: Enumerating objects: 12, done.
remote: Counting objects: 100% (11/11), done.
remote: Compressing objects: 100% (8/8), done.
remote: Total 8 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
Распаковка объектов: 100% (8/8), 4.61 КиБ | 4.61 МиБ/с, готово.
Из https://github.com/HowBadCanIBe/lab02
 * branch            main       -> FETCH_HEAD
   8251c0c..c4d36d4  main       -> origin/main
Обновление 8251c0c..c4d36d4
Fast-forward
 README.md       | 78 +++++++++++++++++++++++++++++++++++++++++++++++++++++--
 hello_world.cpp | 23 +++++++++-------
 2 files changed, 89 insertions(+), 12 deletions(-)
```
9. С помощью команды git log просмотрите историю в локальной версии ветки master.Удалите локальную ветку patch1.
```sh
git branch -d patch1
Ветка patch1 удалена (была 1a19132).
```

**Часть 3**
1. Создайте новую локальную ветку "patch2"
```sh
git checkout -b patch2
Переключились на новую ветку «patch2»
```
2. Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.
``sh
clang-format -style=Mozilla -i hello_world.cpp
```
3. commit, push, создайте pull-request patch2 -> master.
```sh
git commit -am "Formatted code with clang-format"
[patch2 a8d7e19] Formatted code with clang-format
 1 file changed, 13 insertions(+), 11 deletions(-)
git push origin patch2
Username for 'https://github.com': HowBadCanIBe
Password for 'https://HowBadCanIBe@github.com': 
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 8 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 398 байтов | 398.00 КиБ/с, готово.
Всего 3 (изменений 2), повторно использовано 0 (изменений 0), повторно использовано пакетов 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
remote: 
remote: Create a pull request for 'patch2' on GitHub by visiting:
remote:      https://github.com/HowBadCanIBe/lab02/pull/new/patch2
remote: 
To https://github.com/HowBadCanIBe/lab02.git
 * [new branch]      patch2 -> patch2
```
4. В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
```sh
//Including the libraries
#include <iostream>
#include <string> 
//main function
int main() {
//Name input
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
//Prining hello world
    std::cout << "Hello, World! from " << name << std::endl;
    return 0;
}
```
5. Убедитесь, что в pull-request появились конфликты.
