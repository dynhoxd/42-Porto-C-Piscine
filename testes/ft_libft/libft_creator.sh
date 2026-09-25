gcc -c -Wall -Werror -Wextra *.c
mkdir build
mv *.o ./build
ar crs libft.a ./build/*.o