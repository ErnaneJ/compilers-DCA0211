gcc -o q1/main.out q1/main.c

echo "-------------------\n"
time ./q1/main.out --attempt 1
echo "\n-------------------\n"
time ./q1/main.out --attempt 2
echo "\n-------------------\n"
time ./q1/main.out --attempt 3
echo "\n-------------------\n"
time ./q1/main.out --attempt 4
echo "\n-------------------"