#include "thread.h"
#include "util.h"

const char* filename = "binary";
void load_again() {
  // Fails because other_worker from binary is still active
  // (worker has finished though)
  assert(add_thread_from_file(filename) == -1);
  yield();
  log_event("loading binary again");
  // Now that all threads from binary have finished
  // we can load it into the code page again
  int added = add_thread_from_file(filename);
  assert(added != -1);
  // Cancelling it should release the page and let us load again
  assert(thread_cancel(added));
  added = add_thread_from_file(filename);
  assert(added != -1);
}

void setup(void) {
  add_thread_from_file(filename);
  add_named_thread(load_again, "load_again");
  // Fails because single code page is in use
  assert(add_thread_from_file(filename) == -1);
}