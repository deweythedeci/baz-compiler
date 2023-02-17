run: run.cpp peglib.h
	g++ -o run -I ./ run.cpp

clean:
	rm run