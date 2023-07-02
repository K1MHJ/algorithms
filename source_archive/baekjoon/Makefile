.PHONY: all clean
CPP:=clang++
AR=ar
RANLIB=ranlib
LD := clang++
C11FLAGS= -g -Wall -std=c++17
OBJDIR := ./obj
BINDIR := ./bin

all:
	@echo " Do not \"make all\"! "

run-%: build-%
	@echo "run ${@:run-%=$(BINDIR)/%}"
	${@:run-%=$(BINDIR)/%}

dbg-%:
	@echo "debug ${@:dbg-%=$(BINDIR)/%}"
	lldb ${@:dbg-%=$(BINDIR)/%}

clean :
	rm -rf $(BINDIR) $(OBJDIR)

1978: ./1978/main.cpp
	mkdir -p $(BINDIR)
	$(CPP) $(C11FLAGS) $^ -o $(BINDIR)/$@ 

build-%: ./%/main.cpp
	mkdir -p $(BINDIR)
	$(CPP) $(C11FLAGS) $^ -o ${@:build-%=$(BINDIR)/%} 
