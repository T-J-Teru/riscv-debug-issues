# Disable paging.
set height 0

# Display the commands before executing them.
set trace-commands on

target sim
load

break mi-dprintf.c:30

run
print arg

continue
print arg

# This is what ARG _should_ be.
print arg == 1235

quit


