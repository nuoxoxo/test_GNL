gcc -Wall -Werror -Wextra -D BUFFER_SIZE=32 gmain2.c ../*bonus*.c -fsanitize=address && ./a.out $1 $2
