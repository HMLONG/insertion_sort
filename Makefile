quicksort : insertion_sort.o
	gcc -o insertion_sort insertion_sort.o
quicksort.o : insertion_sort.c
	gcc -c insertion_sort.c
clean :
	rm insertion_sort insertion_sort.o
