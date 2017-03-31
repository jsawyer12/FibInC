clean: 
	rm *.o stage1 stage2 stage3

stage1: print_fib.c recursive_fib.c fib.h
	gcc -o stage1 print_fib.c

stage2: print_fib.c iterative_fib.c fib.h
	gcc -o stage2 print_fib.c

stage3: second_main.c personalised_fib.c fib.h
	gcc -o stage3 second_main.c
