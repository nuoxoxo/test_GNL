gcc -Wall -Werror -Wextra -D BUFFER_SIZE=32 main2.c ../get_next_bone.c ../get_next_bone_utils.c -fsanitize=address && ./a.out $1 $2
