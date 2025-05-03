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
