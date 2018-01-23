CC=riscv32-unknown-elf-gcc
GDB=riscv32-unknown-elf-gdb

.PHONY: all clean

all:
	$(CC) -g3 -O0 -o store store.c
	$(GDB) -x cmd.gdb store

clean:
	-rm -f store

