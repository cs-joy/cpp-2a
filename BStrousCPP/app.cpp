#pragma comment(lib, "urlmon.lib")
 
#include <urlmon.h>
 
#include <cstdio>
 
#include <iostream>
 
#include <string>
 
#define getURL URLOpenBlockingStreamA
 
using namespace std;
 
// c program to download a file from url
int main()
{
 
  // Windows IStream interface
  IStream* stream;
 
  const char* URL = "https://stroustrup.com/Programming/PPP2_Preface.pdf";
 
  // make a call to the URL
  // a non-zero return means some error
  if (getURL(0, URL, &stream, 0, 0))
  {
 
    cout << "Error occured.";
 
    cout << "Check internet";
 
    cout << "Check URL. Is it correct?";
 
    return -1;
 
  }
 
  // this char array will be cyclically
  // filled with bytes from URL
  char buff[100];
 
  // we shall keep appending the bytes
  // to this string
  string s;
 
  unsigned long bytesRead;
 
  while(true)
  {
 
    // Reads a specified number of bytes
    // from the stream object into char
    // array and stores the actual
    // bytes read to "bytesRead"
    stream->Read(buff, 100, &bytesRead);
 
    if(0U == bytesRead)
    {
 
      break;
 
    }
 
    // append and collect to the string
    s.append(buff, bytesRead);
 
  };
 
  // release the interface
  // good programming practice
  stream->Release();
 
  // display
  cout << s << endl;
 
  return 0;
 
}
