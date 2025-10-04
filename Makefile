
# Compiler
CC = gcc

# Compiler flags (show warnings, debug)
CFLAGS = -Wall -g $(shell pkg-config --cflags libavcodec libavformat libavutil)

# Linker flags (FFmpeg libraries)
LDFLAGS = $(shell pkg-config --libs libavcodec libavformat libavutil)

# Target executable
TARGET = stream

# Default rule
all: $(TARGET)

# Compile target
$(TARGET): stream_service.c
	$(CC) $(CFLAGS) stream_service.c -o $(TARGET) $(LDFLAGS)

# Clean up generated files
clean:
	rm -f $(TARGET)
