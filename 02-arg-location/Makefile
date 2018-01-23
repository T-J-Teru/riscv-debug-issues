CC=riscv32-unknown-elf-gcc
GDB=riscv32-unknown-elf-gdb

.PHONY: all clean

all:
	$(CC) -g3 -O0 -o mi-dprintf mi-dprintf.c
	$(GDB) -x cmd.gdb mi-dprintf

clean:
	-rm -f mi-dprintf

