#ifndef COMMIT_TS_H
#define COMMIT_TS_H

#include "/C/projects/postgres/src/include/access/xlog.h"
#include "/C/projects/postgres/src/include/datatype/timestamp.h"
#include "/C/projects/postgres/src/include/replication/origin.h"

extern PGDLLIMPORT bool track_commit_timestamp;

extern bool TransactionIdGetCommitTsData(TransactionId xid,
							 TimestampTz *ts, RepOriginId *nodeid);

#endif /* COMMIT_TS_H */
