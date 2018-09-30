#!/usr/bin/make -f
# Yaaay

OBJDIR = obj
LIBDIR = include
SRCDIR = src

CXXFLAGS = -Wall -Iinclude -c
LDFLAGS = -Lobj

OBJECT :=  $(wildcard  $(OBJDIR)/*.o)
SOURCE := $(wildcard $(SRCDIR)/*.cpp)
LIBRARY := $(wildcard $(LIBDIR)/*.h)


$(OBJDIR)/node.o : $(SRCDIR)/node.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
$(OBJDIR)/point.o : $(SRCDIR)/point.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
$(OBJDIR)/quadtree.o : $(SRCDIR)/quadtree.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
$(OBJDIR)/main.o : $(SRCDIR)/main.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
img-comp : $(OBJECT)
	$(CXX) $(CXXFLAGS) $(OBJECT) -o $@

.PHONY: clean info printdirs printfiles printflags
printdirs:
	@echo "Object directory: $(OBJDIR)"
	@echo "Library directory: $(LIBDIR)"
	@echo "Source directory: $(SRCDIR)"
printfiles:
	@echo "OBJECT FILES: $(OBJECT)"
	@echo "SOURCE FILES: $(SOURCE)"
	@echo "LIBRARIES: $(LIBRARY)"
printflags:
	@echo "CXXFLAGS: $(CXXFLAGS)"
	@echo "LDFLAGS: $(LDFLAGS)"
clean:
	rm $(OBJECT)
