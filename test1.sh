gcc -Wall -Werror -Wextra -D BUFFER_SIZE=16 main1.c ../get_next_line.c ../get_next_line_utils.c -fsanitize=address && ./a.out $1 $2
