# ConvertCalendar

A tiny and powerful library for converting calendar date units. (gregorian, jalali)

# Using

```c
date result = gregorian2jalali(input);
```

### Functions

```c
date gregorian2jalali(date input);
```

## Example I/O

```
Input: 2019, 03, 31
Output: 1398, 1, 11
```

## Compile Example

```
$ git clone https://github.com/BaseMax/ConvertCalendar
$ cd ConvertCalendar/
$ cd example/
$ gcc main.c ../source/ConvertCalendar.c -o main
$ ./main
  ```
