pamsi.exe: ./obj/main.o ./obj/stack.o ./obj/list.o ./obj/graph.o ./obj/astar.o ./obj/pamsi.o
	g++ -g -std=c++11 ./obj/main.o ./obj/stack.o ./obj/list.o ./obj/graph.o ./obj/astar.o ./obj/pamsi.o -o Projekt

./obj/main.o: ./src/main.cpp ./inc/stack.h
	g++ -g -std=c++11 -c -o ./obj/main.o ./src/main.cpp

./obj/list.o: ./src/list.cpp ./inc/list.h ./inc/ilist.h ./inc/element.h
	g++ -g -std=c++11 -c -o ./obj/list.o ./src/list.cpp

./obj/stack.o: ./src/stack.cpp ./inc/stack.h ./inc/istack.h ./inc/ilist.h ./inc/element.h
	g++ -g -std=c++11 -c -o ./obj/stack.o ./src/stack.cpp

./obj/graph.o: ./inc/graph.h ./inc/igraph.h ./src/graph.cpp ./inc/stack.h
	g++ -g -std=c++11 -c -o ./obj/graph.o ./src/graph.cpp

./obj/astar.o: ./inc/astar.h ./inc/stack.h ./src/astar.cpp
	g++ -g -std=c++11 -c -o ./obj/astar.o ./src/astar.cpp

./obj/pamsi.o: ./src/PAMSI.cpp
	g++ -g -std=c++11 -c -o ./obj/pamsi.o ./src/PAMSI.cpp

clean:
	rm ./obj/* -rf
	rm Projekt
	rmdir ./obj
