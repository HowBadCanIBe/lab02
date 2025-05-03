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
$ git commit -am "Hello World - the updated version"
1 file changed, 13 insertions(+)
 create mode 100644 hello_world.cpp
```
