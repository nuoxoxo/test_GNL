if gcc -E ../ft_printf.h
then
gcc -Wall -Werror -Wextra pmain.c ../*.c -fsanitize=address &&


./a.out
./a.out c a
./a.out c b
./a.out c c
./a.out c x
./a.out c y
./a.out c z
./a.out c ^
./a.out c \`
./a.out c \<
./a.out c _
./a.out c \}
./a.out c ~
./a.out c +
./a.out c jump
./a.out c hello
./a.out c !world


./a.out s HelloWorld
./a.out s "Hello, World!"
./a.out s "Goodbye! Cruel World."
./a.out s "Lorem ipsum"
./a.out s "You catch the airport shuttle and try to book a new flight to your destination."
./a.out s "Today, you set out on the task of perfecting your milk-dunking cookie recipe."
./a.out s "Walking along the memory banks of the stream, you find a small village that is experiencing a little confusion: some programs can't communicate with each other." 
#./a.out s "\\t\n\v\v\v\n\n\t\t\tabc\t\t\n\t\v\n\v\v\n\nxyz\n"


./a.out p 16
./a.out p 64
./a.out p "Hello, World!"
./a.out p -256
./a.out p 512
./a.out p 1024
./a.out p "Lorem ipsum"
./a.out p -8192
./a.out p 16384
./a.out p "Goodbye! Cruel World."
./a.out p -32768
./a.out p 65536
./a.out p "Today, you set out on the task of perfecting your milk-dunking cookie recipe."
./a.out p -131072
./a.out p "You catch the airport shuttle and try to book a new flight to your destination."
./a.out p "Walking along the memory banks of the stream, you find a small village that is experiencing a little confusion: some programs can't communicate with each other." 


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

else
	echo "\nwRoNg TeSt.\n"
fi
