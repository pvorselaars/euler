solution.bin: solution.c
	cc -o $@ $^ && ./$@

