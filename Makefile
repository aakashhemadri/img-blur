#!/usr/bin/make -f
# Yaaay

# PATHS #
LIB_PATH = include
SRC_PATH = src
BUILD_PATH = build
BIN_PATH = $(BUILD_PATH)/bin

# EXEC #
BIN_NAME = img-comp

# EXTENTIONS #
SRC_EXT = cpp

# FLAGS #
COMPILE_FLAGS = -std=c++14 -Wall -Wextra -g
INCLUDE = -Iinclude
LDFLAGS = -Lobj

#OBJECTS :=  $(wildcard  $(BUILD_PATH)/*.o)
#SOURCES := $(wildcard $(SRC_PATH)/*.cpp)
LIBRARY := $(wildcard $(LIB_PATH)/*.h)
SOURCES = $(shell find $(SRC_PATH) -name '*.$(SRC_EXT)' | sort -k 1nr | cut -f2-)
OBJECTS = $(SOURCES:$(SRC_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/%.o)
DEPS = $(OBJECTS:.o=.d)
# PHONY RULES #
.PHONY: default_target
default_target: release

.PHONY: release
release: export CXXFLAGS := $(CXXFLAGS) $(COMPILE_FLAGS)
release: dirs
	@$(MAKE) all

# checks the executable and symlinks to the output
.PHONY: all
all: $(BIN_PATH)/$(BIN_NAME)
	@echo "Making symlink: $(BIN_NAME) -> $<"
	@$(RM) $(BIN_NAME)
	@ln -s $(BIN_PATH)/$(BIN_NAME) $(BIN_NAME)

# Creating executable.
$(BIN_PATH)/$(BIN_NAME): $(OBJECTS)
	@echo "Linking: $@"
	$(CXX) $(OBJECTS) -o $@

-include $(DEPS)

# Compiling object files.
$(BUILD_PATH)/%.o: $(SRC_PATH)/%.$(SRC_EXT)
	@echo "Compiling: $< -> $@"
	$(CXX) $(CXXFLAGS) $(INCLUDE) -MP -MMD -c $< -o $@

.PHONY: dirs
dirs:
	@echo "Creating directories"
	@mkdir -p $(dir $(OBJECTS))
	@mkdir -p $(BIN_PATH)

.PHONY: clean
clean:
	@echo "Deleting $(BIN_NAME) symlink"
	@$(RM) $(BIN_NAME)
	@echo "Deleting directories"
	@$(RM) -r $(BUILD_PATH)
	@$(RM) -r $(BIN_PATH)

.PHONY: info print_path print_files print_flags
print_path:
	@echo "Object Directory: $(OBJ_PATH)"
	@echo "Library Directory: $(LIB_PATH)"
	@echo "Source Directory: $(SRC_PATH)"
print_files:
	@echo "OBJECT FILES: $(OBJECT)"
	@echo "SOURCE FILES: $(SOURCE)"
	@echo "LIBRARIES: $(LIBRARY)"
print_flags:
	@echo "CXXFLAGS: $(CXXFLAGS)"
	@echo "LDFLAGS: $(LDFLAGS)"
