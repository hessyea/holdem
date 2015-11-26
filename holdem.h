#ifndef _TEXAS_HOLDEM_H
#define _TEXAS_HOLDEM_H
#include <netinet/in.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <time.h>

#include <event2/event.h>
#include <event2/buffer.h>
#include <event2/bufferevent.h>

#define err_quit(fmt, args...) do {\
    fprintf(stderr, "[file:%s line:%d]", __FILE__, __LINE__);\
    fprintf(stderr, fmt, ##args);\
    exit(1);\
} while (0)

#define TEXAS_RET_SUCCESS      0
#define TEXAS_RET_FAILURE     -1
#define TEXAS_RET_MIN_BET     -2
#define TEXAS_RET_MIN_RAISE   -3
#define TEXAS_RET_LOW_POT     -4
#define TEXAS_RET_MAX_PLAYER  -5
#define TEXAS_RET_ACTION      -6
#define TEXAS_RET_ALL_IN      -7

int holdem_db_init();
int holdem_db_close();
int holdem_db_put(const void *key, size_t key_len, const void *value, size_t val_len);
int holdem_db_get(const void *key, size_t key_len, void *value, size_t *val_len);

#endif
