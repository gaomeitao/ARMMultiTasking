# AMT Demos

The documents linked below give an overview of how the demos work and explain some mechanisms in these demos.

For the best understanding we suggest that you:
* read the document and demo source side by side
* make some changes to the demo to verify its behaviour
* follow it in the debugger with `make debug_<demo>` (see [debugging.md](debugging.md) for more details)

| Name                                        | Description                                                                       |
| ------------------------------------------- | --------------------------------------------------------------------------------- |
| [yielding](../demos/yielding/README.md)     | Threads yielding back to the scheduler.                                           |
| [exyielding](../demos/exyielding/README.md) | Threads yielding directly to another thread or the next available thread.         |
| [message](../demos/message/README.md)       | Passing messages between threads.                                                 |
| [exit](../demos/exit/README.md)             | Threads exiting normally like any other C function.                               |
| [spawn](../demos/spawn/README.md)           | One thread creating other threads.                                                |
| stackcheck                                  | Detection of thread stack underflow or overflow when they try to yield.           |
| args                                        | Passing arguments to a thread.                                                    |
| mutexes                                     | Locking a buffer using a mutex.                                                   |
| timer                                       | Thread switching using a timer interrupt.                                         |
| threadlocalstorage (Arm/Thumb)              | Using thread local storage (TLS) to give each thread it's own 'global' variables. |
| conditionvariables                          | Waiting on, signalling and broadcasting to condition variables.                   |
| cancel                                      | Cancelling threads.                                                               |
| file                                        | Read from a file.                                                                 |
| alloc                                       | Use of malloc/free.                                                               |
| loadbinary                                  | Loading a thread from a separate binary.                                          |
| loadbinaries                                | Loading multiple binaries, swapping them as they become active.                   |
| loadpiebinary                               | Loading a position independent binary.                                            |
| parentchild                                 | Setting child threads to set the order they run in, relative to a parent thread.  |
| permissions                                 | Setting syscall access permissions per thread. (includes errno usage)             |
| trace                                       | Redirecting another thread by writing to its PC.                                  |
| signalhandling                              | Installing and invoking signal handlers.                                          |
| backtrace                                   | Show callstack of user threads. (only tested on Arm -O0)                          |
| fibres                                      | User space threading.                                                             |