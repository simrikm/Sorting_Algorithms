OBJECTS=bubble_sort.o main.o insertion_sort.o spin_the_bottle_sort.o shell_sort.o annealing_sort.o
run.sh:$(OBJECTS)
	g++ -ggdb  $(OBJECTS) -o run.sh
bubble_sort.o:bubble_sort.cpp project1.h
	g++ -c -std=c++11 -ggdb bubble_sort.cpp
insertion_sort.o:insertion_sort.cpp project1.h
	g++ -c  -std=c++11 -ggdb insertion_sort.cpp
spin_the_bottle_sort.o:spin_the_bottle_sort.cpp project1.h
	g++ -c -std=c++11 -ggdb spin_the_bottle_sort.cpp
shell_sort.o:shell_sort.cpp project1.h
	g++ -c -std=c++11 -ggdb shell_sort.cpp
annealing_sort.o:annealing_sort.cpp project1.h
	g++ -c -std=c++11 -ggdb annealing_sort.cpp
main.o:main.cpp project1.h
	g++ -c -std=c++11 -ggdb main.cpp


