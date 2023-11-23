gcc -o ./main.out ./main.c

echo "-------------------\n"
time ./main.out --attempt 1
echo "\n-------------------\n"
time ./main.out --attempt 2
echo "\n-------------------\n"
time ./main.out --attempt 3
echo "\n-------------------\n"
time ./main.out --attempt 4
echo "\n-------------------"