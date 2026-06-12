all: clean
	gcc main.c -o main.exe

clean:
	rm -f main.exe