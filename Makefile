RM = rm -f
EEXT = 
OEXT = .o
TARGET1 = testkdcpp
TARGETS = $(TARGET1)
CC = g++

$(TARGET1)$(EEXT): main.cpp asciitable.cpp

	$(CC) -o $@ $?
clean:
	$(RM) testkdcpp

