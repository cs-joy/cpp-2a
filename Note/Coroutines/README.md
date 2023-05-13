## Coroutines

Coroutines are general control structures where flow control is cooperatively passed between two different routines without returning. 

## Why Coroutines are needed? 

To read a file and parse it while reading into some meaningful data, you can either read step by step at each line, which is fine. You may also load the entire content in memory, which won’t be recommended for large text cases e.g text editors like Microsoft Word or in modern systems just use Pipes. 

In The Art of Computer Programming, Donald Knuth presents a solution to this sort of problem. His answer is to throw away the stack concept completely. Stop thinking of one process as the caller and the other as the callee, and start thinking of them as cooperating equals. So we can now try and see how to achieve the same in C.