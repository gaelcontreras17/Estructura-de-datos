# Fibonacci recursivo en C++

Programa en C++ que solicita al usuario un número `n` y calcula, mediante una
función recursiva, cada término de la sucesión de Fibonacci desde `F(0)` hasta `F(n)`.

## Casos base
- `F(0) = 0`
- `F(1) = 1`

## Caso recursivo
- `F(n) = F(n-1) + F(n-2)` para `n >= 2`

## Compilar y ejecutar

```bash
g++ -o fibonacci fibonacci.cpp
./fibonacci
```

## Ejemplo de ejecución (n = 5)

```
Ingrese hasta que termino de la serie de Fibonacci desea calcular: 5

Fibonacci(0) = 0
Fibonacci(1) = 1
Fibonacci(2) = 1
Fibonacci(3) = 2
Fibonacci(4) = 3
Fibonacci(5) = 5
```
