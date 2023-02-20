compile: ./src/run.cpp
	g++ -o compile -I ../include ./src/compile.cpp

clean:
	rm -f compile