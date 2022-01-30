gcc -Wall -Werror -Wextra pmain.c ../*.c -fsanitize=address &&

./a.out
./a.out c c
./a.out c jump


./a.out s HelloWorld
./a.out s "Hello, World!"

./a.out p "Hello, World!"
./a.out p "Goodbye! Cruel World."


./a.out i 1
./a.out i 16
./a.out i -32
./a.out i 1024
./a.out i -4096
./a.out i 8192
./a.out i 2147483647
./a.out i -2147483647
./a.out i -2147483648


./a.out d 1
./a.out d 16
./a.out d -32
./a.out d 1024
./a.out d -4096
./a.out d 8192
./a.out d 2147483647
./a.out d -2147483647
./a.out d -2147483648


./a.out u 16
./a.out u 512
./a.out u 1024
./a.out u 16384


./a.out x 42
./a.out x 3405691582
./a.out x 4027431614
./a.out x 4276992702
./a.out x 3503344330
./a.out x 3735928559
./a.out x 3131746989
./a.out x 3221229823
./a.out x 4276994270
./a.out x 2952847021
./a.out x 3221229823
./a.out x 2343432205


./a.out X 42
./a.out X 3405691582
./a.out X 4027431614
./a.out X 4276992702
./a.out X 3503344330
./a.out X 3735928559
./a.out X 3131746989
./a.out X 3221229823
./a.out X 4276994270
./a.out X 2952847021
./a.out X 3221229823
./a.out X 2343432205


./a.out % 
./a.out
