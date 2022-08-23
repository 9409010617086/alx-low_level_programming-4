# 0x15-file_io
* 0-read_textfile.c - A function that reads a text file and prints it to the POSIX standard output.

**To run**
```shell
...# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
...# ./a is_love_a_lost_cause
```

* 1-create_file.c - A function that creates a file.

**To run**
```shell
...# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
...# ./b hello world
-> 1)
...# cat hello
world...#
```

* 2-append_text_to_file.c - A function that appends text at the end of a file.

**To run**
```shell
...# echo -n Hello > hello
...# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
...# ./c hello " World!"
...# cat hello
cat hello
```

* 3-cp.c - A function that appends text at the end of a file.

**To run**
```shell
...# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
...# ./cp is_love_a_lost_cause love
...# cat love
```

* 0-main.c - Test file for 0-read_textfile.c
* 1-main.c - Test file for 1-create_file.c
* 2-main.c - Test file for 2-append_text_to_file.c
* is_love_a_lost_cause - File use in the opening and copying from one file ro another file operation.
* main.h - Header file containing prototypes of functions used in the C files.
## Useful Resources
* [File descriptor _ Wikipedia](https://en.wikipedia.org/wiki/File_descriptor)
* [C Programming in Linux Tutorial #024 - open() read() write() Functions - Wikipedia](https://youtu.be/dP3N8g7h8gY)

**man**
* open
* close
* read
* write

**Read on**
* Creating, opening, closing, reading, and writing files
* File descriptors
* System call
* O_RDONLY, O_WRONLY, O_RDWR, O_TRUNC, and other flags in the open operation
* STDIN_FILENO (0), STDOUT_FILENO (1), STDERR_FILENO (2)
* Setting file permission in `open` system call
