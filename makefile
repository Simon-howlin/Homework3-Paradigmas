ej1:
	g++ -std=c++17 -Wall -Wextra -Werror -I Ejercicio1/headers -o ej1 Ejercicio1/examples/main.cpp Ejercicio1/sources/*.cpp
	./ej1
	rm -rf ej1 vuelo.dat

ej2:
	g++ -std=c++17 -Wall -Wextra -Werror -I Ejercicio2/headers -o ej2 Ejercicio2/examples/main.cpp Ejercicio2/sources/*.cpp
	./ej2
	rm -rf ej2

ej3:
	g++ -std=c++17 -Wall -Wextra -Werror -I Ejercicio3/headers -o ej3 Ejercicio3/examples/main.cpp
	./ej3
	rm -rf ej3
