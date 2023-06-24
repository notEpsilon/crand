CC=gcc
FLAGS=-Wall -Wextra -g

clean:
	@rm -rf bin

format:
	@clang-format -style=Chromium -i *.c *.h

build_dev: clean
	@mkdir bin
	@$(CC) $(FLAGS) *.c -o bin/dist

build_prod: clean
	@mkdir bin
	@$(CC) -Wall -Wextra *.c -o bin/dist
