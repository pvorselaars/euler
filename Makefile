SOLUTIONS = $(basename $(wildcard *c))

all: $(SOLUTIONS)

%: %.c
	@cc -o $@ $^ -lm -Wall -O2 && printf "\nProblem $@:\n" && ./$@ && rm ./$@

clean:
	rm -f $(SOLUTIONS)
