#include<iostream>
#include<conio>
void main()
{
   clrscr();
   int *iptr[5];
   int fa=65, fb=66, fc=67, fd=68, fe=69;
   int i;

   // initialize array pointers by making them point to 5 different ints
   iptr[0] = &fa;
   iptr[1] = &fb;
   iptr[2] = &fc;
   iptr[3] = &fd;
   iptr[4] = &fe;

   // now prints the values being pointed to by the pointers
   for(i=0; i<5; i++)
   {
      cout<<"The pointer iptr["<<i<<"] points to "<<*iptr[i]<<"\n";
   }
   cout<<"\n";

   // now print the addresses stored in the array
   cout<<"The base address of the array iptr of pointers is "<<iptr<<"\n";
   for(i=0; i<5; i++)
   {
      cout<<"The address stored in iptr["<<i<<"] is "<<iptr[i]<<"\n";
   }

   getch();
}