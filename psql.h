#ifndef _POSTGRESQL_H_
#define _POSTGRESQL_H_
#include <libpq-fe.h>
int postgresql_init(void);
void postgresql_finish(void);
#endif