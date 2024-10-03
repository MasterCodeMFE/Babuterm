# Minishell

**Minishell** es un proyecto desarrollado como parte del programa de la escuela 42. El objetivo es crear una réplica simple de la shell de Unix (Bash), proporcionando una interfaz de línea de comandos que permite ejecutar comandos básicos y manejar señales, tuberías y redirecciones.

## Características

- Ejecución de comandos del sistema.
- Soporte para redirecciones (`<`, `>`, `>>`).
- Soporte para pipelines (`|`).
- Manejo de variables de entorno.
- Implementación de comandos *built-in* como `echo`, `cd`, `pwd`, `export`, `unset`, `env` y `exit`.
- Manejo de señales como `Ctrl+C`, `Ctrl+D`, `Ctrl+\`.
- Uso de múltiples procesos y manejo de errores.

## Uso

Minishell funciona de manera similar a Bash. Puedes ejecutar comandos estándar de Unix, crear tuberías entre ellos y redirigir la entrada y salida. Algunos ejemplos:

```bash
$ ls -la
$ echo "Hello, World!" > file.txt
$ cat < file.txt | grep Hello
$ export VAR=value
$ echo $VAR
