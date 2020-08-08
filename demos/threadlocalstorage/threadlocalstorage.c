#include "user/thread.h"
#include "thread.h"
#include "util.h"

__thread int num = 2;
// Specifically an array to show that vars with size != 4 work
__thread char msg[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};

void thread_worker() {
  // Make i different for each thread
  num = num * (get_thread_id() + 1);
  for (; num > 0; --num) {
    log_event(msg);
    yield();
  }
}

void setup(void) {
  K_ADD_THREAD(thread_worker);
  K_ADD_THREAD(thread_worker);
}
