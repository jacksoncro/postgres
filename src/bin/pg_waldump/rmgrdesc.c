/*
 * rmgrdesc.c
 *
 * pg_waldump resource managers definition
 *
 * src/bin/pg_waldump/rmgrdesc.c
 */
#define FRONTEND 1
#include "postgres.h"

#include "C:\projects\postgres\src\include\access\brin_xlog.h"
#include "C:\projects\postgres\src\include\access\clog.h"
#include "C:\projects\postgres\src\include\access\commit_ts.h"
#include "C:\projects\postgres\src\include\access\generic_xlog.h"
#include "C:\projects\postgres\src\include\access\ginxlog.h"
#include "C:\projects\postgres\src\include\access\gistxlog.h"
#include "C:\projects\postgres\src\include\access\hash_xlog.h"
#include "C:\projects\postgres\src\include\access\heapam_xlog.h"
#include "C:\projects\postgres\src\include\access\multixact.h"
#include "C:\projects\postgres\src\include\access\nbtxlog.h"
#include "C:\projects\postgres\src\include\access\rmgr.h"
#include "C:\projects\postgres\src\include\access\spgxlog.h"
#include "C:\projects\postgres\src\include\access\xact.h"
#include "C:\projects\postgres\src\include\access\xlog_internal.h"
#include "catalog/storage_xlog.h"
#include "commands/dbcommands_xlog.h"
#include "commands/sequence.h"
#include "commands/tablespace.h"
#include "replication/message.h"
#include "replication/origin.h"
#include "rmgrdesc.h"
#include "storage/standbydefs.h"
#include "utils/relmapper.h"

#define PG_RMGR(symname,name,redo,desc,identify,startup,cleanup,mask) \
	{ name, desc, identify},

const RmgrDescData RmgrDescTable[RM_MAX_ID + 1] = {
#include "C:\projects\postgres\src\include\access\rmgrlist.h"
};
