Main: Main.o Personas.o Negocios.o Oficina.o Repartidor.o Cliente.o Productos.o Orden.o
	g++ Main.o Personas.o Negocios.o Oficina.o Repartidor.o Cliente.o Productos.o Orden.o -o Hugo
Main.o: Main.cpp
	g++ -c Main.cpp
Negocios.o :Negocios.cpp Negocios.h
	g++ -c Negocios.cpp
Oficina.o: Oficina.cpp Oficina.h
	g++ -c Oficina.cpp
Repartidor.o: Repartidor.cpp Repartidor.h
	g++ -c Repartidor.cpp
Cliente.o: Cliente.cpp Cliente.h
	g++ -c Cliente.cpp
Personas.o: Personas.cpp Personas.h
	g++ -c Personas.cpp
Orden.o: Orden.cpp Orden.h
	g++ -c Orden.cpp
Productos.o: Productos.cpp Productos.h
	g++ -c Productos.cpp
