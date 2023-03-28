Statsketball: main.o Executive.o Team.o
	g++ -std=c++11 -g -Wall main.o Executive.o Team.o -o Statsketball

main.o: main.cpp Executive.h Team.h
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp Team.h Team.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

Team.o: Team.h Team.cpp 
	g++ -std=c++11 -g -Wall -c Team.cpp

clean:
	rm *.o Statsketball