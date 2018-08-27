#ifndef _semaphore_h_
#define _semaphore_h_

class KernelSem;

class Semaphore{
public:
Semaphore(int init = 1);
virtual ~Semaphore();

virtual int wait (int toBlock);
virtual void signal();

int val () const;

private:
KernelSem* myImpl;
};

#endif