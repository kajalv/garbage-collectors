run: all
	./concurrentMarkSweep

all: cms
	gcc -o concurrentMarkSweep cms.o runner.c

cms: cms.o
	gcc -c cms.c