build:
	@gcc -Wall src/*.c -o game -I/opt/homebrew/Cellar/sdl2/2.30.2/include -L/opt/homebrew/Cellar/sdl2/2.30.2/lib -lSDL2 -lsqlite3

run: build
	@./game

clean:
	@rm game
