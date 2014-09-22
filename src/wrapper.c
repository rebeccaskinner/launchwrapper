#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct
{
    char* command_name;
} command_wrapper_t;

typedef enum
{ /* Don't fork a new process, just execute */
  EXEC_NOFORK = (1<<0)
  /* Perform common daemonization operations such as
   * changing the current working directory to root,
   * closing stdin and stdout, etc.  Note that if this
   * option is set then stdin, stdout, and stderr will
   * be closed UNLESS those FDs have already been
   * redirected
   */
, EXEC_DAEMONIZE = (1<<1)
, EXEC_NEW_PGID = (1<<2)
} exec_opts_t;
