gcc -c -Wall -Werror -Wextra *.c
mkdir -p build
mv *.o ./build
ar crs libft.a ./build/*.o