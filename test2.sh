gcc -Wall -Werror -Wextra -D BUFFER_SIZE=32 main2.c ../get_next_line.c ../get_next_line_utils_bonus.c -fsanitize=address && ./a.out $1 $2
