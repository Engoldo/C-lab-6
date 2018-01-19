# C-lab-6

## Лабораторная работа №6 (Рекурсия)

### Задача №1

```
Написать программу, которая формирует в двумерном символьном
массиве фрактальное изображение и выводит его на консоль (см.рисунок)
```

![Фрактал](./fractal.PNG)

**Пояснение**

Фракталом обычно называют изображение, любая часть которого подобна целому. Поэтому, при рисовании фрактала используют рекурсию и некоторый масштабный коэффициент, определяющий размер изображения.

В задаче надо реализовать рекурсивную функцию **drawFractal**, которая формирует изображение в массиве,
расположив его центр в точке с заданными координатами. Переменная *size* задает масштаб изображения: 0 соответствует
одному символу, а >0 означает увеличение масштаба изображенеия.

**Состав**

Программа должна состоять из функций:

```
    - void drawFractal(char (*arr), int x,int y, int size) - функция, формирующая изображение
          в массиве arr, центр задается координатами (x,y) и масштаб изображения задается size 
    - main() - организация ввода строки
```

Создаются три файла: task1.h,task1.c,main1.c.

### Задача №2

```
Написать программу, которая находит в диапазоне целых чисел от
2 до 1000000 число, формирующее самую длинную последовательность Коллатца
```

**Пояснение**

Последовательностью Коллатца называют числовой ряд, каждый элемент которого формируется в зависимости от чётности/ нечётности предыдущего по закону:

1. n→3n+1, если n нечётное.
2. n→n/2, если n чётное

Начав отсчет с любого числа у нас формируется последовательность Коллатца, например:

- 1
- 2,1
- 3,10,5,16,8,4,2,1
- 4,2,1
- 5,..

Генерация членов последовательности заканчивается, когда появляется единица. Количество элементов и составляет длину
последовательности. В задаче надо перебирать в цикле числа от 2 до миллиона и для каждого считать длину последовательности.
В конце необходимо вывести число, формирующего самую длинную последовательность и длину этой последовательности.

**Состав**

Программа должна состоять из функций:

```
    - unsigned int seqCollatz(unsigned int *maxlen) - функция, возвращающая число и записывающую по адресу len длину 
    - unsigned int collatz(unsigned long long num) - функция, возвращающая длину последовательности Коллатца для числа num
    - main() - организация ввода строки
```

Создаются три файла: task2.h,task2.c,main2.c.

### Задача №3

```
Написать программу, которая переводит введённое пользователем
целое число в строку с использованием рекурсии и без каких-либо
библиотечных функций преобразования
```

**Пояснение**


**Состав**

Программа должна состоять из функций:

```
    - char* int2str(char *buf, unsigned int value) - функция, переводящая число в строку 
    - main() - организация ввода строки
```

Создаются три файла: task3.h,task3.c,main3.c.


