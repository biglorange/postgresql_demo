#include "psql.h"

typedef struct psql_conn
{
	char 		*conninfo;
	PGconn 		*connection;
	ExecStatusType *execstatus;
} psql_conn_t;