all: clean
	gcc main.c blackjack.c roulette.c -o main.exe

clean:
	rm -f main.exe