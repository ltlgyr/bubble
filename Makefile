source:=bubble
all:$(source)

bubble:bubble.c main.c
	gcc -o $@  $^
clean:
	rm $(source)
