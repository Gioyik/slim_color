test: example/test.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	rm test
