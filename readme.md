# 🧠 CPP Module 01 – Punteros, Memoria Dinámica y Referencias

> ✅ Objetivo: Comprender cómo maneja C++ la memoria, y cómo usar punteros, referencias y constructores especiales
> ✅ Nivel: Principiante – Enfocado en diseño de clases robustas
> ✅ Temas clave: referencias, punteros, `new/delete`, const, asignación, copia profunda

---

## 📚 Tabla de Contenidos

1. [Referencias (`&`)](#1-referencias-)
2. [Punteros y Memoria Dinámica (`*`, `new`, `delete`)](#2-punteros-y-memoria-dinámica--new-delete)
3. [Inicialización de Objetos](#3-inicialización-de-objetos)
4. [Constructores por Copia](#4-constructores-por-copia)
5. [Destructores Personalizados](#5-destructores-personalizados)
6. [Const y `const` correctness](#6-const-y-const-correctness)
7. [Errores Comunes](#7-errores-comunes)
8. [Buenas Prácticas](#8-buenas-prácticas)

---

## 🔹 1. Referencias `&`

📘 **¿Qué es?**
Una referencia es un **alias** de otra variable. No es un puntero. Una vez asignada, no puede cambiar de objetivo.

```cpp
int a = 42;
int& ref = a; // ref es un alias de a
ref = 21;     // también cambia el valor de a
```

🧠 **Visualización:**

```
[a] = 42
[ref] → alias → [a]
```

🎯 Se usa mucho para pasar parámetros a funciones sin copia.

```cpp
void modifica(int& ref) {
    ref += 10;
}
```

---

## 🔹 2. Punteros y Memoria Dinámica (`*`, `new`, `delete`)

📘 **¿Qué es?**
Un puntero almacena una dirección de memoria. Se usa para manejar memoria dinámica o estructuras complejas.

```cpp
int* ptr = new int; // asigna memoria dinámica
*ptr = 42;

delete ptr; // libera la memoria
```

🧠 **Visualización:**

```
[ptr] = 0x1234 → [0x1234] = 42
```

🔁 Con clases:

```cpp
class Zombie {
public:
    Zombie()  { std::cout << "Naciendo zombie\n"; }
    ~Zombie() { std::cout << "Destruyendo zombie\n"; }
};

int main() {
    Zombie* z = new Zombie();
    delete z;
}
```

---

## 🔹 3. Inicialización de Objetos

📘 **¿Qué es?**
C++ permite múltiples formas de inicializar objetos.

```cpp
class Player {
private:
    int vidas;

public:
    Player() : vidas(3) {} // forma recomendada con lista de inicialización
};
```

🎯 Usa lista de inicialización siempre que puedas para eficiencia.

---

## 🔹 4. Constructores por Copia

📘 **¿Qué es?**
Se llama cuando un objeto se copia en otro (por valor).

```cpp
class Guerrero {
private:
    std::string nombre;

public:
    Guerrero(std::string n) : nombre(n) {}

    // Constructor por copia
    Guerrero(const Guerrero& other) {
        nombre = other.nombre;
    }
};
```

🧠 Importante cuando hay punteros como miembros → evitar shallow copy.

---

## 🔹 5. Destructores Personalizados

📘 **¿Qué es?**
Libera recursos manualmente.

```cpp
class Archivo {
private:
    char* contenido;

public:
    Archivo() {
        contenido = new char[100];
    }

    ~Archivo() {
        delete[] contenido;
    }
};
```

🧠 Sin destructor → memory leak.

---

## 🔹 6. `const` y const correctness

📘 **¿Qué es?**
Sirve para proteger variables o métodos de modificaciones inesperadas.

```cpp
class Libro {
private:
    std::string titulo;

public:
    std::string getTitulo() const {
        return titulo;
    }
};
```

🎯 También se puede aplicar a punteros:

```cpp
const int* ptr1;   // No puedes modificar el valor apuntado
int* const ptr2;   // No puedes cambiar la dirección del puntero
const int* const ptr3; // Ambos
```

---

## 🔹 7. Errores Comunes

❌ Olvidar liberar memoria con `delete`
❌ Copiar objetos con punteros sin constructor por copia
❌ Confundir `*` y `&` (declaración vs desreferencia vs dirección)
❌ No marcar métodos como `const` cuando deberían serlo
❌ Usar `delete` en objetos no creados con `new`

---

## 🔹 8. Buenas Prácticas

✅ Usa `valgrind` para detectar fugas de memoria
✅ Escribe destructores para clases con `new`
✅ Marca tus getters como `const`
✅ Usa referencias en vez de punteros siempre que sea posible
✅ Prefiere lista de inicialización

---

## ✨ ¿Qué sigue?

El **CPP Module 02** se centrará en sobrecarga de operadores, herencia simple y la famosa **Regla de los Tres**.
¿Quieres que lo prepare con el mismo formato también? 😎
