TARGET = program
CC = g++
CXXFLAGS = -g -Wall -std=c++17
BUILD_DIR = build
SRC_DIR = src
INC_DIR = include
INC = -I$(INC_DIR)

C_SRC =	$(wildcard $(SRC_DIR)/*.cpp)

OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(C_SRC))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CXXFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CC) $(CXXFLAGS) -c $< $(INC) -o $@

$(BUILD_DIR):
	mkdir build

clean: 
	rm -r -f $(BUILD_DIR)

run: $(TARGET)
	./$(TARGET)