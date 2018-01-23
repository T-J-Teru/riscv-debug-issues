# Disable paging.
set height 0

# Display the commands before executing them.
set trace-commands on

target sim
load

break add_float
run

up
print l
set variable l = 0
continue
quit



