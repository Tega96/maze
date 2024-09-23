build:
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g ./src/*.c -lSDL2 -lSDL2_image -lm -o maze;

run:
	./maze ./map/map.txt

clean:
	rm maze
