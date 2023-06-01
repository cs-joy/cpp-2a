#include <iostream> 
#include <stdlib.h>
 
 using namespace std;

 const int HIGH_SPEED = (1<<7); /* modem is running fast */ 
 // we are using a hardwired connection 
 const int DIRECT_CONNECT = (1<<8); 
 
 char flags = 0; // start with nothing
 
 main() 
 { 
 flags |= HIGH_SPEED; // we are running fast 
 flags |= DIRECT_CONNECT; // because we are wired together 
 
 if ((flags & HIGH_SPEED) != 0) 
 cout <<"High speed set\n"; 
 
 if ((flags & DIRECT_CONNECT) != 0) 
 cout <<"Direct connect set\n"; 

 SecStyle();
 return (0); 
 }
