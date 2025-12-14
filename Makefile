SOLUTIONS = $(basename $(wildcard *c))

all: $(SOLUTIONS)

%: %.c
	@cc -o $@ $^ -Wall -O2 && printf "\nProblem $@:\n" && ./$@ && rm ./$@

clean:
	rm -f $(SOLUTIONS)
