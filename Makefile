TARGET_EXEC ?= a.out

BUILD_DIR ?= ./build
SRC_DIRS ?= ./src ./include

SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.c -or -name *.s)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

CXX := clang++
# CC := clang++

# CPPFLAGS := -I/opt/homebrew/Cellar/glfw/3.3.8/include -I/opt/homebrew/Cellar/glew/2.2.0_1/include
CPPFLAGS := -I/opt/homebrew/Cellar/glfw/3.3.8/include -I./include/
LDFLAGS := -L/opt/homebrew/Cellar/glfw/3.3.8/lib -lglfw -framework OpenGL

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

# c source
$(BUILD_DIR)/%.c.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

# c++ source
$(BUILD_DIR)/%.cpp.o: %.cpp
	$(MKDIR_P) $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@


.PHONY: clean

run:
	$(BUILD_DIR)/$(TARGET_EXEC)
clean:
	$(RM) -r $(BUILD_DIR)

-include $(DEPS)

MKDIR_P ?= mkdir -p