# Ackermann-Program

This is a programm which computational complexity grows incredibly fast, up to the point that, for little integers, the programm has to stop due to the huge amount of execution time.

To execute the programm in Linux, just download the .cpp file and enter in the terminal:

$ g++ ackermann.cpp -o ackermann

$ ./ackermann

The programm will print numbers really fast, but ack(4,1) takes a while, and ack(4,2) will never reach a solution because it takes a ridiculous amount of time, so the OS will kill it.

This programm is more a curiosity rather than something useful, just to understand how far recursive functions can go.
